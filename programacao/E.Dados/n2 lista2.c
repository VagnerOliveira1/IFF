#include<stdio.h>

struct dados{
       char nome[50];
       int id;
       int idade;
       float salario;
       int tempo;
};
     
int x,tam=2;
 
void lista(struct dados empregados[tam]);

int busca( struct dados empregados[tam]);

void imprime(struct dados empregados[tam]);

int main(){
    struct dados empregados[tam];
    int result=0;       
/* a busca deste retorna certo esta retornanado 1 ou 0.



*/

    
   
    lista(empregados);
    
    
    printf("\nQual a matricula do funcionario desejado: ");
    scanf("%d",&x);
    
    result = busca(empregados);           
               
    imprime(empregados);
    
    getch();
    return 0;
}    

void lista(struct dados empregados[tam]){
    int i;
    
 
    for(i=0;i<tam;i++){
           
         printf("\nDigite os dados do %do funcionario: ",i+1);
         printf("\nNome: ");gets(empregados[i].nome);
         printf("\nMatricula: ");scanf("%d",&empregados[i].id);
       
         printf("\nIdade: ");scanf("%d",&empregados[i].idade);
         printf("\nSalario: ");scanf("%f",&empregados[i].salario);
         printf("\nTempo: ");scanf("%d%*c",&empregados[i].tempo);
    }
}
int busca(struct dados empregados[tam]){
     
    int i,b;
    empregados[tam+1].id = x ;
         i=0;
         
    while(empregados[i].id != x){
            i++;   
    }   
    if (i != tam + 1)
            b = i;
            
                    
    else
            b = 0;   
    
    
    return b;  
}

void imprime(struct dados empregados[tam]){
int i,cont = 0;



   for(i=0;i<tam;i++){
      if (empregados[i].id == x){
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
