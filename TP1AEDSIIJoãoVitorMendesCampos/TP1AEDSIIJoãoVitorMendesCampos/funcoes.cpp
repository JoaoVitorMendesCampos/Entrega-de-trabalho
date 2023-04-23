#include <iostream>
#include "main.hpp"
#include <fstream>
#include <chrono>
#include <vector>

using namespace std;
using namespace chrono;

string nome_arquivo;  // nome_aquivo
ifstream arquivo;     // arquivo
vector<int> vetorint; // Vetor global do tipo int
vector<string> vetorstring;//Vetor global do tipo string

void menu1()//Menu (Escolha uma Ordenação)
{
    cout << "  \n       ****************************************************************";
    cout << "  \n        ****************************************************************";
    cout << "  \n        **                                                            **";
    cout << "  \n        **                    ESCOLHA UMA ORDENACAO                   **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ****************************************************************";
    cout << "  \n        ****************************************************************";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 1 - BUBBLESORT                                             **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 2 - QUICKSORT                                              **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 3 - SHELLSORT                                              **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 4 - SELECTIONSORT                                          **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 5 - INSERTIONSORT                                          **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 6 - MERGESORT                                              **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 7 - SAIR                                                   **";
    cout << "  \n        **                                                            **";
    cout << "  \n       ****************************************************************";
    cout << "  \n        ****************************************************************" << endl
         << endl;
}

void menu2()//Menu (Escolha uma Lista para ordenar)
{
    cout << "  \n        ****************************************************************";
    cout << "  \n        ****************************************************************";
    cout << "  \n        **                                                            **";
    cout << "  \n        **           ESCOLHA UMA LISTA PARA SER ORDENADA              **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ****************************************************************";
    cout << "  \n        ****************************************************************";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 1 - DicionarioAleatorio-29855                              **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 2 - DicionarioAleatorio-261791                             **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 3 - DicionarioInversamenteOrdenado-29855                   **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 4 - DicionarioInversamenteOrdenado-261791                  **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 5 - DicionarioOrdenado-29855                               **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 6 - DicionarioOrdenado-261791                              **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 7 - ListaAleatoria-1000                                    **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 8 - ListaAleatoria-10000                                   **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 9 - ListaAleatoria-100000                                  **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 10 - ListaAleatoria-1000000                                **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 11 - ListaInversamenteOrdenada-1000                        **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 12 - ListaInversamenteOrdenada-10000                       **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 13 - ListaInversamenteOrdenada-100000                      **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 14 - ListaInversamenteOrdenada-1000000                     **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 15 - ListaOrdenada-1000                                    **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 16 - ListaOrdenada-10000                                   **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 17 - ListaOrdenada-100000                                  **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 18 - ListaOrdenada-1000000                                 **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 19 - ListaQuaseOrdenada-1000                               **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 20 - ListaQuaseOrdenada-10000                              **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 21 - ListaQuaseOrdenada-100000                             **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 22 - ListaQuaseOrdenada-1000000                            **";
    cout << "  \n        **                                                            **";
    cout << "  \n        ** 23 - SAIR                                                  **";
    cout << "  \n        **                                                            **";
    cout << "  \n       *****************************************************************";
    cout << "  \n        ****************************************************************" << endl
         << endl;
}

