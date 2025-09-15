//Perguntar o nome de quem está usando o programa e sua idade. Faça duas perguntas.
#include <stdio.h>

int main() {
    char nome[30]= "";
    int idade = 0;

    printf("Quem está usando o Programa? Informe o nome e idade \n");
    
    printf("Eu me chamo: ");
    scanf("%s", nome);
    printf("Minha idade é: ");
    scanf("%d", &idade);
    
    printf("Usuário  %s.Idade %d. \n", nome, idade);
    return 0;
}
