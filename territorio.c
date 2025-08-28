#include <stdio.h>
#include <locale.h>
#include <string.h>

#define TAM 5

typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} TERRITORIO;

int main() {
    setlocale(LC_ALL, "Portuguese");

    TERRITORIO territorio[TAM];
    int i;

    for (i = 0; i < TAM; i++) {
        printf("Nome do território %d: ", i + 1);
        scanf(" %[^\n]", territorio[i].nome);

        printf("Cor do território %d: ", i + 1);
        scanf("%s", territorio[i].cor);

        printf("Tropas do território %d: ", i + 1);
        scanf("%d", &territorio[i].tropas);
    }

    printf("\n--- Dados dos Territórios ---\n");
    for (i = 0; i < TAM; i++) {
        printf("Nome: %s | Cor: %s | Tropas: %d\n", 
               territorio[i].nome, territorio[i].cor, territorio[i].tropas);
    }

    return 0;
}
