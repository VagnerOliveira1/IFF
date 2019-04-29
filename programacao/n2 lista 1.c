#include<stdio.h>
#define TAM 2


     struct dados  {
     char nome[50];
     int idade;
     float salario;
     int tempo;
};
int main(){
    
     struct dados empregados [TAM];

     int i,cont=0;


     for(i = 0; i < TAM; i++){
           printf("Digite o nome do funcionario, idade (anos), salario (R$) e tempo de empresa (anos): \n");
           gets(empregados[i].nome);
           scanf("%d",&empregados[i].idade);
           scanf("%f",&empregados[i].salario);
           scanf("%d%*c",&empregados[i].tempo);
     }

     for(i = 0; i < TAM; i++){
           
           if( empregados[i].tempo > 8 ){
                        
                   if(empregados[i].salario > 3000 && empregados[i].salario < 10000){ 
                                                 
                        while (cont < 1){
                             printf(" EMPREGADOS QUE ATENDEM AOS QUESITOS  \n\n\n");
                             break;
                        }
                        
                        cont ++;
                        printf(" %s  com  %d anos de idade \n " ,empregados[i].nome,empregados[i].idade);
                  }
             
           }
     
           
     }
     if(cont == 0 )
          printf("\n Nao existem funcionarios com esses dados  na empresa ");
     else
         printf(" \n TOTAL  %d ",cont);
         
     getch();
     return 0;
}
