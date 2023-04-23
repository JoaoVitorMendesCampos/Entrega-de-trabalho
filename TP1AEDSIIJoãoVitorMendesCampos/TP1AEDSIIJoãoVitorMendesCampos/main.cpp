#include <iostream>
#include <windows.h>
#include "funcoes.cpp"
#include <fstream>

using namespace std;

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);
    system("cls");    
    int opcao;
    do
    {
        menu1();
        cout << "Digite a opçâo que deseja: ";
        cin >> opcao;
        system("cls");
        switch (opcao)
        {
        case 1:
            int op;
            menu2();
            cout << "Digite a opção que deseja: ";
            cin >> op;
            if(op > 23){
                cout << "Opcao invalida!!!\n";
                system("pause");
            system("cls");
                break;
            }
            lerarquivo(op,opcao);
            system("pause");
            system("cls");
            break;
        case 2: 
            menu2();
             cout << "Digite a opção que deseja: ";
            cin >> op;
            if(op > 23){
                cout << "Opcao invalida!!!\n";
                system("pause");
            system("cls");
                break;
            }
            lerarquivo(op,opcao);
            system("pause");
            system("cls");
            break;
        case 3:
            menu2();
             cout << "Digite a opção que deseja: ";
            cin >> op;
            if(op > 23){
                cout << "Opcao invalida!!!\n";
                system("pause");
            system("cls");
                break;
            }
            lerarquivo(op,opcao);
            system("pause");
            system("cls");
            break;
        case 4:
            menu2();
             cout << "Digite a opção que deseja: ";
            cin >> op;
            if(op > 23){
                cout << "Opcao invalida!!!\n";
                system("pause");
            system("cls");
                break;
            }
            lerarquivo(op,opcao);
            system("pause");
            system("cls");
            break;
        case 5:
            menu2();
             cout << "Digite a opção que deseja: ";
            cin >> op;
            if(op > 23){
                cout << "Opcao invalida!!!\n";
                system("pause");
            system("cls");
                break;
            }
            lerarquivo(op,opcao);
            system("pause");
            system("cls");
            break;
        case 6:
            menu2();
             cout << "Digite a opção que deseja: ";
            cin >> op;
            if(op > 23){
                cout << "Opcao invalida!!!\n";
                system("pause");
            system("cls");
                break;
            }
            lerarquivo(op,opcao);
            system("pause");
            system("cls");
            break;

        default:
            break;
        }
    } while (opcao  != 7);
}