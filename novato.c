#include <stdio.h>
#include <string.h>



// Estrutura para salvar o territorio
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};



int main() {
    // Vetor que armazenará até 5 territorios
    struct Territorio territorios[5];

    printf("=== Cadastre os territorios ===\n\n");

    // Cadastro dos 5 territorios
    for (int i = 0; i < 5; i++) {
        printf("Cadastro do território %d:\n", i + 1);

        // Leitura do nome do território
        printf("Digite o nome do território: ");
        getchar();
        fgets(territorios[i].nome, 30, stdin);

        // Leitura da cor do exército
        printf("Digite a cor do exército: ");
        fgets(territorios[i].cor, 10, stdin);

        // Leitura da quantidade de tropas
        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n"); // linha em branco para separar cadastros
    }

    // Exibição dos dados após o cadastro
    printf("\n=== Dados dos territorios Cadastrados ===\n\n");
    for (int i = 0; i < 5; i++) {
        printf("Território %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exército: %s\n", territorios[i].cor);
        printf("Quantidade de Tropas: %d\n", territorios[i].tropas);
        printf("---------------------------\n");
    }

    printf("Cadastro concluído com sucesso!\n");

    return 0;
}
