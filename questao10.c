/* 10. Escreva um programa que calcule e apresente o valor do volume de um caixa retangular utilizando a
fórmula VOLUME = COMPRIMENTO * LARGURA * ALTURA. */

#include <stdio.h>

int main() {
    float comprimento, largura, altura;
    float volume;

    printf("Digite, nesta ordem, o comprimento, largura e altura da caixa (em cm, sem espaçamentos e separados por barras / )\n");
    scanf("%f/ %f/ %f", &comprimento, &largura, &altura);

    volume = (comprimento * largura * altura) / 1000000; // Converter de cm³ para m³
    
    printf("O volume da caixa é : %.2f m³\n", volume);

    return 0;   
}