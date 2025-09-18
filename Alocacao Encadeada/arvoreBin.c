#include <stdio.h>
#include <stdlib.h>

typedef struct arvore{
    int chave;
    int valor;
    struct arvore *dir;
    struct arvore *esq;
}no;

no *buscaPai(no *raiz, int x){
    if(raiz == NULL || raiz->chave == x){
        return NULL;
    }

    if(raiz->esq != NULL && raiz->esq->chave == x){
        return raiz;
    }
    if(raiz->dir != NULL && raiz->dir->chave == x){
        return raiz;
    }
    
    if(raiz->esq != NULL && x < raiz->chave){
        return buscaPai(raiz->esq, x);
    }else{
        return buscaPai(raiz->dir, x);
    }
}

no *buscaArvore(no *raiz, int x){
    if(raiz == NULL || raiz->chave == x){
        return raiz;
    }

    if(x < raiz->chave){
        return buscaArvore(raiz->esq, x);
    }else{
        return buscaArvore(raiz->dir, x);
    }
}

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

no *insereArvore(no *raiz, int chave){
    if(raiz == NULL){ //se a raiz for nula eu insiro na posicao
        return alocaNo(chave);
    }

    if(chave < raiz->chave){ //se a chave for menor ando pela esquerda
        raiz->esq = insereArvore(raiz->esq, chave);
    }else if(chave > raiz->chave){ //se a chave for maior anda pela direita
        raiz->dir = insereArvore(raiz->dir, chave);
    }else{ //se nao for maior ou menor a chave ja existe na arvore
        printf("\nChave ja existente na arvore",chave);
    }

    return raiz; //retorna a propria raiz
}

void visita(no *raiz){
    printf("\nChave: %d limpa da memoria\n",raiz->chave);
    free(raiz);
}

void preOrdem(no *raiz){ //imprime a arvore em pre ordem
    if(raiz != NULL){
        printf("\nChave: %d limpa da memoria\n",raiz->chave);
        preOrdem(raiz->esq);
        preOrdem(raiz->dir);
    }
}

void emOrdem(no *raiz){ //imprime a arvora em ordem
    if(raiz != NULL){
        emOrdem(raiz->esq);
        printf("\nChave: %d limpa da memoria\n",raiz->chave);
        emOrdem(raiz->dir);
    }
}

void posOrdem(no *raiz){ //imprime a arvore em pos ordem
    if(raiz != NULL){
        posOrdem(raiz->esq);
        posOrdem(raiz->dir);
        visita(raiz);
    }
}

int main(){
    no *raiz = NULL;

    raiz = insereArvore(raiz, 30);
    raiz = insereArvore(raiz, 25);
    raiz = insereArvore(raiz, 35);
    raiz = insereArvore(raiz, 24);
    raiz = insereArvore(raiz, 27);
    raiz = insereArvore(raiz, 34);
    raiz = insereArvore(raiz, 38);

    printf("\nPre ordem:\n");
    preOrdem(raiz);

    printf("\nEm ordem:\n");
    emOrdem(raiz);

    printf("\nPos ordem:\n");
    posOrdem(raiz);

    raiz = NULL;

    return 0;
}