//AMANDA GOIS SMANIOTO       TIA:42127351
//DANIELA BRAZOLIN FLAUTO    TIA:42130581

#ifndef ____LISTCIRC____
#define ____LISTCIRC____


#include <string>


#include "No.h"
// Classe de Lista Duplamente Encadeada
class LDL{
	private:
		No *cabeca;
		int qtde;

	public:
		LDL();
		~LDL() {};
		void setCabeca(No *cabeca){ this->cabeca = cabeca;	};
		No *getCabeca(){ return cabeca; };
    No *getTail();
		int getQtde(){ return qtde;	};
		void setQtde(int qtde) { this->qtde =  qtde; };
		bool isEmpty();	
    bool isEmptyLista(No *cabeca);	
		bool isFull();
		No *remove(int chave);
    No *removeHead();
    No *removeTail();
    bool atualiza(int chave, Elemento dado);
		bool append(int chave, Elemento dado);
    bool insert(int chave, Elemento dado);
		void mostraOrdemCrescente();
		void mostraOrdemDecrescente();
    void clear();
		No *busca(int chave);

    
};

#endif
