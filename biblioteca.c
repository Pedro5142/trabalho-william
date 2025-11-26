#include <stdio.h>
#include <locale.h>
#include "biblioteca.h"

void cadastrar_livro(Livro acervo[], int *total_livros){
  FILE *ptrarquivo = fopen("biblioteca.txt", "a");
}

void listar_livros(Livro acervo[], int total_livros){
  for(int i = 0; i < total_livros; i++){
    printf("--------Livro %d--------\n", i + 1);
    printf("Título: %s\nAutor: %s\nStatus: ", acervo[i].titulo, acervo[i].autor);
    if(acervo[i].status == 0){
      printf("Disponível\n\n");
    }
    else{
      printf("Emprestado\n\n");
    }
  }
}

void emprestar_livro(Livro acervo[], int total_livros){
  
}

void devolver_livro(Livro acervo[], int total_livros){
  
}

void salvar_biblioteca(Livro acervo[], int total_livros){
  FILE *ptrarquivo = fopen("biblioteca.txt", "a");
}

void carregar_biblioteca(Livro acervo[], int *total_livros){
  FILE *ptrarquivo = fopen("biblioteca.txt", "rb");
  
  printf("%d", *total_livros);

  if(ptrarquivo != NULL){
    
    int i = 0;
    int j = 0;

    while((j = fread(&acervo[i], sizeof(Livro), 1, ptrarquivo)) == 1){
      printf("%d ", j);
      *total_livros = *total_livros + 1;
      i++;
    }

    printf("Biblioteca carregada. Total de livros: %d\n", *total_livros);
  }
  else{
    printf("Erro ao abrir arquivo\n");
  }

  fclose(ptrarquivo);
}