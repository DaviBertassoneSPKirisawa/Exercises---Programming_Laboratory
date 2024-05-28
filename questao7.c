/*7. Faça um programa que leia uma quantidade de horas, minutos e segundos e imprima o total de segundos.*/

#include <stdio.h>

int main() {
    int horas, minutos, segundos, tempo_em_segundos;

    printf("Digite as horas: ");
    scanf("%d", &horas);

    printf("Agora digite os minutos: ");
    scanf("%d", &minutos);

    printf("Por fim, os segundos: ");
    scanf("%d", &segundos);

    horas = horas * 3600;
    minutos = minutos * 60;
    tempo_em_segundos = horas + minutos + segundos;

    printf("O horário ficou: %d segundos\n", tempo_em_segundos);
    return 0;
}