void lerarquivo(int opcao, int metodoOp)//lé o arquivo após a escolha da lista, o arquivo é aberto dentro de um vetor para ser ordenada por uma das funções Ordena, se a opção do arquivo for inválida será exibido uma mensagem “ERRO” e o vetor será limpo.
{ 
    switch (opcao)
    {
    case 1:
        nome_arquivo = "../DicionarioAleatorio-29855.txt"; // Nome do arquivo
        break;
    case 2:
        nome_arquivo = "../DicionarioAleatorio-261791.txt"; // Nome do arquivo
        break;
    case 3:
        nome_arquivo = "../DicionarioInversamenteOrdenado-29855.txt"; // Nome do arquivo
        break;
    case 4:
        nome_arquivo = "../DicionarioInversamenteOrdenado-261791.txt"; // Nome do arquivo
        break;
    case 5:
        nome_arquivo = "../DicionarioOrdenado-29855.txt"; // Nome do arquivo
        break;
    case 6:
        nome_arquivo = "../DicionarioOrdenado-261791.txt"; // Nome do arquivo
        break;
    case 7:
        nome_arquivo = "../ListaAleatoria-1000.txt"; // Nome do arquivo
        break;
    case 8:
        nome_arquivo = "../ListaAleatoria-10000.txt"; // Nome do arquivo
        break;
    case 9:
        nome_arquivo = "../ListaAleatoria-100000.txt"; // Nome do arquivo
        break;
    case 10:
        nome_arquivo = "../ListaAleatoria-1000000.txt"; // Nome do arquivo
        break;
    case 11:
        nome_arquivo = "../ListaInversamenteOrdenada-1000.txt"; // Nome do arquivo
        break;
    case 12:
        nome_arquivo = "../ListaInversamenteOrdenada-10000.txt"; // Nome do arquivo
        break;
    case 13:
        nome_arquivo = "../ListaInversamenteOrdenada-100000.txt"; // Nome do arquivo
        break;
    case 14:
        nome_arquivo = "../ListaInversamenteOrdenada-1000000.txt"; // Nome do arquivo
        break;
    case 15:
        nome_arquivo = "../ListaOrdenada-1000.txt"; // Nome do arquivo
        break;
    case 16:
        nome_arquivo = "../ListaOrdenada-10000.txt"; // Nome do arquivo
        break;
    case 17:
        nome_arquivo = "../ListaOrdenada-100000.txt"; // Nome do arquivo
        break;
    case 18:
        nome_arquivo = "../ListaOrdenada-1000000.txt"; // Nome do arquivo
        break;
    case 19:
        nome_arquivo = "../ListaQuaseOrdenada-1000.txt"; // Nome do arquivo
        break;
    case 20:
        nome_arquivo = "../ListaQuaseOrdenada-10000.txt"; // Nome do arquivo
        break;
    case 21:
        nome_arquivo = "../ListaQuaseOrdenada-100000.txt"; // Nome do arquivo
        break;
    case 22:
        nome_arquivo = "../ListaQuaseOrdenada-1000000.txt"; // Nome do arquivo
        break;
    case 23:
        break;
    }
    arquivo.open(nome_arquivo);
    if (arquivo.is_open())
    {
        if (opcao >= 1 && opcao <= 6)
        {
            while (!arquivo.eof())
            {
                string aux;
                arquivo >> aux;
                vetorstring.push_back(aux);
            }
            OrdenaString(metodoOp);
        }
        if (opcao >= 7 && opcao <= 22)
        {
            while (!arquivo.eof())
            {
                int aux;
                arquivo >> aux;
                vetorint.push_back(aux);
            }
            OrdenaInt(metodoOp);
        }
    }
    else if (opcao > 23)
    {
        cout << "ERRO!!!!!" << endl;
        arquivo.clear();
    }

    arquivo.close();
}

void BubbleSortInt(unsigned long long *comparacao, unsigned long long *trocas)
{

    int aux, troca;

    for (int i = 0; i < vetorint.size() - 1; i++)
    {
        troca = 0;
        for (int j = 1; j < vetorint.size() - i; j++)
        {
            if (vetorint[j] < vetorint[j - 1])
            {
                (*comparacao)++;
                aux = vetorint[j];
                vetorint[j] = vetorint[j - 1];
                vetorint[j - 1] = aux;
                troca = 1;
                (*trocas)++;
            }
            else
            {
                (*comparacao)++;
            }
        }
        if (troca == 0)
        {
            break;
        }
    }
}

