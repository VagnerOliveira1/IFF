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
     int valor_busca,valor_removido,opcao=0;
     celula *inicio = NULL;
               
  
do{   
    
          printf("\n\n.......: LISTA ENCADEADA :....... ");
          printf("\n\n     1-Inicializar a Lista \n");
          printf("\n\n     2-Insrir elementos na Lista\n");
          printf("\n\n     3-Imprimir elementos da Lista\n");
          printf("\n\n     4-Remover elementos da Lista\n");
          printf("\n\n     5-Buscar elementos na Lista\n");
          printf("\n\n     6-SAIR\n");
          scanf("%d",&opcao);
          
          if((opcao == 2)&&(inicio==NULL)){
                printf("\n\n LISTA VAZIA  INICIALIZE A LISTA PRIMEIRO \n\n ");
                opcao=0;
          }
          else if ((opcao == 4)&&(inicio==NULL)) {
                printf("\n A LISTA ESTA VAZIA INICIALIZE A LISTA PRIMEIRO \n\n ");
                opcao = 0;
          } 
          else if ((opcao == 1)&&(inicio!=NULL)) {
                printf("\n A LISTA ESTA INICIALIZADA \n\n ");
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
                     scanf("%d",&valor_removido);   
                     inicio = removeValor(inicio,valor_removido );
                     break;
                     
                 case 5 :
                     printf("\n\nDIGITE O NUMERO PARA BUSCAR :\n\n ");
                     scanf("%d",&valor_busca);
         
                     if(buscaValor(inicio,valor_busca)==2){
                           printf("\n\n O  NUMERO %d NAO ESTA NA LISTA ",valor_busca); 
                     }
                     
                     else if (buscaValor(inicio,valor_busca)==1) { 
                           printf("\n\n O NUMERO %d ESTA NA LISTA  ",valor_busca);
                     }
                     else if (buscaValor(inicio,valor_busca)==0){
                          printf("\n\n A LISTA ESTA VAZIA !!! ");                                   
                     }                                
                    break;
    
            }
    
  }while(opcao!=6);    
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
         printf("\n\n A LISTA ESTA VAZIA !!!\n\n");
     }   
     else{ 
         printf("\nVALORES CONTIDOS NA LISTA: ");
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
                printf("\n\n NUMERO %d FOI REMOVIDO DA  LISTA \n\n",num); 
                                                     
        }
      else
          printf("\n\n NUMERO %d NAO ESTA NA LISTA \n\n",num);
          
 return comeco ; 
         
} 

 
