/* 14. Escreva um programa que leia uma temperatura em graus Celsius e apresente convertida em graus
Fahrenheit. A fórmula de versão é F = (9 * C + 160) / 5, sendo F a temperatura Fahrenheit e C a
temperatura em Celsius. */

#include <stdio.h>

int main() {
   float celsius, fahrenheit;
   
   printf("Digite a temperatura em Celsius: ");
   scanf("%f", &celsius);

   fahrenheit = ( 9 * celsius + 160) / 5;

   printf("A temperatura %.1f em fahrenheit é %.1f", celsius, fahrenheit);

    return 0;   
}