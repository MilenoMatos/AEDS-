#include <stdio.h>
#include <stdlib.h>
#include "alocacao.h"

int buscaOrd(int x){
    int i = 0;
    L1[n].chave = x;

    while(L[i].chave < x){
        i++;
    }

    if(i == n || L[i].chave != x){
        return -1;
    }else{
        return i;
    }
}