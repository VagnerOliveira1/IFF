#include<stdio.h>

int main(){
    int a =2,*p;
    
    printf("\n Conteudo de a :%d  ",a);
    printf("\nEndereco de memoria de a : %d ",&a);
    
    p=&a; // vari�vel p recebe o endere�o de mem�ria da vari�vel a 
    
    printf("\n\n Conteudo de p : %d  ",p); // imprime o valor do endere�o de mem�ria da vari�vel a
    
    printf("\nEndereco de memoria de p : %d ",&p);// imprime o valor do endere�o de mem�ria da vari�vel p
    
    printf("\nConteudo da variavel apontada por p :%d ",*p);//o p aqui � ponteiro e aponta para o endere�o de
                                             // mem�ria da vari�vel a e exibe o seu valor
    
    *p = *p + 10;  // valor apontado por p recebe valor antigo + 10
    
    
    printf("\n\n Conteudo de a : %d ",a); //imprime o novo valor da vari�vel a que mudou quando ponteiro
                    // 
    
    getch();
    
    return 0;
    
    
}
