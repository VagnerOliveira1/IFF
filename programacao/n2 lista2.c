#include <stdio.h>
#define TAM 3

struct dados funcionario [];
     
     char nome[50];
     int idade,id;
     float salario;
     int tempo;

void preencheLista( funcionario , id) ;
int busca1funcionario( funcionario , id );
void imprimefuncionari(  funcionario , id);


void preencheLista(   funcionario,id){
      char nome;
     int idade,id,i;
     float salario;
     int tempo;
     
     for(i = 0; i < TAM; i++){
           printf("Digite o  id  do funcionario, nome, idade (anos), salario (R$) e tempo de empresa (anos): \n");
           scanf("%d",&id);
           gets(  funcionario[i].nome);
           scanf("%d", &funcionario[i].idade);
           scanf("%f", &funcionario[i].salario);
           scanf("%d%*c",&funcionario[i].tempo);
           printf("\n");
     }
     
     
}
int busca1funcionario( funcionario,int id){
    int i,busca=0,x;
    while(i < = TAM){
            if (funcionario.id == x){
                 busca =1;
                 i = n +1;
            }
            else
            
             i = i +1;
            
            
            }
            return busca;
    
    
    
void imprimefuncionario(struct dados funcionario ,int id){
      for(i = 0; i < TAM; i++){
           printf("Dados  funcionario\n\n");
           printf("id %d  nome %s  idade %d  salario %f    tempo de empresa %d",funcionario.id,funcionario[i].nome,funcionario[i].idade,
           funcionario[i].salario,funcionario[i].tempo);
           printf("\n");
     }
     
     
     
      
}

int main(){

void preencheLista(funcionario,id);



int busca1funcionario(struct dados funcionario ,int id );


void imprimefuncionario(struct dados funcionario ,int id);


     
     getch();
     return 0;
}
