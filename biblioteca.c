#include <stdio.h>
#include <locale.h>
#include "biblioteca.h"

void cadastrar_livro(Livro acervo[], int *totalLivros) {
  printf("Título: ");
  scanf(" %99[^\n]", acervo[*totalLivros].titulo);
  
  printf("Autor: ");
  scanf(" %49[^\n]", acervo[*totalLivros].autor);
  
  acervo[*totalLivros].status = 0;
  
  printf("Livro cadastrado!\n");

  FILE *ptrArquivo = fopen("biblioteca.txt", "a");
  // 'a' adiciona sem apagar o conteúdo
  fprintf(ptrArquivo, "%s/%s/%d\n", acervo[*totalLivros].titulo, acervo[*totalLivros].autor, acervo[*totalLivros].status);
  fclose(ptrArquivo);
  
    (*totalLivros)++;
}

void listar_livros(Livro acervo[], int totalLivros) {
    FILE *ptrArquivo = fopen("biblioteca.txt", "w+");
}

void emprestar_livro(Livro acervo[], int totalLivros) {
    FILE *ptrArquivo = fopen("biblioteca.txt", "w+");
}

void devolver_livro(Livro acervo[], int totalLivros) {
    FILE *ptrArquivo = fopen("biblioteca.txt", "w+");
}

void salvar_biblioteca(Livro acervo[], int totalLivros) {
    FILE *ptrArquivo = fopen("biblioteca.txt", "w+");
}

void carregar_biblioteca(Livro acervo[], int *totalLivros) {
    FILE *ptrArquivo = fopen("biblioteca.txt", "w+");
}

int main() {
    FILE *ptrArquivo = fopen("biblioteca.txt", "w+");

    return 0;
}