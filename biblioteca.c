#include <stdio.h>
#include <locale.h>
#include "biblioteca.h"

void cadastrar_livro(Livro acervo[], int *totaLivros){
  
  printf("\n============= Cadastro de livros =============\n\n");
  if(totalLivros > MAX_LIVROS){
    printf("Erro! Número máximo de livros cadastrados\n")
  }
  else{
  printf("Título: ");
  scanf(" %99[^\n]", acervo[*totalLivros].titulo);
  
  printf("Autor: ");
  scanf(" %49[^\n]", acervo[*totalLivros].autor);
  
  acervo[*totalLivros].status = 0;
  
  printf("Livro cadastrado!\n");
    (*totalLivros)++;
  }
}

void listar_livros(Livro acervo[], int total_livros){
  FILE *ptrarquivo = fopen("biblioteca.txt", "w+");
}

void emprestar_livro(Livro acervo[], int totalLivros){
  int livroEncontrado = 1;

  printf("\n============= Empréstimo de livros =============\n\n");
  if (totalLivros == 0){
    printf("Erro! Nenhum livro cadastrado\n");
  }
  else{
    char tituloBusca[100];
  
  printf("Título: ");
  scanf(" %99[^\n]", tituloBusca);
  
  for (int i = 0; i < totalLivros; i++){
    
  if (strcasecmp(acervo[i].titulo, tituloBusca) == 0){
    livroEncontrado = 0;
    
    if(acervo[i].status == 0){
      acervo[i].status = 1;
      printf("Empréstimo de %s feito com sucesso!\n", acervo[i].titulo);
    }
    else{
      printf("Erro! %s Já foi emprestado.", acervo[i].titulo);
    }
  }
  }
  if(livroEncontrado == 1){
    printf("Erro! Livro não encontrado.\n")
  }
  }
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
  FILE *ptrarquivo = fopen("biblioteca.txt", "w+");




return 0;
}