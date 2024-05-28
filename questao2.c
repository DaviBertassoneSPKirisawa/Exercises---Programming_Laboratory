/* 2. Faça um programa que leia um valor inteiro decimal X e escreva, na tela, este mesmo valor nas bases
hexadecimal e octal.
Ex.: Entre com o valor: 10
Hexadecimal: A
Octal: 12 */

#include<stdio.h>

int main(){
int x;

printf("Entre com o valor decimal de X:\n");
scanf("%d", &x);

printf("\nO hexadecimal de %d é: %X\n", x, x);

printf("O octal de %d é: %o\n", x, x);


return 0;
}
