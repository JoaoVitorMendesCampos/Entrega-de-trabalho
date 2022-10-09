#ifndef PILHA_H
#define PILHA_H

#define MAXTAM 10 //limite maximo de produtos
#define MAX_ENTREGA 7//limite maximo de entrega

typedef struct
{
    int codigo;
    int produtos[MAXTAM];
    float valor_pedido;
    float distancia;
    int tamanhoitens;
} Pedido;

typedef struct
{
    Pedido Pilha[MAX_ENTREGA];//pilha principal
    int Topo;//topo da pilha
    int tamanho;//tamanho da pilha
} TPilha;

//funções utilizadas
void FazPilhaVazia(TPilha *pilha);
bool VerificaPilhaVazia(TPilha *pilha);
bool VerificaPilhaCheia(TPilha *pilha);
void Empilha(TPilha *pilha, Pedido item);
void ExibePilha(TPilha *pilha);
void Desempilha(TPilha *pilha, Pedido *item);
int Tamanho(TPilha *pilha);
int pesquisa(TPilha *pilha, int code);
void menu();
void cardapio();

#endif