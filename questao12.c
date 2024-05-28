/* 12. Escreva um programa que peça ao usuário para digitar dois números, obtenha-os do usuário e imprima
a soma, o produto, a diferença, o quociente e o resto da divisão dos dois números. */

#include <stdio.h>

int main() {
    float a,b,soma,produto,diferenca,quociente,resto;

    printf("Digite o primeiro numero: ");
    scanf("%f", &a);

    printf("Digite o segundo número: ");
    scanf("%f", &b);

    soma = a + b;
    produto = a * b;
    diferenca = a - b;
    quociente = (int)(a / b);
    resto = a - quociente * b;
    
    printf("A soma dos dois números é: %.2f\n", soma);
    printf("O produto dos dois números é: %.2f\n", produto);
    printf("A diferença dos dois números é: %.2f\n", diferenca);
    printf("O quociente dos dois números é: %.2f\n", quociente);
    printf("O resto dos dois números é: %.2f\n", resto);

    return 0;   
}