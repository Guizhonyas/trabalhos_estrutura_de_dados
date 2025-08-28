#include <stdio.h>
#include <locale.h>
#include <string.h>

struct Aluno {
    int matricula;
    char nome[30];
    char dt_nascimento[9];
    char curso[20];
    int turma;
    float nota1, nota2, media;
};
void cadastrarAluno(struct Aluno *a, char c);
void imprimirAluno(struct Aluno a, char c);
int main() {
    setlocale(LC_ALL, "Portuguese");

    struct Aluno aluno1, aluno2;
    struct Aluno *p1 = &aluno1, *p2 = &aluno2;

    printf("Parâmetros iniciais:\n");
    printf("Nome: exemplo\nCurso: Ciência da Computação\nTurma: 1\n\n");

    cadastrarAluno(p1, 'A');
    imprimirAluno(aluno1, 'A');

    cadastrarAluno(p2, 'B');
    imprimirAluno(aluno2, 'B');

    return 0;
}

void cadastrarAluno(struct Aluno *a, char c) {
    printf("\nCadastro do aluno %c\n", c);

    printf("Matrícula: ");
    scanf("%d", &a->matricula);

    printf("Nome: ");
    scanf(" %[^\n]", a->nome);

    printf("Data de nascimento (ddmmaaaa): ");
    scanf("%s", a->dt_nascimento);

    printf("Curso: ");
    scanf(" %[^\n]", a->curso);

    printf("Turma: ");
    scanf("%d", &a->turma);

    printf("Nota 1: ");
    scanf("%f", &a->nota1);

    printf("Nota 2: ");
    scanf("%f", &a->nota2);

    a->media = (a->nota1 + a->nota2) / 2.0;
}

void imprimirAluno(struct Aluno a, char c) {
    printf("\n--- Dados do Aluno %c ---\n", c);
    printf("Matrícula: %d\n", a.matricula);
    printf("Nome: %s\n", a.nome);
    printf("Data de Nascimento: %s\n", a.dt_nascimento);
    printf("Curso: %s\n", a.curso);
    printf("Turma: %d\n", a.turma);
    printf("Nota1: %.2f\n", a.nota1);
    printf("Nota2: %.2f\n", a.nota2);
    printf("Média: %.2f\n", a.media);
}
