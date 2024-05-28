/* 3. Faça um programa capaz de ler um valor real e escrevê-lo com apenas uma casa decimal. */

#include <stdio.h>

int main(){
float x;

printf( "Digite um numero: ");
scanf("%f", &x);
printf("Número digitado = %.1f\n", x);

return 0;
} 