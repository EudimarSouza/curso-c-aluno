//Calcule a área de um retângulo. Area = comprimento * altura
#include <stdio.h>

int main(){
    int altura, comprimento, area = 0;

    printf("Para saber a area do retangulo, informe os valores solicitado:  \n");
    printf("Altura: ");
    scanf("%d", &altura);
    printf("comprimento: ");
    scanf("%d", &comprimento);
    area = comprimento * altura;
    printf("A area do círculo é %d cm", area);

    return 0;
}
