#include<stdio.h>

int main(){
    int a =2,*p;
    
    printf("\n Conteudo de a :%d  ",a);
    printf("\nEndereco de memoria de a : %d ",&a);
    
    p=&a; // variável p recebe o endereço de memória da variável a 
    
    printf("\n\n Conteudo de p : %d  ",p); // imprime o valor do endereço de memória da variável a
    
    printf("\nEndereco de memoria de p : %d ",&p);// imprime o valor do endereço de memória da variável p
    
    printf("\nConteudo da variavel apontada por p :%d ",*p);//o p aqui é ponteiro e aponta para o endereço de
                                             // memória da variável a e exibe o seu valor
    
    *p = *p + 10;  // valor apontado por p recebe valor antigo + 10
    
    
    printf("\n\n Conteudo de a : %d ",a); //imprime o novo valor da variável a que mudou quando ponteiro
                    // 
    
    getch();
    
    return 0;
    
    
}
