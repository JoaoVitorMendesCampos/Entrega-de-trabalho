#ifndef FUNCOES_H
#define FUNCOES_H

//funções utilizadas
void ImprimevetInt();
void ImprimevetString();
void menu2();
void menu1();
void lerarquivo(int opcao, int metodoOp);
void BubbleSortInt(unsigned long long *comparacao, unsigned long long *trocas);
void BubbleSortString(unsigned long long *comparacao, unsigned long long *trocas);
void QuickSortInt(int esquerda, int direita, unsigned long long *comparacao, unsigned long long *trocas);
void QuickSortString(int esquerda, int direita, unsigned long long *comparacao, unsigned long long *trocas);
void ShellSortInt(unsigned long long *comparacao, unsigned long long *trocas);
void ShellSortString(unsigned long long *comparacao, unsigned long long *trocas);
void SelectionSortInt(unsigned long long *comparacao, unsigned long long *trocas);
void SelectionSortString(unsigned long long *comparacao, unsigned long long *trocas);
void InsertionSortInt(unsigned long long *comparacao, unsigned long long *trocas);
void InsertionSortString(unsigned long long *comparacao, unsigned long long *trocas);
void IntercalaInt(int inicio, int meio, int fim,unsigned long long *comparacao, unsigned long long *trocas);
void MergeSortInt(int inicio, int fim,unsigned long long *comparacao, unsigned long long *trocas);
void IntercalaString(int inicio, int meio, int fim,unsigned long long *comparacao, unsigned long long *trocas);
void MergeSortString(int inicio, int fim,unsigned long long *comparacao, unsigned long long *trocas);
void OrdenaInt(int metodo);
void OrdenaString(int metodo);
#endif