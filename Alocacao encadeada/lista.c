#include <stdio.h>
#include <stdlib.h>
#include "alocacao.h"

typedef struct lista{
    int chave;
    int valor;
    struct lista *prox;
}no;

void buscaLista(no *ptlista, int x, no **ant, no **pont){
    no *ptr = ptlista->prox;
    *ant = ptlista;
    *pont = NULL;

    while(ptr != NULL){
        if(ptr->chave < x){
            *ant = ptr;
            ptr = ptr->prox;
        }else if(ptr->chave == x){
            *pont = ptr;
            ptr = NULL;
        }else{
            ptr = NULL;
        }
    }
}

int insereLista(no *ptlista, no *inserido){
    int retorno = -1;
    no *ant; no *pont;
    buscaLista(ptlista, inserido->chave, &ant, &pont);

    if(pont == NULL){
        inserido->prox = ant->prox;
        ant->prox = inserido;
        retorno = 0;
    }
    return retorno;
}

no *removeLista(no *ptlista, int x){
    no *retorno = NULL;
    no *ant; no *pont;
    buscaLista(ptlista, x, &ant, &pont);

    if(pont != NULL){
        ant->prox = pont->prox;
        retorno = pont;
    }

    return retorno;
}

void imprimeLista(no *ptlista){
    no *aux = ptlista->prox;

    while(aux != NULL){
        printf("\nChave: %d\n", aux->chave);
        aux = aux->prox;
    }
}

void liberaLista(no *ptlista){
    no *aux = ptlista->prox;

    while(aux != NULL){
       no *aux2 = aux->prox;
        free(aux);
        aux = aux2;
        printf("\nLimpou\n");
    }
    free(ptlista);
}

no *alocaNo(int x){
    no *novoNo = (no *) malloc(sizeof(no));

    if(novoNo == NULL){
        printf("\nErro ao alocar memoria\n");
        return NULL;
    }

    novoNo->chave = x;
    novoNo->prox = NULL;

    return novoNo;
}

int main(){

    no *ptlista = malloc(sizeof(no));
    ptlista->prox = NULL;

    return 0;
}
