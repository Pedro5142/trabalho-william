#include <stdio.h>
#include <locale.h>
#include <string.h>
#include "biblioteca.h"

void cadastrar_livro(Livro acervo[], int *totalLivros){
  
  printf("\n============= Cadastro de livros =============\n\n");
  if(*totalLivros > MAX_LIVROS){
    printf("Erro! Número máximo de livros cadastrados\n");
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

void listar_livros(Livro acervo[], int totalLivros){
  for(int i = 0; i < totalLivros; i++){
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
    printf("Erro! Livro não encontrado.\n");
  }
  }
}


void devolver_livro(Livro acervo[], int totalLivros) {
    char tituloBusca[100];
    int encontrado = 0;

    printf("Digite o titulo do livro a ser devolvido: ");
    fgets(tituloBusca, sizeof(tituloBusca), stdin);
    tituloBusca[strcspn(tituloBusca, "\n")] = '\0';

    for (int i = 0; i < totalLivros; i++) {

        if (strcmp(acervo[i].titulo, tituloBusca) == 0) {

            if (acervo[i].status == 1) {
                acervo[i].status = 0;
                printf("Livro devolvido com sucesso!\n");
            }
            else {
                printf("O livro já está disponível.\n");
            }

            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Livro não encontrado.\n");
    }
}


void salvar_biblioteca(Livro acervo[], int totalLivros) {
    FILE *ptrArquivo = fopen("biblioteca.txt", "w");
     if (ptrArquivo == NULL) {
        printf("Erro ao salvar a biblioteca.\n");
    }
    else {

        for (int i = 0; i < totalLivros; i++) {
          fwrite(&acervo[i], sizeof(Livro), 1, ptrArquivo);
        }

        fclose(ptrArquivo);
        printf("Biblioteca salva com sucesso!\n");
    }
}    

void carregar_biblioteca(Livro acervo[], int *totalLivros){
  FILE *ptrarquivo = fopen("biblioteca.txt", "rb");
  
  printf("%d", *totalLivros);

  if(ptrarquivo != NULL){
    
    int i = 0;
    int j = 0;

    while((j = fread(&acervo[i], sizeof(Livro), 1, ptrarquivo)) == 1){
      printf("%d ", j);
      *totalLivros = *totalLivros + 1;
      i++;
    }

    printf("Biblioteca carregada. Total de livros: %d\n", *totalLivros);
  }
  else{
    printf("Erro ao abrir arquivo\n");
  }

  fclose(ptrarquivo);
}