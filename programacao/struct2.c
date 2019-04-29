#include<stdio.h>
#define TAM 2

struct dados{
       char nome[50];
       int idade;
       float salario;

};

int main(){
    struct dados funcionarios[TAM];
    int i;
    
    for(i=0;i< TAM;i++){
    
         printf(" Digite o nome ,idade e salario  do %do funcinario\n",i+1);
         gets(funcionarios[i].nome);
         scanf("%d",&funcionarios[i].idade);
         scanf("%f%*c",&funcionarios[i].salario);
    }
    
    for(i=0;i<TAM;i++){
         printf("\n\n Dados do %do funcinario: ",i+1);
         printf("\nNome : %s",funcionarios[i].nome); 
         printf("\nIdade : %d",funcionarios[i].idade);  
         printf("\nSalario: %.2f",funcionarios[i].salario); 
    }
    getch();
    
    return 0;
    
}
