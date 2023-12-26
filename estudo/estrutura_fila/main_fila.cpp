#include <iostream>
#include "fila.h"

using namespace std;

int main(){
	fila_classe fila_um;
	int opcao;
	Tipoitem item;
	cout << "Programa gerador de filas\n";
	do{
		cout << "Digite 0 para parar o programa\n";
		cout << "Digite 1 para inserir\n";
		cout << "Digite 2 para remover\n";
		cout << "Digite 3 para imprimir a fila\n";
		cin >> opcao;
		if (opcao == 1){
			cout << "insira um elemento\n";
			cin >> item;
			fila_um.inserir(item);
		}else if(opcao == 2){
			item = fila_um.remover();
			cout << "O item " << item << "foi removido" << endl;
		}else if(opcao == 3){
			fila_um.imprimir();
		}
	}while (opcao!= 0);
	return 0;

};
