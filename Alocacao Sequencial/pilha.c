#include <stdio.h>
#include <stdlib.h>
#include "alocacao.h"

int topo;

int insere(pilha no){
    int retorno = -1;

    if (topo != m){
        topo++;
        p[topo] = no;
        retorno = topo;
    }
}

pilha *remove(){
    pilha *retorno = NULL;

    if (topo != 0){
        retorno = &p[topo];
        topo--;
    }

    return retorno;
}