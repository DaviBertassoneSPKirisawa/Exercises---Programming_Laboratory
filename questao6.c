/* 6. Fazer um programa para ler a altura (em metros) e o sexo de uma pessoa e calcular o seu peso ideal
através da seguinte fórmula:
para homens: 72.7 * altura - 58
para mulheres: 62.1 * altura - 44.7 */

#include <stdio.h>

int main() {
float altura,pesoideal;
char sexo;

printf("Qual o seu sexo (masculino (M) ou feminino (F)?\n");
scanf("%c", &sexo);
printf("Qual a sua altura?\n");
scanf("%f", &altura);


if(sexo == 'm' || 'M'){
    pesoideal = ((72.7 * altura) - 58);
    printf("O seu peso ideal é %.2f kg\n", pesoideal);
}else if(sexo == 'f' || 'F'){
    pesoideal = ((62.1 * altura) - 44.7);
    printf("O seu peso ideal é %.2f kg\n", pesoideal);
}else{
    printf("Sexo inválido!\n");

return 0;
}
}