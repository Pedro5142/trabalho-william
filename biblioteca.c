#include <stdio.h>
#include <locale.h>
#include "biblioteca.h"

void cadastrar_livro(Livro acervo[], int *total_livros){
  FILE *ptrarquivo = fopen("biblioteca.txt", "w+");
}

void listar_livros(Livro acervo[], int total_livros){
  FILE *ptrarquivo = fopen("biblioteca.txt", "w+");
}

void emprestar_livro(Livro acervo[], int total_livros){
  FILE *ptrarquivo = fopen("biblioteca.txt", "w+");
}

void devolver_livro(Livro acervo[], int total_livros){
  FILE *ptrarquivo = fopen("biblioteca.txt", "w+");
}

void salvar_biblioteca(Livro acervo[], int total_livros){
  FILE *ptrarquivo = fopen("biblioteca.txt", "w+");
}

void carregar_biblioteca(Livro acervo[], int *total_livros){
  FILE *ptrarquivo = fopen("biblioteca.txt", "w+");
}

int main(){

  setlocale(LC_ALL, "PORTUGUESE");

  int opcaoInicial, opcaoLivro;
  FILE *ptrarquivo = fopen("biblioteca.txt", "w+");


  printf("Livros - 1\nAutores - 2\n\nEscolha uma opção:\n");
  scanf("%d", &opcaoInicial);


  if (opcaoInicial == 1){
        printf("Cadastrar um livro - 1\nVer os livros listados - 2\nEmprestar livro - 3\nDevolver livro - 4\n\nEscolha uma opção: ");
        scanf("%d", &opcaoLivro);
  }
  if (opcaoLivro == 1){
    printf("\nDigite o nome do livro que deseja listar:\n");
    fprintf(ptrarquivo, "\n%s");
  }




return 0;
}


