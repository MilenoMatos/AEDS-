#include <stdio.h>
#include <stdlib.h>
#include "alocacao.h"

int insere(No no){
    if (m < n2){
        if (busca2(no.chave) == -1){ //se a chave nao esta na lista pode inserir
            L1[m] = no; //insere o elemento na lista
            m++; //aumenta o tamanho atual da lista
            return m; //retorna o tamanho atual da lista
        }else{
            return -1; //retorna -1 caso o elemento ja exista na lista 
        }
    }else{
        return -2; //retorna -2 caso a lista esteja cheia
    }
}
