/* 13. Escreva um programa que leia duas variáveis A e B e efetue a troca dos valores. O objetivo  ́e que a
variável A passe a conter o valor de B e a variável B passe a possuir o valor de A. Apresente os valores
após a efetivação do processamento da troca. */

#include <stdio.h>

int main() {
    int a, b, c;

    puts("Digite o valor de A: ");
    scanf("%d", &a);
    puts("Digite o valor de B: ");
    scanf("%d", &b);

    c = a;
    a = b;
    b = c;
    
    printf("A = %d\n", a);
    printf("B = %d\n", b);

    return 0;   
}