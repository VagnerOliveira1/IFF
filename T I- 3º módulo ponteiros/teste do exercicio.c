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
int retornaposicaoLista(celula *comeco,int num);
void removeValor(celula *comeco,int num);

int main(){
   
   celula *inicio;  // inicio � um ponteiro que aponta para um tipo celula
   int numero;
   //inicializando a lista com um valor
   inicio = iniciaLista();
      
   //inserindo um novo valor na lista
   insereValor(inicio);
  
   insereValor(inicio);
   
     
   //imprimindo os elementos da lista
   imprimeLista(inicio);
       printf(" digite um numero para saber se existe na lista ");
       scanf("%d",&numero);
   int result = retornaposicaoLista(inicio,numero);
       if(result){
            printf("\n\n O elemento esta na  lista ");
           
       }
       else
           printf("\n\n O elemento nao esta  ");
           
   printf("\n Qual o numero que deseja remover ");
    scanf("%d",&numero);
    
       
    removeValor (inicio,result);
    
    
   getch();
   
   
   return 0;
}

celula* iniciaLista(){
   
   int val; // val � do tipo inteiro
   celula *ini;// ini � um ponteiro que aponta para um tipo celula
   
   printf("\nDigite o primeiro elemento da lista: ");
   scanf("%d", &val);
     
   ini = malloc(sizeof(celula));//malloc cria, endere�o de memoria do tipo celula retorna o endere�o memoria alocado
   ini->valor = val; //acessa o campo valor da variavel apontada por ini
   
   ini->prox = NULL;// o campo prox da variavel apontada por ini recebe null

   return ini; // retorna o endere�o de memoria da celula
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
int retornaposicaoLista(celula *ap,int num){
    for(; ap!=NULL; ap = ap->prox)
           if(ap->valor == num){
              return ap->valor;
           }
    return 0; 
        
}
void removeValor(celula *ap,int num)
{
  celula *prox, *antes;
  if()
  {   // Caso a lista nao esteja vazia
      prox = inicio;
      antes = inicio;
      while (prox !=NULL)
      {
	 if (prox->valor == num) // achou !!
	 {
	    if (ap == inicio) // se esta removendo o primeiro da lista
	    {
	       inicio = inicio->prox;
	       // removeu !!
	    }
	    else  // esta removendo do meio da lista
	    {
	      antes->prox = ptr->prox;  // Refaz o encadeamento
	         // removeu !!
	    }
	 }
	
      }
      return 0; // Nao achou !!!
  }
}


            
              

     
}


/*ptr = inicio;
  while (ptr !=NULL) {
     if (ptr->info == dado)  // achou !!
	return (ptr);        // retorna um ponteiro para
                             //o inicio da lista
     else ptr = ptr->prox;
  }
  return NULL;
}
