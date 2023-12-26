typedef int Tipoitem;
const int max_limite = 100;


class fila_classe{
	private:
		int primeiro,ultimo;
		Tipoitem* estrutura;

	public:
		fila_classe();
		~fila_classe();
		bool fila_vazia();
		bool fila_cheia();
		void imprimir();
		void inserir(Tipoitem item);
		Tipoitem remover();
		int tamanho();
};
