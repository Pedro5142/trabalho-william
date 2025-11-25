#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "biblioteca.h"

int main(){

    setlocale(LC_ALL, "portuguese");

    Livro acervo[MAX_LIVROS];

    int menu = -1, opcao;

    while(menu != 0){
        printf("=============Sistema Biblioteca=============\n\n");
        printf("O que deseja fazer?\n");
        printf("1 - Carregar Biblioteca\n2 - Listar Livros\n3 - Emprestar livro\n4 - Devolver livro\n5 - Cadastrar Livro\n6 - Salvar biblioteca\n0 - Sair\n\n");
        scanf("%d", &menu);

        if(menu == 1){
            //carregar_biblioteca();
            printf("\n");
        }

        if(menu == 2){
            //listar_livros();
            printf("\n");
        }

        while(menu == 3){
            
            //emprestar_livro();

            printf("\nDeseja emprestar outro livro? (1 = sim / 2 = não) ");
            scanf("%d", &opcao);

            if(opcao != 1){
                menu = -1;
            }
            printf("\n");
        }
        
        while(menu == 4){
            
            //devolver_livro();
            
            printf("\nDeseja devolver outro livro? (1 = sim / 2 = não) ");
            scanf("%d", &opcao);

            if(opcao != 1){
                menu = -1;
            }
            printf("\n");
        }
        
        while(menu == 5){

            //cadastrar_livro();
            
            printf("\nDeseja cadastrar outro livro? (1 = sim / 2 = não) ");
            scanf("%d", &opcao);

            if(opcao != 1){
                menu = -1;
            }
            printf("\n");
        }
        
        if(menu == 6){
            //salvar_biblioteca();
            printf("\n");
        }
    }

    printf("============================================\n");

    return 0;
}
