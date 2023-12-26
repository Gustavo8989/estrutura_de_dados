#include <iostream>
#include "fila.h"
using namespace std;

	fila_classe::fila_classe(){
		int primeiro = 0;
		int ultimo = 0; 
		estrutura = new Tipoitem[max_limite];
	}

	fila_classe::~fila_classe(){
		delete estrutura;
	}
	bool fila_classe::fila_vazia(){
		return (primeiro == ultimo);

	}
	bool fila_classe::fila_cheia(){
		return (ultimo-primeiro == max_limite);
		
	}
	void fila_classe::imprimir(){
		cout << " [ ";
		for (int i=primeiro; i<ultimo;i++){
			cout << estrutura[i%max_limite];
			cout << " ] ";
		}
	}
	void fila_classe::inserir(Tipoitem item){
		if (fila_cheia()){
			cout << "A fila está cheia\n";
		}else{
			estrutura[ultimo % max_limite] = item;
			ultimo++;
		}
	}

	Tipoitem fila_classe::remover(){
		if (fila_vazia()){
			cout << "A fila esta vazia\n";
			return 0;
		}else{
			primeiro++;
			return estrutura[(primeiro-1) % max_limite];
		}
	}
