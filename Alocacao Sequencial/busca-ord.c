#include <stdio.h>
#include <stdlib.h>

typedef struct no{ //Struct utilizado para testes de busca
    int chave;
    int valor;
} No;

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

int main(){

    int x2 = 50; 
    printf("Resultado de busca de %d na lista:%d", x2, buscaOrd(x2)); 

    return 0;
}