void BubbleSortString(unsigned long long *comparacao, unsigned long long *trocas)
{

    int troca;
    string aux;

    for (int i = 0; i < vetorstring.size() - 1; i++)
    {
        troca = 0;
        for (int j = 1; j < vetorstring.size() - i; j++)
        {
            if (vetorstring[j] < vetorstring[j - 1])
            {
                (*comparacao)++;
                aux = vetorstring[j];
                vetorstring[j] = vetorstring[j - 1];
                vetorstring[j - 1] = aux;
                troca = 1;
                (*trocas)++;
            }
            else
            {
                (*comparacao)++;
            }
        }
        if (troca == 0)
        {
            break;
        }
    }
}

void QuickSortInt(int esquerda, int direita, unsigned long long *comparacao, unsigned long long *trocas)
{
    int tmp, i = esquerda, j = direita;
    int pivo = vetorint[(esquerda + direita) / 2];

    while (i <= j)
    {
        while (vetorint[i] < pivo)
        {
            i++;
            //(*comparacao)++;
        }
        while (vetorint[j] > pivo)
        {
            j--;
            //(*comparacao)++;
        }
        if (i <= j)
        {
            (*comparacao)++;
            tmp = vetorint[i];
            vetorint[i] = vetorint[j];
            vetorint[j] = tmp;
            i++;
            j--;
            (*trocas)++;
        }
    }

    (*comparacao)++;
    if (esquerda < j)
    {
        QuickSortInt(esquerda, j, comparacao, trocas);
    }
    (*comparacao)++;
    if (i < direita)
    {
        QuickSortInt(i, direita, comparacao, trocas);
    }
}

void QuickSortString(int esquerda, int direita, unsigned long long *comparacao, unsigned long long *trocas)
{
    int i = esquerda, j = direita;
    string pivo = vetorstring[(esquerda + direita) / 2], tmp;

    while (i <= j)
    {
        while (vetorstring[i] < pivo)
        {
            i++;
        }
        while (vetorstring[j] > pivo)
        {
            j--;
        }
        if (i <= j)
        {
            (*comparacao)++;
            tmp = vetorstring[i];
            vetorstring[i] = vetorstring[j];
            vetorstring[j] = tmp;
            i++;
            j--;
            (*trocas)++;
        }
    }
    (*comparacao)++;
    if (esquerda < j)
    {
        QuickSortString(esquerda, j, comparacao, trocas);
    }
    (*comparacao)++;
    if (i < direita)
    {
        QuickSortString(i, direita, comparacao, trocas);
    }
}

void ShellSortInt(unsigned long long *comparacao, unsigned long long *trocas)
{
    int i, j, value;

    int h = 1;
    while (h < vetorint.size())
    {
        h = 3 * h + 1;
    }

    while (h > 0)
    {
        (*comparacao)++;
        for (i = h; i < vetorint.size(); i++)
        {
            value = vetorint[i];
            j = i;
            while (j > h - 1 && value <= vetorint[j - h])
            {
                (*comparacao)++;
                vetorint[j] = vetorint[j - h];
                j = j - h;
                (*trocas)++;
            }
            vetorint[j] = value;
        }
        h = h / 3;
    }
}

void ShellSortString(unsigned long long *comparacao, unsigned long long *trocas)
{
    int i, j;
    string value;

    int h = 1;
    while (h < vetorstring.size())
    {
        h = 3 * h + 1;
    }

    while (h > 0)
    {
        (*comparacao)++;
        for (i = h; i < vetorstring.size(); i++)
        {
            value = vetorstring[i];
            j = i;
            while (j > h - 1 && value <= vetorstring[j - h])
            {
                (*comparacao)++;
                vetorstring[j] = vetorstring[j - h];
                j = j - h;
                (*trocas)++;
            }
            vetorstring[j] = value;
        }
        h = h / 3;
    }
}

