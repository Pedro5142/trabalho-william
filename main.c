#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#include "biblioteca.h"

int main() {
    setlocale(LC_ALL, "portuguese");

    Livro acervo[MAX_LIVROS];
    int totalLivros = 0, menu = -1;
    

    while(menu != 0) {
        printf("============= Sistema Biblioteca =============\n\n");
        printf("O que deseja fazer?\n");
        printf("1 - Carregar Biblioteca\n");
        printf("2 - Listar Livros\n");
        printf("3 - Emprestar livro\n");
        printf("4 - Devolver livro\n");
        printf("5 - Cadastrar Livro\n");
        printf("6 - Salvar biblioteca\n");
        printf("0 - Sair\n\n");

        scanf("%d", &menu);

        if(menu == 1){
            carregar_biblioteca(acervo, &total_livros);
            printf("\n");
        }

        if(menu == 2){
            listar_livros(acervo, total_livros);
            printf("\n");
        }

        while(menu == 3){
            
            emprestar_livro();

            printf("\nDeseja emprestar outro livro? (1 = sim / 2 = não) ");
            scanf("%d", &opcao);

            if(opcao != 1){
                menu = -1;
            }
            printf("\n\n");
        }
        
        while(menu == 4){
            
            devolver_livro();
            
            printf("\nDeseja devolver outro livro? (1 = sim / 2 = não) ");
            scanf("%d", &opcao);

            if(opcao != 1){
                menu = -1;
            }
            printf("\n\n");
        }
        
        while(menu == 5){

            cadastrar_livro();
            
            printf("\nDeseja cadastrar outro livro? (1 = sim / 2 = não) ");
            scanf("%d", &opcao);

            if(opcao != 1){
                menu = -1;
            }
            printf("\n\n");
        }
        
        if(menu == 6){
            salvar_biblioteca();
            printf("\n");
        }
    }

    printf("============================================\n");

    return 0;
}