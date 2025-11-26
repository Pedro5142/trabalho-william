#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

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

        while(menu == 1) {
            printf("\nDeseja continuar? (s = sim / n = não) ");

            getchar();
            if(getchar() != 's') {
                menu = -1;
            }
            printf("\n\n");
        }

        while(menu == 2) {
            printf("\nDeseja continuar? (s = sim / n = não) ");

            getchar();
            if(getchar() != 's') {
                menu = -1;
            }
            printf("\n\n");
        }

        while(menu == 3) {
            printf("\nDeseja continuar? (s = sim / n = não) ");

            getchar();
            if(getchar() != 's') {
                menu = -1;
            }
            printf("\n\n");
        }

        while(menu == 4) {
            printf("\nDeseja continuar? (s = sim / n = não) ");

            getchar();
            if(getchar() != 's') {
                menu = -1;
            }
            printf("\n\n");
        }

      while(menu == 5) {
        cadastrar_livro(acervo, &totalLivros);
        printf("\nDeseja continuar? (s = sim / n = não) ");
        getchar();
        if(getchar() != 's') {
        menu = -1;
    }
    printf("\n\n");
}

        while(menu == 6) {
            printf("\nDeseja continuar? (s = sim / n = não) ");

            getchar();
            if(getchar() != 's') {
                menu = -1;
            }
            printf("\n\n");
        }
    }

    return 0;
}