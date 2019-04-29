#include <stdio.h>
#define TAM 3
typedef struct dados{
     char nome[50];
     int idade;
     float salario;
     int tempo;
};
void lista (  struct dados empregados[TAM] );
int busca (struct dados empregados[TAM],int id);

int main(){

     struct dados empregados[TAM];
     int i;
      lista ();
      
      busca (&empregados,&id);

     for(i = 0; i < TAM; i++){
           printf("Digite o nome do funcionario, idade (anos), salario (R$) e tempo de empresa (anos): \n");
           gets(empregados[i].nome);
           scanf("%d", &empregados[i].idade);
           scanf("%f", &empregados[i].salario);
           scanf("%d%*C ",&empregados[i].tempo);
           printf("\n");
     }

     for(i = 0; i < TAM; i++){
           if(empregados[i].salario > 2000){
                 printf("\nO Sr(a) %s  esta com a idade de %d anos.", empregados[i].nome, empregados[i].idade);
           }
     }

     getch();
     return 0;
}


