#include<stdio.h>

void trocarporValor(int varA,int varB);
void trocarporReferencia(int *pA,int *pB);

int main(){
    
    int a = 8,b = 5;
    
    trocarporValor(a,b);
    
    printf("\nValor de a e b depois a troca por valor : ");
    
    printf("\n a : %d ",a);
    printf("\n a : %d ",b);
    
    trocarporReferencia(&a,&b);
    
    printf("\nValor de a e b depois a troca por Referencia : ");
    
    printf("\n a : %d ",a);
    printf("\n a : %d ",b);
    
    getch();
    
    return 0;
    
}
void trocarporValor(int varA,int varB){
     
     int aux;
     aux = varA; 
     varA = varB;
     varB = aux;
     
} 
void trocarporReferencia(int *pA,int *pB){
     
     int aux;
     aux = *pA; //vari�vel 'aux' recebe o valor da vari�vel 'a' que � apontada por '*pA' que recebeu seu endere�o de mem�ria  
     *pA = *pB;//o ponteiro '*pA' recebe o valor do ponteiro '*pB' que referencia o valor de'b'que recebeu seu endere�o de mem�ria 
     *pB = aux; //o ponteiro '*pB' recebe o valor da vari�vel auxiliar 'aux' que cont�m o valor de inicial do ponteiro '*pA'  
      
     
} 
