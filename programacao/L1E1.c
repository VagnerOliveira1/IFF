#include <stdio.h>
#define TAM 2

struct dados{
     char nome[100];
     int idade;
     float salario;
     int tempresa;
};

int main(){

     struct dados empregados[TAM];
     int i;


     for(i = 0; i < TAM; i++){
           printf("Digite o nome do funcionario, idade (anos), salario (R$) e tempo de empresa (anos): \n");
           gets(empregados[i].nome);
           scanf("%d", &empregados[i].idade);
           scanf("%f", &empregados[i].salario);
           scanf("%d%*c", &empregados[i].tempresa);
           printf("\n");
     }

     for(i = 0; i < TAM; i++){
           if(empregados[i].salario > 2000){
                 printf("\nO Sr(a) %s  esta com a idade de %d anos.", empregados[i].nome, empregados[i].idade);
           }
     }
     if(empregados[i].salario < 2000 == 0)
            printf(" nao existem funcionarios com esses dados ");  
     getch();
     return 0;
}
