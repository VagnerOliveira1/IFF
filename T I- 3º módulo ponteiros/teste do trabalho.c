#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


struct cel{
   int valor;
   struct cel *prox;
};

typedef struct cel celula;// a partir de agora cel se chamara celula

celula* iniciaLista();
void insereValor(celula *comeco);
void imprimeLista(celula *comeco);
int buscaLista(celula *comeco,int num);
celula*  removeValor(celula *comeco,int num);

int main(){
   
   celula *inicio;  // inicio é um ponteiro que aponta para um tipo celula
   int numero,result;
   //inicializando a lista com um valor
   inicio = iniciaLista();
      
   //inserindo um novo valor na lista
   insereValor(inicio);
  
   insereValor(inicio);
   
     
   //imprimindo os elementos da lista
      imprimeLista(inicio);
       printf(" digite um numero para saber se existe na lista ");
       scanf("%d",&numero);
      buscaLista(inicio,numero);
      
      if(result = buscaLista(inicio,numero)==0){
           printf("\n\n   lista vazia ");
      }
       if(result = buscaLista(inicio,numero)== 1){
            printf("\n\n O elemento nao esta na  lista ");
           
      }
       if (result= buscaLista(inicio,numero)==2) 
           printf("\n\n O elemento  esta na lista ");
           
   printf("\n Qual o numero que deseja remover ");
    scanf("%d",&numero);
    
       
    removeValor (inicio,result);
    
    imprimeLista(inicio);
    
    
   getch();
   
   
   return 0;
}

celula* iniciaLista(){
   
   int val; // val é do tipo inteiro
   celula *ini;// ini é um ponteiro que aponta para um tipo celula
   
   printf("\nDigite o primeiro elemento da lista: ");
   scanf("%d", &val);
     
   ini = malloc(sizeof(celula));//malloc cria, endereço de memoria do tipo celula retorna o endereço memoria alocado
   ini->valor = val; //acessa o campo valor da variavel apontada por ini
   
   ini->prox = NULL;// o campo prox da variavel apontada por ini recebe null

   return ini; // retorna o endereço de memoria da celula
}

void insereValor(celula *ap){


     int val;
     celula *elem;
     
     
     while(ap->prox != NULL)
        ap = ap->prox;
        
     
     
     printf("\nDigite um elemento para ser inserido na lista: ");     
     scanf("%d", &val);
     
     
     
     elem = malloc(sizeof(celula)); //aloca um espaco de memoria para elem
     elem->valor = val; //o campo valor da celula apontada por elem recebe o valor digitado
     elem->prox = NULL; //o campo prox da celula apontada por elem recebe NULL
     ap->prox = elem; //o ultimo elemento da lista (representado por ap) aponta para elem
    
     
}

void imprimeLista(celula *ap){
     
    
     printf("\nElementos da Lista: ");
     for(; ap!=NULL; ap=ap->prox){
        printf("%d ", ap->valor);
     }  
        
}
int buscaLista(celula *ap,int num){
    for(; ap!=NULL; ap = ap->prox)
           if(ap->valor == num){
              return ap->valor;
           }
    return 0; 
        
}
celula* removeValor(celula *ap,int num){
     printf(" \n\nNovos  Elementos da lista ");
     celula *ant ,*ini;
        if(buscaLista(ap,num)==2){
             if(ap->valor == num){
                  ant->prox = ap->prox ;
                  
             }
              ant = ap;
              ap = ap->prox;
              ini=ap;
              
            
            
            }
   return ap;
}  
 
