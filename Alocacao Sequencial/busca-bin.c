#include <stdio.h>
#include <stdlib.h>

typedef struct no{ //Struct utilizado para testes de busca
    int chave;
    int valor;
} No;

No L[5] = { 
    {10, 100},
    {20, 101},
    {30, 102},
    {40, 103},
    {50, 104}
};
int n = 5; 

int buscaBin(int x){
    int inf = 0, sup = n-1, busca = -1, meio;

    while(inf <= sup){
        meio = (inf+sup)/2;

        if(L[meio].chave == x){
            busca = meio;
            break;
        }else if(L[meio].chave < x){
            inf = meio + 1;
        }else{
            sup = meio -1;
        }
    }
    return busca;
}

int main(){

    int x2 = 9; 
    printf("Resultado de busca de %d na lista:%d", x2, buscaBin(x2)); 

    return 0;
}