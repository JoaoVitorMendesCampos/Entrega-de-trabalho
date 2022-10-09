#include <iostream>
#include <windows.h>
#include "funcoes.cpp"

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    UINT CPAGE_DEFAULT = GetConsoleOutputCP();
    SetConsoleOutputCP(CPAGE_UTF8);
    system("cls");

    TPilha pacote;
    Pedido order;
    TPilha aux1, aux2;
    FazPilhaVazia(&pacote);
    FazPilhaVazia(&aux1);
    FazPilhaVazia(&aux2);

    int codeorder = 0;
    int codeproduto;
    int tpacote;
    int MDistancia, idMDistancia;
    
    //Manipulação do arquivo lanchonete.bin
    FILE *file = fopen("lanchonete.bin", "r");
    if (file != NULL)
    {
        while (fread(&order, sizeof(Pedido), 1, file))
        {
            if (order.codigo > codeorder)
            {
                codeorder = order.codigo;
            }
            Empilha(&pacote, order);
        }
    }

    codeorder++;
    system("cls");
    
    int opcao;
    do
    {
        menu();
        cout << "Digite a opção que deseja: ";
        cin >> opcao;
        system("cls");
        switch (opcao)
        {
        case 1://Faz Pedido
            order.codigo = codeorder;
            order.tamanhoitens = 0;
            order.valor_pedido = 0;
            do
            {
                cardapio();
                cout << "Escolha algo: ";
                cin >> codeproduto;
                if (codeproduto > 6)
                {
                    cout << "Esse produto nao existe";
                }
                if (codeproduto != 0)
                {
                    order.produtos[order.tamanhoitens] = codeproduto;
                    if (codeproduto == 1)
                    {
                        order.valor_pedido += 5;
                    }
                    else if (codeproduto == 2)
                    {
                        order.valor_pedido += 4.50;
                    }
                    else if (codeproduto == 3)
                    {
                        order.valor_pedido += 10;
                    }
                    else if (codeproduto == 4)
                    {
                        order.valor_pedido += 4;
                    }
                    else if (codeproduto == 5)
                    {
                        order.valor_pedido += 2;
                    }
                    else if (codeproduto == 6)
                    {
                        order.valor_pedido += 3;
                    }
                    order.tamanhoitens++;
                }
                system("cls");
            } while (codeproduto != 0 && order.tamanhoitens < MAXTAM);
            cout << "Digite a distancia a ser percorrida: ";
            cin >> order.distancia;
            Empilha(&pacote, order);
            codeorder = codeorder + 1;
            system("pause");
            system("cls");
            break;
        case 2: //Lista Pedido
            if (VerificaPilhaVazia(&pacote))
            {
                cout << "Lista de Pedidos vazia!\n";
                system("pause");
                system("cls");
            }
            else
            {
                ExibePilha(&pacote);
                system("pause");
                system("cls");
            }
            break;
        case 3://Exibe Cardápio
            cardapio();
            system("pause");
            system("cls");
            break;
        case 4://Consulta pedido
            int code;
            cout << "Digite o codigo do pedido: ";
            cin >> code;
            pesquisa(&pacote, code);
            system("pause");
            system("cls");

            break;
        case 5://Listagem por distancia
            if (VerificaPilhaVazia(&pacote))
            {
                cout << "Pacote Vazio!\n";
            }

            tpacote = pacote.tamanho;

            while (pacote.tamanho != 0)
            {
                Desempilha(&pacote, &order);
                Empilha(&aux1, order);
            }

            for (int i = 0; i < tpacote; i++)
            {
                MDistancia = -1;
                idMDistancia = 0;

                while (aux1.tamanho != 0)
                {
                    Desempilha(&aux1, &order);
                    Empilha(&aux2, order);
                    if (MDistancia < order.distancia)
                    {
                        MDistancia = order.distancia;
                        idMDistancia = order.codigo;
                    }
                }
                while (aux2.tamanho != 0)
                {
                    Desempilha(&aux2, &order);
                    if (order.codigo == idMDistancia)
                    {
                        Empilha(&pacote, order);
                    }
                    else
                    {
                        Empilha(&aux1, order);
                    }
                }
            }
            cout << "Pacote organizado. (Acessar <Listar pedidos> no menu)\n\n"
                 << endl;

            break;
        case 6://Entrega
            if (VerificaPilhaVazia(&pacote))
            {
                cout << "Pacote Vazio!\n";
            }
            else
            {
                Desempilha(&pacote, &order);
                cout << "Pedido com codigo " << order.codigo << " foi entregue!\n";
            }
            system("pause");
            system("cls");
            break;

        default:
            break;
        }
    } while (opcao != 7);

    file = fopen("lanchonete.bin", "w");//Gravando arquivo 
    tpacote = pacote.tamanho;
    for (int i = 0; i < tpacote; i++)
    {
        Desempilha(&pacote, &order);
        fwrite(&order, sizeof(Pedido), 1, file);
    }
}