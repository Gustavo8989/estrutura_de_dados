// Lifo = last in fist out(Primeiro a entrar, primeiro a sair) 

#include <iostream> 
#include "stack.h"
using namespace std;

	pilha::pilha(){
		tamanho = 0;
		estrutura = new TipoItem[max_itens];
	}

	pilha::~pilha(){
		delete [] estrutura;
	}
	
	bool pilha::pilha_cheia(){
		return (tamanho == max_itens);
	}
	
	bool pilha::pilha_vazia(){
		return (tamanho == 0);
	}
	void pilha::inserir(TipoItem item){
		if (pilha_cheia()){
			cout << "A pilha esta cheia\n";
		}
		else{
			estrutura[tamanho] = item;
			tamanho ++;
		}
	}
	
	TipoItem pilha::remover(){
		if (pilha_vazia()){
			cout << "Não da para remover elementos\n pois a pilha está vazia\n";
			return 0;
		}else{
			return estrutura[tamanho-1];
			tamanho --;
		}
	}
	
	void pilha::imprimir(){
		cout << "Pilha : [";
		for (int i=0; i<tamanho;i++){
			cout << estrutura[i];
		}
		cout << "]\n";
	}
	
	int pilha::qual_tamanho(){
		return tamanho;
	}