void SelectionSortInt(unsigned long long *comparacao, unsigned long long *trocas)
{
    int min, aux;

    for (int i = 0; i < vetorint.size() - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < vetorint.size(); j++)
        {
            if (vetorint[j] < vetorint[min])
            {
                (*comparacao)++;
                min = j;
            }
            else
            {
                (*comparacao)++;
            }
        }
        aux = vetorint[i];
        vetorint[i] = vetorint[min];
        vetorint[min] = aux;
        (*trocas)++;
    }
}

void SelectionSortString(unsigned long long *comparacao, unsigned long long *trocas)
{
    int min;
    string aux;

    for (int i = 0; i < vetorstring.size() - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < vetorstring.size(); j++)
        {
            if (vetorstring[j] < vetorstring[min])
            {
                (*comparacao)++;
                min = j;
            }
            else
            {
                (*comparacao)++;
            }
        }
        aux = vetorstring[i];
        vetorstring[i] = vetorstring[min];
        vetorstring[min] = aux;
        (*trocas)++;
    }
}

void InsertionSortInt(unsigned long long *comparacao, unsigned long long *trocas)
{
    int aux;

    for (int i = 1; i < vetorint.size(); i++)
    {
        aux = vetorint[i];
        for (int j = i; (j > 0) && (aux < vetorint[j - 1]); j--)
        {
            (*comparacao)++;
            vetorint[j] = vetorint[j - 1];
            vetorint[j - 1] = aux;
            (*trocas)++;
        }
    }
}

void InsertionSortString(unsigned long long *comparacao, unsigned long long *trocas)
{
    string aux;

    for (int i = 1; i < vetorstring.size(); i++)
    {
        aux = vetorstring[i];
        for (int j = i; (j > 0) && (aux < vetorstring[j - 1]); j--)
        {
            (*comparacao)++;
            vetorstring[j] = vetorstring[j - 1];
            vetorstring[j - 1] = aux;
            (*trocas)++;
        }
    }
}

void IntercalaInt(int inicio, int meio, int fim, unsigned long long *comparacao, unsigned long long *trocas)
{
    int *ListaAux = (int *)malloc(sizeof(int) * (fim + 1));
    int i, j;

    for (i = inicio; i <= meio; i++)
    {
        ListaAux[i] = vetorint[i];
    }

    for (j = meio + 1; j <= fim; j++)
    {
        ListaAux[fim + meio + 1 - j] = vetorint[j];
    }

    i = inicio;
    j = fim;

    for (int k = inicio; k <= fim; k++)
    {
        if (ListaAux[i] <= ListaAux[j])
        {
            (*comparacao)++;
            vetorint[k] = ListaAux[i];
            i++;
            (*trocas)++;
        }
        else
        {
            (*comparacao)++;
            vetorint[k] = ListaAux[j];
            j--;
            (*trocas)++;
        }
    }
    free(ListaAux);
}

void MergeSortInt(int inicio, int fim, unsigned long long *comparacao, unsigned long long *trocas)
{
    int meio;
    if (inicio < fim)
    {
        meio = (inicio + fim) / 2;
        MergeSortInt(inicio, meio, comparacao, trocas);
        MergeSortInt(meio + 1, fim, comparacao, trocas);
        IntercalaInt(inicio, meio, fim, comparacao, trocas);
    }
}

void IntercalaString(int inicio, int meio, int fim, unsigned long long *comparacao, unsigned long long *trocas)
{
    string *ListaAux = (string *)calloc(fim + 1, sizeof(string));
    int i, j;

    for (i = inicio; i <= meio; i++)
    {
        ListaAux[i] = vetorstring[i];
    }

    for (j = meio + 1; j <= fim; j++)
    {
        ListaAux[fim + meio + 1 - j] = vetorstring[j];
    }

    i = inicio;
    j = fim;

    for (int k = inicio; k <= fim; k++)
    {
        if (ListaAux[i] <= ListaAux[j])
        {
            (*comparacao)++;
            vetorstring[k] = ListaAux[i];
            i++;
            (*trocas)++;
        }
        else
        {
            (*comparacao)++;
            vetorstring[k] = ListaAux[j];
            j--;
            (*trocas)++;
        }
    }
    free(ListaAux);
}

