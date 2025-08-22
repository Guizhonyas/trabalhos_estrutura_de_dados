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

void imprimirAluno(struct Aluno a, char c) {
    printf("\nAluno %c\n", c);
    printf("Matrícula: %d\n", a.matricula);
    printf("Nome: %s\n", a.nome);
    printf("Data de Nascimento: %s\n", a.dt_nascimento);
    printf("Curso: %s\n", a.curso);
    printf("Turma: %d\n", a.turma);
    printf("Nota 1: %.2f\n", a.nota1);
    printf("Nota 2: %.2f\n", a.nota2);
    printf("Média: %.2f\n", a.media);
}

int main() {
    setlocale(LC_ALL, "");

    struct Aluno aluno1, aluno2;

    printf("Cadastro do Aluno 1:\n");
    printf("Matrícula: "); scanf("%d", &aluno1.matricula);
    printf("Nome: "); scanf(" %[^\n]", aluno1.nome);
    printf("Data de Nascimento: "); scanf("%s", aluno1.dt_nascimento);
    printf("Curso: "); scanf(" %[^\n]", aluno1.curso);
    printf("Turma: "); scanf("%d", &aluno1.turma);
    printf("Nota 1: "); scanf("%f", &aluno1.nota1);
    printf("Nota 2: "); scanf("%f", &aluno1.nota2);
    aluno1.media = (aluno1.nota1 + aluno1.nota2) / 2;

    printf("\nCadastro do Aluno 2:\n");
    printf("Matrícula: "); scanf("%d", &aluno2.matricula);
    printf("Nome: "); scanf(" %[^\n]", aluno2.nome);
    printf("Data de Nascimento: "); scanf("%s", aluno2.dt_nascimento);
    printf("Curso: "); scanf(" %[^\n]", aluno2.curso);
    printf("Turma: "); scanf("%d", &aluno2.turma);
    printf("Nota 1: "); scanf("%f", &aluno2.nota1);
    printf("Nota 2: "); scanf("%f", &aluno2.nota2);
    aluno2.media = (aluno2.nota1 + aluno2.nota2) / 2;

    imprimirAluno(aluno1, 'A');
    imprimirAluno(aluno2, 'B');

    return 0;
}
