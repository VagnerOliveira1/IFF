#include<stdio.h>
void  preencheLista(int empregados);
int  busca1Funcionario(int id,int empregados);
void   preencheLista(int x);
    
#define TAM 3


     struct dados  {
     int id;
     char nome[50];
     int idade;
     float salario;
     int tempo;
     }
void preencheLista(int empregados){
    int i,id;
    char nome;
    
    for(i = 0; i < TAM; i++)
    printf("\n digite o id, nome, salario e tempo de casa do funcionario \n");
    scanf("%d",&id);
    gets(nome);
    scanf("%f",&salario);
    scanf("%d",&tempo);
     
}
int busca1Funcionario(id,empregados){
    int i,busca =0,x;
    printf("digite o id para localizar ");
    scanf("%d",&x);
   
    
    for(i = 0; i <= TAM; i++)
       if(empregado[i].id == x){
           busca = i;
           i = TAM +1 ;
       }
       else
        
           i = i +1 ;
           
    return busca;
    
  }
    void preencheLista(x){
    int i;
    for(i = 0; i < TAM; i++)
         if(funcinario.id == x)
         printf("id  %d nome %s salario %f e tempo %d do funcionario ",funcionario.id,funcionario.nome,funcionario.salario,funcionario.tempo);
     
}

int main(){
    
   
    
 preencheLista(empregados);
 
 busca1Funcionario(id,empregados);
 
  preencheLista(x);
    
     getch();
     return 0;
}
