//AMANDA GOIS SMANIOTO       TIA:42127351
//DANIELA BRAZOLIN FLAUTO    TIA:42130581

#ifndef ____NO____
#define ____NO____

using namespace std;

#include <string>
// Elemento do tipo inteiro a ser inserido no nó da LDL 
typedef string Elemento;

// Classe Nó da lista duplamente encadeada
class No {
	private:
		int chave;
		Elemento dado;
		No *ant, *prox;
	public:
		No() {}
		No(int chave, Elemento dado, No *ant, No *prox){
			this->chave = chave;
			this->dado = dado;
			this->ant = ant;
			this->prox = prox;
		};
		~No(){};
		Elemento getDado() { return dado;};
		No *getAnt(){ return ant;};
		No *getProx(){ return prox;};
		int getChave(){ return chave; };
		void setDado(Elemento dado) { this->dado = dado;};
		void setChave(int chave){ this->chave = chave; };
		void setAnt(No *ant){ this->ant = ant; };
		void setProx(No *prox){ this->prox = prox; };		
};

#endif
