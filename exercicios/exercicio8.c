//Desafio da Semana
// Fazer validação dos Input e tratar OutPut

#include <stdio.h>

int main(){
    
    char nomeCompleto[100]; 
    char dataNasc[100]; 
    char cidade[100]; 
    char pais[100]; 
    char endereco[100];
    char paisResidencia[100];
    char dataCadastro[100]; 
    char escolaridade[100];

    printf("|-------------------|\n");
    printf("|Formulário Cadastro|\n");
    printf("|-------------------|\n");
    printf("Nome Completo: ");
    scanf("%s\n", nomeCompleto);
    printf("Data de Nascimento: ");
    scanf("%s\n", dataNasc);
    printf("Cidade onde nasceu: ");
    scanf("%s\n", cidade);
    printf("País onde nasceu: ");
    scanf("%s\n", pais);
    printf("Endereço Completo: ");
    scanf("%s\n", endereco);
    printf("País de Residencia: ");
    scanf("%s\n", paisResidencia);
    printf("Data do Cadastro: ");
    scanf("%s\n", dataCadastro);
    printf("Escolaridade(Ensino Básico/Ensino Fundamental/Ensino Superior): ");
    scanf("%s\n", escolaridade);
    
    printf("|-------------------|\n");
    printf("|Ficha Cadastral|\n");
    printf("|-------------------|\n");
    printf("Nome Completo: %s \n", nomeCompleto);
    printf("Data de Nascimento: %s\n", dataNasc);
    printf("Cidade de Nascimento: %s\n", cidade);
    printf("País de Nascimento: %s\n", pais);
    printf("Endereço: %s\n", endereco);
    printf("País de Residencia: %s\n", paisResidencia);
    printf("Data do Cadastro: %s\n", dataCadastro);
    printf("Escolaridade: %s\n", escolaridade);

    return 0;
}
