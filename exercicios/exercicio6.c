//Calcule a área de um círculo com base no raio informado. Como calcular: A = PI . R ao quadrado
#include <stdio.h>

int main(){
    float a, r, real = 0;
    const float pi = 3.141592654;

    printf("Para saber a area do círculo, informe o raio: \n");
    printf("Raio: ");
    scanf("%f", &r);
    a = pi * r * r;
    printf("A area do círculo é %.2f\n", a);

    return 0;
}
