#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "biblioteca.h"

int main(){

    setlocale(LC_ALL, "portuguese");

    int menu = -1;

    while(menu != 0){
        printf("=============Sistema Biblioteca=============\n\n");
        printf("O que deseja fazer?\n");
        printf("1 - Carregar Biblioteca\n2 - Listar Livros\n3 - Emprestar livro\n4 - Devolver livro\n5 - Cadastrar Livro\n6 - Salvar biblioteca\n0 - Sair\n\n");
        scanf("%d", &menu);

        while(menu == 1){
            printf("\nDeseja continuar? (s = sim / n = não) ");

            getchar();
            if(getchar() != 's'){
                menu = -1;
            }
            printf("\n\n");
        }
        while(menu == 2){
            printf("\nDeseja continuar? (s = sim / n = não) ");

            getchar();
            if(getchar() != 's'){
                menu = -1;
            }
            printf("\n\n");
        }
        while(menu == 3){
            printf("\nDeseja continuar? (s = sim / n = não) ");

            getchar();
            if(getchar() != 's'){
                menu = -1;
            }
            printf("\n\n");
        }
        while(menu == 4){
            printf("\nDeseja continuar? (s = sim / n = não) ");

            getchar();
            if(getchar() != 's'){
                menu = -1;
            }
            printf("\n\n");
        }
        while(menu == 5){
            printf("\nDeseja continuar? (s = sim / n = não) ");

            getchar();
            if(getchar() != 's'){
                menu = -1;
            }
            printf("\n\n");
        }
         while(menu == 6){
            printf("\nDeseja continuar? (s = sim / n = não) ");

            getchar();
            if(getchar() != 's'){
                menu = -1;
            }
            printf("\n\n");
        }
    }


    return 0;
}
