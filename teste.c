#include <stdbool.h>
#include <stdio.h>

#define MAX 5

typedef struct no{
    int chave;
    int valor;
    struct no *prox;
}no;

typedef struct filaCircular {
    int dados[MAX];
    int fim;
    int inicio;
} filaCircular;

void inicializaFila(filaCircular *fila) {
    fila->inicio = 0;
    fila->fim = 0;
}

bool vazia(filaCircular *fila) {
    return (fila->inicio == fila->fim);
}

bool cheia(filaCircular *fila) {
    return ((fila->fim + 1) % MAX == fila->inicio);
}

bool insereFila(filaCircular *fila, int valor) {
    if (cheia(fila)) {
        return false; // não conseguiu inserir
    }

    fila->dados[fila->fim] = valor;
    fila->fim = (fila->fim + 1) % MAX;

    return true; // inseriu com sucesso
}

bool removeFila(filaCircular *fila, int *valor) {
    if (vazia(fila)) {
        return false; // não conseguiu remover
    }

    *valor = fila->dados[fila->inicio];
    fila->inicio = (fila->inicio + 1) % MAX;

    return true; // removeu com sucesso
}


void busca(no *ptlista, no **ant, no **pont, int x){
    *ant = ptlista;
    *pont = NULL;
    no *ptr = ptlista->prox;

    while(ptr != NULL){
        if(ptr->chave != x){
            *ant = ptr;
            ptr = ptr->prox;
        }else{
            *pont = ptr, ptr = NULL;
        }
    }
}

int main(){
    
}