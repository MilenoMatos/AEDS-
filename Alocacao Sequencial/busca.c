#include <stdio.h>
#include <stdlib.h>

typedef struct no{ //Struct utilizado para testes de busca
    int chave;
    int valor;
} No;

No L[5] = { //Vetor de struct criado para testar a primeira funcao de busca (busca1)
    {10, 100},
    {20, 101},
    {30, 102},
    {40, 103},
    {50, 104}
};
int n = 5; //n determina o tamanho do vetor de busca1

No L1[6] = { //Vetor de struct criado para testar a segunda funcao de busca (busca2)
    {10, 100},
    {20, 101},
    {30, 102},
    {40, 103},
    {50, 104}
};
int n2 = 5; //n2 determina o tamanho do vetor de busca2

int busca1(int x){
    int i = 0; //Variavel de controle do loop
    int busca = -1; //Variavel de retorno -1 caso nao encontre, caso encontre retorna posicao

    while(i < n){ //Loop para percorrer o vetor
        if(L[i].chave == x){ //Quando encontrar a chave no vetor 
            busca = i; //Salva o valor na variavel busca e encerra o odigo
            break;
        }else{
            i++; //Continua a conferir posicoes futuras
        }
    }
    return busca; //Retorna variavel que armazena posicao do vetor
}

int busca2(int x){
    int i = 0; //Variavel de controle do loop
    L1[n2].chave = x; //Armazena a chave que queremos no final do vetor

    while(L1[i].chave != x){ //Percorro todo o vetor enquanto a chave que procuro for diferente da chave atual
        i++; //Incrementa 1 no contador
    }

    if(i != n2){ //Ao percorrer o vetor conferimos se a posicao encontrada e diferente da ultima posicao do vetor
        return i; //Caso seja encontramos a chave no vetor e retornamos a posicao
    }else{
        return -1; //Caso nao seja, a chave nao se encontra no vetor e retornamos -1
    }
}

int main(){

    /*for(int i = 0; i < 5; i++){
        printf("L[%d]:\n Chave: %d\n Valor: %d\n",i, L[i].chave, L[i].valor); //For para exibir todo o conteudo do vetor de busca1
    }*/
       /*for(int i = 0; i < 5; i++){
        printf("L1[%d]:\n Chave: %d\n Valor: %d\n",i, L1[i].chave, L1[i].valor); //For para exibir todo o conteudo do vetor de busca2
    }*/

    /*int x1 = 60; //Variavel utilizada para armazenar a chave que buscamos em busca1
    printf("Resultado de busca de %d na lista:%d", x1, busca1(x1)); //Exibimos o resultado da funcao busca1 passando o x1
    */
    int x2 = 10; //Variavel utilizada para armazenar a chave que buscamos em busca2
    printf("Resultado de busca de %d na lista:%d", x2, busca2(x2)); //Exibimos o resultado da funcao busca2 passando o x2
    printf("\nChave ultima posicao:%d\n", L1[5].chave); //Exibe a ultima posicao do vetor para ver se foi armazenado corretamente

    return 0;
}