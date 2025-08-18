#include <stdio.h>
#include <stdlib.h>
#include "alocacao.h"

No L[6] = { 
    {10, 100},
    {20, 101},
    {30, 102},
    {40, 103},
    {50, 104}
};
int n = 5; 

int buscaOrd(int x){
    int i = 0;
    L[n].chave = x;

    while(L[i].chave < x){
        i++;
    }

    if(i == n || L[i].chave != x){
        return -1;
    }else{
        return i;
    }
}