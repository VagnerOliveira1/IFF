#include<stdio.h>

struct dados{
       char nome[50];
       int idade;
       float salario;

};

int main(){
    struct dados funcionarios;
    
    printf(" Digite o nome do funcinario,idade e salario :\n");
    gets(funcionarios.nome);
    scanf("%d",&funcionarios.idade);
    scanf("%f",&funcionarios.salario);
    
    
    printf(" Dados do funcinario :\n"); 
    
    printf("\nNome :%s",funcionarios.nome); 
    printf("\nIdade :%d",funcionarios.idade);  
    printf("\nSalario:%2.f",funcionarios.salario); 
    
    getch();
    
    return 0;
    
}
