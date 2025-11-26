#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#include "biblioteca.h"

int main(){

    setlocale(LC_ALL, "portuguese");

    Livro acervo[MAX_LIVROS];

    int menu = -1, opcao, total_livros = 0;

    FILE *ptrarquivo2 = fopen("biblioteca.txt", "ab");

    strcpy(acervo[0].titulo, "titulo1");
    strcpy(acervo[0].autor, "autor1");
    acervo[0].status = 1;

    strcpy(acervo[1].titulo, "titulo2");
    strcpy(acervo[1].autor, "autor2");
    acervo[1].status = 0;

    fwrite(&acervo[0], sizeof(acervo[0]), 1, ptrarquivo2);
    fwrite(&acervo[1], sizeof(acervo[1]), 1, ptrarquivo2);

    for(int i = 0; i < 2; i++){
        printf("%s, %s, %d\n", acervo[i].titulo, acervo[i].autor, acervo[0].status);
    }

    fclose(ptrarquivo2);

    while(menu != 0){
        printf("=============Sistema Biblioteca=============\n\n");
        printf("O que deseja fazer?\n\n");
        printf("1 - Carregar Biblioteca\n2 - Listar Livros\n3 - Emprestar livro\n4 - Devolver livro\n5 - Cadastrar Livro\n6 - Salvar biblioteca\n0 - Sair\n");
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
            printf("\n");
        }
        
        while(menu == 4){
            
            devolver_livro();
            
            printf("\nDeseja devolver outro livro? (1 = sim / 2 = não) ");
            scanf("%d", &opcao);

            if(opcao != 1){
                menu = -1;
            }
            printf("\n");
        }
        
        while(menu == 5){

            cadastrar_livro();
            
            printf("\nDeseja cadastrar outro livro? (1 = sim / 2 = não) ");
            scanf("%d", &opcao);

            if(opcao != 1){
                menu = -1;
            }
            printf("\n");
        }
        
        if(menu == 6){
            salvar_biblioteca();
            printf("\n");
        }
    }

    printf("============================================\n");

    return 0;
}
