#include<stdio.h>

#define tam 5
struct dados{
        char nome[50];
       int id;
      
       int idade;
       float salario;
       int tempo;
};
     

 
void lista(struct dados empregados[tam]);

int busca( struct dados empregados[tam],int chave);

void imprime(struct dados empregados[tam],int chave);

int main(){
    struct dados empregados[tam];
    int result=0,x;       


    
   
    lista(empregados);
    
    
    printf("\nQual a matricula do funcionario desejado: ");
    scanf("%d",&x);
    
   // result = busca(empregados,x);           
               
    imprime(empregados,result);
    
    getch();
    return 0;
}    

void lista(struct dados empregados[tam]){
    int i;
    
 
    for(i=0;i<tam -2;i++){
           
         printf("\nDigite os dados do %do funcionario: ",i+1);
         printf("\nNome: ");gets(empregados[i].nome);
         printf("\nMatricula: ");scanf("%d",&empregados[i].id);
       
         printf("\nIdade: ");scanf("%d",&empregados[i].idade);
         printf("\nSalario: ");scanf("%f",&empregados[i].salario);
         printf("\nTempo: ");scanf("%d%*c",&empregados[i].tempo);
    }
}
int busca(struct dados empregados[tam],int x){
     
    int i,b,troca,y,j;
    while(i < tam -1){
    
        if(x > empregados[i].id && x < empregados[i].id){
             troca = i;
             i = x ;
             b = x;
         }
         i ++;
        
    }
    return b;  
    printf(" O b retorna %d",b);
}

void imprime(struct dados empregados[tam],int chave){
int i,cont = 0;



   for(i=0;i<tam;i++){
      if (empregados[i].id == chave){
            cont = 1;
            printf("\nNome: %s ",empregados[i].nome);
            printf("\nMatricula:%d",empregados[i].id);
            
            printf("\nIdade: %d",empregados[i].idade);
            printf("\nSalario: %.0f",empregados[i].salario);
            printf("\nTempo: %d",empregados[i].tempo);
       }
      
    }
    if(cont == 0)
     printf("\nErro matricula nao existe ");
        
     
}