void MergeSortString(int inicio, int fim, unsigned long long *comparacao, unsigned long long *trocas)
{
    int meio;
    if (inicio < fim)
    {
        meio = (inicio + fim) / 2;
        MergeSortString(inicio, meio, comparacao, trocas);
        MergeSortString(meio + 1, fim, comparacao, trocas);
        IntercalaString(inicio, meio, fim, comparacao, trocas);
    }
}

void ImprimevetInt()//Imprime vetor do tipo int
{
    for (int i = 0; i < vetorint.size(); i++)
    {
        cout << vetorint[i] << " ";
    }
    cout << endl
         << endl;
    vetorint.clear();
}

void ImprimevetString()//Imprime vetor do tipo string
{
    for (int i = 0; i < vetorstring.size(); i++)
    {
        cout << vetorstring[i] << " ";
    }
    cout << endl
         << endl;
    vetorstring.clear();
}
void OrdenaInt(int metodo)//ordena o vetor do tipo Int. Ela ordena conforme o método que foi escolhido e a lista de números escolhida. Imprime vetor ordenado, o tempo de execução, o número de  comparações e o número de  trocas.
{
    unsigned long long trocas = 0, comparacao = 0;
    if (metodo == 1)
    {
        steady_clock::time_point tempoinicio = steady_clock::now();
        BubbleSortInt(&comparacao, &trocas);
        steady_clock::time_point tempofim = steady_clock::now();
        duration<double> tempo = duration_cast<duration<double>>(tempofim - tempoinicio);
        ImprimevetInt();
        cout << "\nTempo: " << tempo.count() << endl;
        cout << "\nTrocas: " << trocas << endl;
        cout << "Comparacao: " << comparacao << endl;
    }
    if (metodo == 2)
    {
        steady_clock::time_point tempoinicio = steady_clock::now();
        QuickSortInt(0, vetorint.size() - 1, &comparacao, &trocas);
        steady_clock::time_point tempofim = steady_clock::now();
        duration<double> tempo = duration_cast<duration<double>>(tempofim - tempoinicio);
        ImprimevetInt();
        cout << "\nTempo: " << tempo.count();
        cout << "\nTrocas: " << trocas << endl;
        cout << "Comparacao: " << comparacao << endl;
    }
    if (metodo == 3)
    {
        steady_clock::time_point tempoinicio = steady_clock::now();
        ShellSortInt(&comparacao, &trocas);
        steady_clock::time_point tempofim = steady_clock::now();
        duration<double> tempo = duration_cast<duration<double>>(tempofim - tempoinicio);
        ImprimevetInt();
        cout << "\nTempo: " << tempo.count();
        cout << "\nTrocas: " << trocas << endl;
        cout << "Comparacao: " << comparacao << endl;
    }
    if (metodo == 4)
    {
        steady_clock::time_point tempoinicio = steady_clock::now();
        SelectionSortInt(&comparacao, &trocas);
        steady_clock::time_point tempofim = steady_clock::now();
        duration<double> tempo = duration_cast<duration<double>>(tempofim - tempoinicio);
        ImprimevetInt();
        cout << "\nTempo: " << tempo.count();
        cout << "\nTrocas: " << trocas << endl;
        cout << "Comparacao: " << comparacao << endl;
    }
    if (metodo == 5)
    {
        steady_clock::time_point tempoinicio = steady_clock::now();
        InsertionSortInt(&comparacao, &trocas);
        steady_clock::time_point tempofim = steady_clock::now();
        duration<double> tempo = duration_cast<duration<double>>(tempofim - tempoinicio);
        ImprimevetInt();
        cout << "\nTempo: " << tempo.count();
        cout << "\nTrocas: " << trocas << endl;
        cout << "Comparacao: " << comparacao << endl;
    }
    if (metodo == 6)
    {
        steady_clock::time_point tempoinicio = steady_clock::now();
        MergeSortInt(0, vetorint.size() - 1, &comparacao, &trocas);
        steady_clock::time_point tempofim = steady_clock::now();
        duration<double> tempo = duration_cast<duration<double>>(tempofim - tempoinicio);
        ImprimevetInt();
        cout << "\nTempo: " << tempo.count();
        cout << "\nTrocas: " << trocas << endl;
        cout << "Comparacao: " << comparacao << endl;
    }
}

