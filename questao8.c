/*8. Escreva um programa que receba um valor inteiro e apresente o resultado do valor lido elevado ao
quadrado.*/

#include <stdio.h>

int main() {
    int valor, quadrado;

    printf("Digite o número que será elevado ao quadrado:\n ");
scanf("%d", &valor);

    quadrado = valor*valor;
    
    printf("\nO resultado de %d elevado ao quadrado é: %d", valor, quadrado);

return 0;

}