#include<stdio.h>
#define TAM 2


     struct dados  {
     char nome[50];
     float idade;
     float peso;
     float altura;
};
int main(){
    
     struct dados alunos [TAM];

     int i;
     float imc = 0,cont=0,a1=0,a2=0,a3=0,a4=0,a5=0,a6=0;


     for(i = 0; i < TAM; i++){
           printf("Teste do IMC digite seu nome, idade, peso e altura : \n");
           gets(alunos[i].nome);
           scanf("%f",&alunos[i].idade);
           scanf("%f",&alunos[i].peso);
           scanf("%f%*c",&alunos[i].altura);
     }

     for(i = 0; i < TAM; i++){
           imc = alunos[i].peso/(alunos[i].altura * alunos[i].altura);
           cont ++;
           
           if(imc < 18.5){
              printf(" \n\nO IMC de %s e Menor que 18,5 portanto  Abaixo do peso normal ",alunos[i].nome);
              a1++;
           }
              
           else if(imc >= 18.5 && imc <= 24.9){
              printf("\n\nO IMC de %s esta entre 18,5 - 24,9  portanto  Peso normal ",alunos[i].nome);
              a2 ++;
           }
              
           else if(imc >= 25.0 && imc <= 29.9){
               printf("\n\nO IMC de %s esta entre 25,0 - 29,9  portanto   Excesso de peso ",alunos[i].nome);
               a3 ++;
           }
              
           else if(imc >= 30.4 && imc <= 34.9){
               printf("\n\nO IMC de %s esta entre 30,4 - 34,9   portanto  Obesidade classe I ",alunos[i].nome);
               a4 ++;
           }
              
            else if(imc >= 35.0 && imc <= 39.9){
              printf("\n\nO IMC de %s 35,0 - 39,9     Obesidade classe II ",alunos[i].nome);
              a5 ++;
           }
              
           else{
                printf("\n\nO IMC de  %s  Maior ou igual a 40,0     Obesidade classe III ",alunos[i].nome);
              a6 ++;  
           }
                
             
     } 
        a1 = (a1 * 100)/cont;
         a2 = (a2 * 100)/cont;  
          a3 = (a3 * 100)/cont;  
           a4 = (a4 * 100)/cont;  
            a5 = (a5 * 100)/cont;  
             a6 = (a6 * 100)/cont; 
             
        printf(" \n\n        IMC           |  CLASSIFICACOES ");
        printf(" \n\n    Menor que 18,5    |  Abaixo do peso normal %.2f %%",a1);
        printf("\n\n    18,5 - 24,9      | Peso normal %.2f  %%",a2);
        printf("\n\n    25,0 - 29,9      | Excesso de peso %.2f %%",a3);
        printf("\n\n    30,4 - 34,9      | Obesidade classe I %.2f %%",a4);
        printf("\n\n    35,0 - 39,9      | Obesidade classe II %.2f %%",a5);
        printf("\n\nMaior ou igual a 40,0| Obesidade classe III %.2f %%",a6);
        printf("\n\nClassificacao segundo a OMS a partir do IMC \n\n");  
           
           
           
     getch();
     return 0;
}
