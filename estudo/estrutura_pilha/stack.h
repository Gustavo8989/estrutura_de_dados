

typedef int TipoItem;
const int max_itens = 100;


class pilha{
	private:
		int tamanho;
		TipoItem* estrutura;

	public:
		pilha(); // Função construtura
		~pilha(); // Função destrutora
		bool pilha_cheia(); // Verifica se a pilha esta cheia
		bool pilha_vazia(); 
		void inserir(TipoItem item);
		TipoItem remover();
		void imprimir();
		int qual_tamanho();	
};