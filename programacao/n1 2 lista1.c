#include <stdio.h>
#define TAM 3

 struct dados{
     char nome[50];
     int idade,id;
     float salario;
     int tempo;
};


void listafuncionario(struct dados funcionario [TAM]);

int buscafuncionario(int id , struct dados funcionario[TAM]);

void imprimefuncionario(int valor );

int main(){
     int i,id,r;
      //char nome[40];
      int resultado;
      struct dados funcionario[TAM];
      
      listafuncionario(funcionario);
      printf(" digite o id do funcionario ");
      scanf("%d",&id);
     
      resultado = buscafuncionario(id ,funcionario);
    


     getch();
     return 0;
}
void listafuncinario(struct dados funcionario[TAM]){
     int i;
    
   for(i = 0; i < TAM; i++){
           printf("Digite o id do funcionario, o nome, idade (anos), salario (R$) e tempo de empresa (anos): \n");
           scanf("%d",&funcionario[i].id);
           gets(funcionario[i].nome);
           scanf("%d", &funcionario[i].idade);
           scanf("%f", &funcionario[i].salario);
           scanf("%d%*C ",&funcionario[i].tempo);
           printf("\n");
     }   
}
int buscafuncionario(int id, struct dados funcionario[TAM]){
    int i,x=0;
    
     for(i = 0; i < TAM; i++){
           if((funcionario[i].id) == id){
                 x=i;
                 i=TAM+1;
                 //printf("\nO Sr(a) %s  esta com a idade de %d anos.", funcionario[i].nome, funcionario[i].idade);
           }
           else
               i=i+1;
     }
     return x;
}   
