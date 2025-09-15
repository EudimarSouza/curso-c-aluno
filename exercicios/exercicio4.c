//Calcule o quadrado de um número. Pergunte o número, calcule e exiba no final o resultado.

#include <stdio.h>

int main(){
    int numero, resultado = 0;

    printf("Informe o número para calcular o quadrado: ");
    scanf("%d", &numero);
    resultado = numero * numero;
    printf("O quadro é  %d\n", resultado);

    return 0;
}
