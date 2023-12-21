#include <iostream>
#include "stack.h"

using namespace std;


int main(){
	pilha stack;
	TipoItem item;
	int opcao;
	cout << "Programa gerador de pilhas" << endl;
	do {
		cout << "Digite 0 para parar o programa >> \n";
		cout << "Digite 1 para inserir um elemento >> \n";
		cout << "Digite 2 para remover um elemento >> \n";
		cout << "Digite 3 para imprimir a pilha >> \n";
		cin >> opcao;
		if (opcao == 1){
			cout << "Digite o elemento a ser inserido >> ";
			cin >> item;
			stack.inserir(item);
		}else if(opcao == 2){
			item = stack.remover();
			cout << "Elemento removido >> " << item << endl;
		}else if(opcao == 3){
			stack.imprimir();
		}

	} while(opcao != 0);

	return 0;
}
