//Perguntar o nome de um aluno, pergunte as 4 notas e calcule a média aritmética(média simples), exibindo no final.
#include <stdio.h>

int main() {
    char nome[30]= "";
    int nota1, nota2, nota3, nota4, total = 0;
    float media = 0;

    printf("Qual é o nome do aluno? \n");
    
    printf("Aluno: ");
    scanf("%s", nome);
    printf("Digite nota 1: ");
    scanf("%d", &nota1);
    printf("Digite nota 2: ");
    scanf("%d", &nota2);
    printf("Digite nota 3: ");
    scanf("%d", &nota3);
    printf("Digite nota 4: ");
    scanf("%d", &nota4);
    total = nota1 + nota2 + nota3 + nota4;
    media = total /4;
    
    printf("Aluno %s, tem a media de %.2f\n", nome, media);
    return 0;
}