void OrdenaString(int metodo)//Ordena o vetor do tipo String. Ela ordena conforme o método que foi escolhido e a lista de dicionário escolhida. Imprime vetor ordenado, o tempo de execução, o número de  comparações e o número de  trocas.
{
    unsigned long long trocas = 0, comparacao = 0;
    if (metodo == 1)
    {
        steady_clock::time_point tempoinicio = steady_clock::now();
        BubbleSortString(&comparacao, &trocas);
        steady_clock::time_point tempofim = steady_clock::now();
        duration<double> tempo = duration_cast<duration<double>>(tempofim - tempoinicio);
        ImprimevetString();
        cout << "\nTempo: " << tempo.count();
        cout << "\nTrocas: " << trocas << endl;
        cout << "Comparacao: " << comparacao << endl;
    }
    if (metodo == 2)
    {
        steady_clock::time_point tempoinicio = steady_clock::now();
        QuickSortString(0, vetorstring.size() - 1, &comparacao, &trocas);
        steady_clock::time_point tempofim = steady_clock::now();
        duration<double> tempo = duration_cast<duration<double>>(tempofim - tempoinicio);
        ImprimevetString();
        cout << "\nTempo: " << tempo.count();
        cout << "\nTrocas: " << trocas << endl;
        cout << "Comparacao: " << comparacao << endl;
    }
    if (metodo == 3)
    {
        steady_clock::time_point tempoinicio = steady_clock::now();
        ShellSortString(&comparacao, &trocas);
        steady_clock::time_point tempofim = steady_clock::now();
        duration<double> tempo = duration_cast<duration<double>>(tempofim - tempoinicio);
        ImprimevetString();
        cout << "\nTempo: " << tempo.count();
        cout << "\nTrocas: " << trocas << endl;
        cout << "Comparacao: " << comparacao << endl;
    }
    if (metodo == 4)
    {
        steady_clock::time_point tempoinicio = steady_clock::now();
        SelectionSortString(&comparacao, &trocas);
        steady_clock::time_point tempofim = steady_clock::now();
        duration<double> tempo = duration_cast<duration<double>>(tempofim - tempoinicio);
        ImprimevetString();
        cout << "\nTempo: " << tempo.count();
        cout << "\nTrocas: " << trocas << endl;
        cout << "Comparacao: " << comparacao << endl;
    }
    if (metodo == 5)
    {
        steady_clock::time_point tempoinicio = steady_clock::now();
        InsertionSortString(&comparacao, &trocas);
        steady_clock::time_point tempofim = steady_clock::now();
        duration<double> tempo = duration_cast<duration<double>>(tempofim - tempoinicio);
        ImprimevetString();
        cout << "\nTempo: " << tempo.count();
        cout << "\nTrocas: " << trocas << endl;
        cout << "Comparacao: " << comparacao << endl;
    }
    if (metodo == 6)
    {
        steady_clock::time_point tempoinicio = steady_clock::now();
        MergeSortString(0, vetorstring.size() - 1, &comparacao, &trocas);
        steady_clock::time_point tempofim = steady_clock::now();
        duration<double> tempo = duration_cast<duration<double>>(tempofim - tempoinicio);
        ImprimevetString();
        cout << "\nTempo: " << tempo.count();
        cout << "\nTrocas: " << trocas << endl;
        cout << "Comparacao: " << comparacao << endl;
    }
}