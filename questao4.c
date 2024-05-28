/* 4. Sabendo que os argumentos da função “printf” podem ser expressões (a+b, a/b, a*b...), e não somente
argumentos, faça um programa capaz de ler um valor inteiro X e escrever seu triplo, seu quadrado, e
seu meio. */

#include <stdio.h>

int main() {
    int x;

printf("Informe o valor de x:");
scanf("%d", &x);

printf("O triplo de x é: %d\n", 3 * x);
printf("O quadrado de x é: %d\n", x * x);
printf("A metade de x é: %.1f\n", (float) x / 2); // Pois temos números ímpares que o resultado iria ser arredondado para baixo.

return 0;
}