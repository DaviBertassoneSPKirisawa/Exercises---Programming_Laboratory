/* 5. Escreva um programa que pegue o valor de uma conta de restaurante e imprima o valor total a ser
pago, considerando que o restaurante cobra 10% de taxa para o garçom. */

#include <stdio.h>

int main(){
float conta, valorfinal;

printf("Informe o valor da conta:\n");
scanf("%f", &conta);

valorfinal = (conta * 1.1);

printf("O total da conta, com a taxa do garçom é de %.2f\n reais", valorfinal);
    return 0;
}
