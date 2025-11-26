#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#define MAX_LIVROS 100

typedef struct Livro{
    char titulo[100];
    char autor[50];
    int status; // 0 = disponível, 1 = emprestado
} Livro;

void cadastrar_livro(Livro acervo[], int *total_livros);
void listar_livros(Livro acervo[], int total_livros);
void emprestar_livro(Livro acervo[], int total_livros);
void devolver_livro(Livro acervo[], int total_livros);
void salvar_biblioteca(Livro acervo[], int total_livros);
void carregar_biblioteca(Livro acervo[], int *total_livros);

#endif
