#include <stdio.h>
#include <stdlib.h>

typedef struct arvore{
    int chave;
    int valor;
    struct arvore *dir;
    struct arvore *esq;
}no;

no *alocaNo(int x){
    no *raiz = malloc(sizeof(no)); //aloca um no da raiz

    if(raiz == NULL){ //se nao alocar a raiz direito retorna NULL
        printf("\nErro ao alocar memoria\n");
        return NULL;
    }

    raiz->chave = x; //atribui a chave
    raiz->valor = x * 10; //atribui o valor
    raiz->esq = NULL; //esquerda nao tem elemento
    raiz->dir = NULL; //direita nao tem elemento

    return raiz; //retorna a raiz criada
}

no *insere(no *raiz, int chave){
    if(raiz == NULL){ //se a raiz for nula eu insiro na posicao
        return alocaNo(chave);
    }

    if(chave < raiz->chave){ //se a chave for menor ando pela esquerda
        raiz->esq = insere(raiz->esq, chave);
    }else if(chave > raiz->chave){ //se a chave for maior anda pela direita
        raiz->dir = insere(raiz->dir, chave);
    }else{ //se nao for maior ou menor a chave ja existe na arvore
        printf("\nChave ja existente na arvore",chave);
    }

    return raiz; //retorna a propria raiz
}

void preOrdem(no *raiz){ //imprime a arvore em pre ordem
    if(raiz != NULL){
        printf("\nChave: %d\n",raiz->chave);
        preOrdem(raiz->esq);
        preOrdem(raiz->dir);
    }
}

void emOrdem(no *raiz){ //imprime a arvora em ordem
    if(raiz != NULL){
        emOrdem(raiz->esq);
        printf("\nChave: %d\n",raiz->chave);
        emOrdem(raiz->dir);
    }
}

void posOrdem(no *raiz){ //imprime a arvore em pos ordem
    if(raiz != NULL){
        posOrdem(raiz->esq);
        posOrdem(raiz->dir);
        printf("\nChave: %d\n",raiz->chave);
    }
}

int main(){
    no *raiz = NULL;

    return 0;
}