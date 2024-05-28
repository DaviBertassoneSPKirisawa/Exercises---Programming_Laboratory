/* 11. Elabore um programa que apresente o valor da conversão em dólar de um valor lido em real. O
programa deve solicitar o valor da cotação do dólar e também a quantidade de reais que o usuário
deseja converter. */

#include <stdio.h>

int main() {
    float cotacaoDolar,real;
    float valorConvertido;

printf("Digite a cotação atual do dólar(em reais): ");
    scanf("%f", &cotacaoDolar);
  
printf("Digite a quantidade de reais que deseja converter: ");
    scanf("%f", &real);

valorConvertido = real / cotacaoDolar;

printf("O valor em dólares é: %.2f", valorConvertido);
    return 0;   
}