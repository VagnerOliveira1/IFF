#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>


struct cel{
   int valor,id;
   struct cel *prox;
};

typedef struct cel celula;// a partir de agora cel se chamara celula

celula* iniciaLista();
void insereValor(celula *comeco);
void imprimeLista(celula *comeco);
int retornaposicaoLista(celula *comeco,int num);
void removeValor(celula *comeco,int num);

int main(){
   
   celula *inicio;  // inicio é um ponteiro que aponta para um tipo celula
   int numero;
   //inicializando a lista com um valor
   inicio = iniciaLista();
      
   //inserindo um novo valor na lista
   insereValor(inicio);
  
   insereValor(inicio);
   
     
   //imprimindo os elementos da lista
   imprimeLista(inicio);
       printf(" \ndigite um numero para saber a sua posicao ");
       scanf("%d",&numero);
   int result = retornaposicaoLista(inicio,numero);
       if(result){
            printf("\n\n O elemento esta na %d posicao",result);
           
       }
       else
           printf("\n\n O elemento nao esta  ");
       
   removeValor(inicio,numero);
    
   
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
   ini->id = 1;// É o id da celula
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
     elem->id = elem->id+1; // incrementa o identificador
     elem->prox = NULL; //o campo prox da celula apontada por elem recebe NULL
     ap->prox = elem; //o ultimo elemento da lista (representado por ap) aponta para elem
    
     
}

void imprimeLista(celula *ap){
     
    
     printf("\nElementos da Lista: ");
     for(; ap!=NULL; ap=ap->prox){
        printf("%d ", ap->valor);
     }  
        
}
int retornaposicaoLista(celula *ap,int num){
    for(; ap!=NULL; ap = ap->prox)
           if(ap->valor == num){
              return ap->valor;
           }
    return 0; 
        
}
void removeValor(celula *ap,int num){
     
       printf("\nNovos Elementos da Lista: ");
       for(;ap!= NULL; ap = ap->prox){
             if(ap->valor == num){
                  ap = ap->prox;
                  }  
        printf("%d ", ap->valor);
       }
     
}
