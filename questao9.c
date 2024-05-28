/* 9. Escreva um programa que leia um valor numérico inteiro e apresente como resultado os seus valores
sucessor e antecessor.*/

#include <stdio.h>

int main() {
    int valor, sucessor, antecessor;

    printf("Digite um número: ");
    scanf("%d", &valor);

    printf("O número digitado foi: %d\n", valor);

    sucessor = valor + 1;    
    antecessor = valor - 1; 

    printf("O sucessor de %d é %d e seu antecessor é %d\n", valor, sucessor, antecessor);

    return 0;
}
