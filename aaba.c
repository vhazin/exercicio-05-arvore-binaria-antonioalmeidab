#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    char dado;
    struct no *direita;
    struct no *esquerda;
}No;

No *criaArvore(int inicio, int fim, char (*ptrPreordem)[], char(*ptrEmordem)[], int indice_raiz){
    No *raiz = malloc(sizeof(No));

    raiz->dado = (*ptrPreordem)[indice_raiz];

}

int main() {
    int qtd_casos, qtd_nos;

    scanf("%d", &qtd_casos);
    char preordem[52], emordem[52];
    char (*ptr_preordem)[] = &preordem;
    char (*ptr_emordem)[] = &emordem;

    No *arvore = NULL;
    while(qtd_casos--){
        scanf("%d", &qtd_nos);
        scanf("%s %s", preordem, emordem);

        arvore = criaArvore(inicio, fim, preordem, emordem);
    }
    return 0;
}
