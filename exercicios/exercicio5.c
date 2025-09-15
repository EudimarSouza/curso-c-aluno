//Calcule a área de um quadrado. Como calcular: Area = lado * lado
#include <stdio.h>

int main(){
    int lado, area = 0;

    printf("Para saber a area do quadrado, informe o valor do Lado: \n");
    printf("Lado: ");
    scanf("%d", &lado);
    area = lado * lado;
    printf("O valor total da area é %d\n", area);

    return 0;
}
