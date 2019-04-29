#include<stdio.h>
#include<stdlib.h>
#include <malloc.h>


struct cel{
   int valor;
   struct cel *prox;
};

typedef struct cel celula;

celula* iniciaLista();
void insereValor(celula *comeco);
void imprimeLista(celula *comeco);
int buscaValor(celula *comeco,int num);
celula* removeValor (celula *comeco ,int num);


int main (void){
     int opcao=0;    
     int valor_busca,result_busca;
     celula *inicio = NULL,*aux_remocao=NULL;
               
  
do{   
    
     printf("\n\n.......: LISTA ENCADEADA :....... ");
     printf("\n\n        INICIALIZAR........... (1)\n");
     printf("\n\n........INSERIR................(2)\n");
     printf("\n\n........LISTAR................(3)\n");
     printf("\n\n........REMOVER...............(4)\n");
     printf("\n\n........BUSCAR................(5)\n");
     printf("\n\n........SAIR..................(6)\n");
     scanf("%d",&opcao);
          
           if((opcao == 2)&&(inicio==NULL)){
                printf("\n LISTA VAZIA NAO PODE INSERIR ANTES DE INICIAR  ");
                opcao=0;
               
           }
           else if((opcao == 4)&&(inicio==NULL)){
                printf("\nLISTA VAZIA NAO PODE REMOVER ANTES DE INICIAR  ");
                opcao=0;
           }    
           else if  ((opcao==3)&&(inicio==NULL)){
               printf("\n LISTA VAZIA ANTES DE LISTAR INICIALIZE A LISTA PRIMEIRO ");
               opcao=0;
          }  
         
           else if((opcao == 5)&&(inicio==NULL)){
                printf("\n A LISTA ESTA VAZIA NAO PODE BUSCAR ANTES DE INICIAR  ");
                opcao=0; 
           }
          else if ((opcao == 1)&&(inicio!=NULL)) {
                printf("\n A LISTA ESTA INICIALIZADA \n ");
                opcao = 0;
           }
         
         
           switch(opcao){
                 case 1 :
                     inicio = iniciaLista(); //inicializando a lista com um valor
                     break;
                     
                 case 2:
                     insereValor(inicio);
                     break;
                     
                 case 3 :
                     imprimeLista(inicio);
                     break;
                     
                 case 4:
                      printf("\n\n DIGITE O VALOR PARA REMOVER \n\n");
                      scanf("%d",valor_busca); 
                      inicio=removeValor(inicio,valor_busca );
                      
                      break;
                     
                 case 5 :
                     printf("\n\nDIGITE O NUMERO PARA BUSCAR :\n\n ");
                     scanf("%d",&valor_busca);
         
                     if(buscaValor(inicio,valor_busca)==2){
                           printf("\n\n O  NUMERO NAO ESTA NA LISTA "); 
                     }
                     
                     else if (buscaValor(inicio,valor_busca)==1) { 
                           printf("\n\n O NUMERO ESTA NA LISTA  ");
                     }
                    else if (buscaValor(inicio,valor_busca)==0){
                          printf("\n\n A LISTA ESTA VAZIA  ");                                   
                     }                                
                     break;
    
            }
    
  }while((opcao!=6)||(opcao==0));    
  system ("PAUSE");
  return 0;
}
celula* iniciaLista(){
   
   int val;
   celula *ini;
   printf("\n\nDIGITE O NUMERO >=  0 PARA INICIALIZAR \n\n");
   do{    
        scanf("%d", &val);
   }while(val<=0);
     
   ini = malloc(sizeof(celula));
   ini->valor = val;
   ini->prox = NULL;

   return ini;
}
void insereValor(celula *comeco){

     int val;
     celula *elem, *ap;
     
     ap=comeco; 
     while(ap->prox != NULL)
        ap = ap->prox;
     
     do{
       printf("\nDIGITE O NUMERO > 0 PARA INSERIR NA LISTA: \n\n");     
       scanf("%d", &val);
     }while(val<=0);
     
     elem = malloc(sizeof(celula)); //aloca um espaco de memoria para elem
     elem->valor = val; //o campo valor da celula apontada por elem recebe o valor digitado
     elem->prox = NULL; //o campo prox da celula apontada por elem recebe NULL
     ap->prox = elem; //o ultimo elemento da lista (representado por ap) aponta para elem
     
}
void imprimeLista(celula *comeco){
     celula *ap;
     ap = comeco;
     
     if(ap == NULL){
         printf(" \n\nLISTA VAZIA ");
     }   
     
    
     else{
          
         printf("VALORES CONTIDOS NA LISTA: ");
         for(ap=comeco; ap!=NULL; ap=ap->prox){
             printf("%d ", ap->valor);
         
        }
     }
     
}
int buscaValor(celula *comeco,int num){
   celula *ap;
   
   ap=comeco;
   if(ap == NULL){
    
   return 0;       
   }      
   while(ap != NULL){
         if(ap->valor == num){ 
             return 1;
         }            
      
         ap=ap->prox;
   }  
    
  return 2;
    
}
   celula* removeValor (celula *comeco,int num){  
           celula *ap ,*ant;
           ap=comeco;
           ant=NULL;
   if (buscaValor(comeco,num)==1){
                                  
                while((ap!=NULL)&&(ap->valor!=num)){
                    ant = ap;
                    ap = ap->prox;                            
                }
                if(ap == NULL){
                     return comeco;

                } 
                     
                if(ant == NULL){
                 comeco = ap->prox;
                }
                else{
                ant->prox =ap->prox;
                }
                printf("\n\n NUMERO %d REMOVIDO DA  LISTA \n\n",num); 
                                                     
        }
      else
          printf("\n\n NUMERO NAO ESTA NA LISTA \n\n");
          
 return comeco ; 
         
} 

 
