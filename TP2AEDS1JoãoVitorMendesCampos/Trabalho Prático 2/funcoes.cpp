#include <iostream>
#include "pilha.hpp"

using namespace std;

void FazPilhaVazia(TPilha *pilha) //Cria uma pilha
{
    pilha->Topo = 0;
}

bool VerificaPilhaVazia(TPilha *pilha) //Verifica se a pilha está vazia
{
    if (pilha->Topo == 0)
        return true;
    return false;
}

bool VerificaPilhaCheia(TPilha *pilha)//Verifica se a pilha está cheia
{
    if (pilha->Topo == MAXTAM)
        return true;
    return false;
}

void Empilha(TPilha *pilha, Pedido item)//Insere itens na pilha
{
    if (VerificaPilhaCheia(pilha))
    {
        cout << "\nPilha cheia\n";
        return;
    }

    pilha->Pilha[pilha->Topo] = item;
    pilha->Topo++;
}

void ExibePilha(TPilha *pilha)//Imprime os pedidos
{
    for (int i = pilha->Topo - 1; i >= 0; i--)
    {
        cout << "                     \n";
        cout << "Codigo do pedido: ";
        cout << pilha->Pilha[i].codigo << "\n";
        cout << "Distancia: ";
        cout << pilha->Pilha[i].distancia << "Km \n";
        cout << "Valor do pedido: RS ";
        cout << pilha->Pilha[i].valor_pedido << "\n";
    }
}

void Desempilha(TPilha *pilha, Pedido *item)//Retira um item da pilha
{
    if (VerificaPilhaVazia(pilha))
    {
        cout << "\nPilha vazia.\n";
        return;
    }

    pilha->Topo--;
    *item = pilha->Pilha[pilha->Topo];
}

int Tamanho(TPilha *pilha) //Mostra o tamanho da pilha
{
    return pilha->Topo;
}

void menu()//Imprime menu
{
    cout << "*************************************\n";
    cout << "*           Uai Lanchonetes         *\n";
    cout << "*************************************\n";
    cout << "*   [1]Faça seu pedido              *\n";
    cout << "*   [2]Lista de pedidos             *\n";
    cout << "*   [3]Cardapio                     *\n";
    cout << "*   [4]Consulta Pedido              *\n";
    cout << "*   [5]Distancia dos pedidos        *\n";
    cout << "*   [6]Entregar pedidos             *\n";
    cout << "*   [7]Sair                         *\n";
    cout << "*************************************\n";
}

void cardapio()//Imprime Cardápio
{
    cout << "*************************************\n";
    cout << "*             Cardapio              *\n";
    cout << "*************************************\n";
    cout << "*   Coxinha RS 5.00------->Codigo 1 *\n";
    cout << "*   HotDog  RS 4.50------->Codigo 2 *\n";
    cout << "*   Xtudo  RS 10.00------->Codigo 3 *\n";
    cout << "*   Pastel  RS 4.00------->Codigo 4 *\n";
    cout << "*   Suco    RS 2.00------->Codigo 5 *\n";
    cout << "*   Refri   RS 3.00------->Codigo 6 *\n";
    cout << "*************************************\n";
}

int pesquisa(TPilha *pilha, int code)//Faz uma consulta e imprime se os dados se o codigo for emcontrado
{
    for (int i = pilha->Topo - 1; i >= 0; i--)
    {
        if (code == pilha->Pilha[i].codigo)
        {
            cout << "Codigo do pedido: ";
            cout << pilha->Pilha[i].codigo << "\n";
            cout << "Distancia: ";
            cout << pilha->Pilha[i].distancia << "Km \n";
            cout << "Valor do pedido: RS ";
            cout << pilha->Pilha[i].valor_pedido << "\n";
        }
        
    }

}
