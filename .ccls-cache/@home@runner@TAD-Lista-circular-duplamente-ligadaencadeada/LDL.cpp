//AMANDA GOIS SMANIOTO       TIA:42127351
//DANIELA BRAZOLIN FLAUTO    TIA:42130581


#include <iostream>
#include "No.h"
#include "ListCirc.h"

// Construtor vazio
// inicia o cabeça da lista como null
LDL::LDL(){
	this->cabeca = nullptr;
	this->qtde = 0;
}

// Verifica se lDL está vazia
bool LDL::isEmpty() { 
	if (this->cabeca == nullptr) {
		return true; 
	} else {
	    return false;	
	};  
}


// verifica se alista está cheia
bool LDL::isFull(){ 
	No *aux = new No();
	
	if (aux == nullptr) return true;

	aux = nullptr;
	return false;
};

// Percorre a lDL em ordem crescente 
// e mostra os seus valores
void LDL::mostraOrdemCrescente(){
	// Percorre a lista e imprime os valores
	// em ordem Crescente
	if (cabeca == nullptr) cout << "Lista vazia!" << endl;
	else{
    cout<< "Lista com " << qtde << " elementos\n";
		No *pAnda = this->cabeca;
		while (pAnda->getProx() != this->cabeca){
			cout << "[" << pAnda->getChave() << "] " << pAnda->getDado() << "\n";
			pAnda= pAnda->getProx();
		}
		cout << "[" << pAnda->getChave() << "] " << pAnda->getDado() << "\n";
	}
}

void LDL::clear(){
	No *pAnt, *pAnda = cabeca;
	
	while(pAnda != cabeca){
		pAnt = pAnda;
		pAnda = pAnda -> getProx();
		pAnt -> setProx(nullptr);
		delete pAnt;
		pAnt = nullptr;
	}
	cabeca = nullptr;	
  qtde = 0;
}

// Percorre a lDL em ordem decrescente e mostra os seus valores
void LDL::mostraOrdemDecrescente(){
	// Percorre a lista e imprime os valores
	// em ordem decrescente
	if (cabeca == nullptr) cout << "Lista vazia!" << endl;
	else{
		cout<< "Lista com " << qtde << " elementos - ordem invertida\n";
		No *pAnda = this->cabeca;
		while (pAnda->getAnt() != this->cabeca){
			pAnda= pAnda->getAnt();
			cout << "[" << pAnda->getChave() << "] " << pAnda->getDado() << "\n";
		}
		cout << "[" << pAnda->getAnt()->getChave() << "] " << pAnda->getAnt()->getDado() << "\n\n";
	}
}

// Insere um novo elemento na LDL na ordem
// crescente
bool LDL::append(int chave, Elemento dado){

	No *novoNo = new No(chave, dado, nullptr, nullptr);
	
	if (isFull()) return false;

	// se lista vazia, insere o nó no ponteiro cabeça
	// e faz o nó apontar para ele mesmo
	if (cabeca == nullptr) {
		this->cabeca = novoNo;
		novoNo->setProx(novoNo);
		novoNo->setAnt(novoNo);
	} else { 
	    // Caso contrário, procura posição de inserção
	    // na ordem crescente de valores
		No *pAnda = this->cabeca, *pAnt = nullptr;
		while (pAnda->getProx() != cabeca ){
				pAnt = pAnda;
				pAnda = pAnda->getProx();
		}
    pAnda->getProx()->setAnt(novoNo);
				novoNo->setProx(pAnda->getProx());
				pAnda->setProx(novoNo);
				novoNo->setAnt(pAnda);
        
    }
    this->qtde++;
	  return true;
  }


bool LDL::insert(int chave, Elemento dado){
  No *novoNo = new No(chave, dado, nullptr, nullptr);
	
	if (isFull()) return false;
  if (cabeca == nullptr) {
		this->cabeca = novoNo;
		novoNo->setProx(novoNo);
		novoNo->setAnt(novoNo);
	} else {
			novoNo->setAnt(this->cabeca->getAnt());
			this->cabeca->getAnt()->setProx(novoNo);
			this->cabeca->setAnt(novoNo);
			novoNo->setProx(this->cabeca);
			this->cabeca = novoNo;
    }
      this->qtde++;
	    return true;
		} 


No* LDL::getTail() {
  if (isEmpty()) {
    return nullptr;
  } else {
    No *pAnda = cabeca;
    while (pAnda -> getProx() != cabeca) {
      pAnda = pAnda -> getProx();
      }
    return pAnda;
    } 
}
  


No* LDL::busca(int chave) {
  if (isEmpty()) {
    return nullptr;
  } else {
    No *pAnda = cabeca;
    while (pAnda -> getChave() != chave && pAnda -> getProx() != cabeca) {
      pAnda = pAnda -> getProx();
      }
    if (pAnda -> getChave() == chave) {
      return pAnda;
    } else {
      return nullptr;
    }
    } 
}


bool LDL::atualiza(int chave, Elemento dado) {
  if (isEmpty()) {
    return false;
  } else {
    
  No *pAnda = cabeca;
  while (pAnda -> getChave() != chave && pAnda -> getProx() != cabeca) {
      pAnda = pAnda -> getProx();
      }
    if (pAnda -> getChave() == chave) {
      pAnda -> setDado(dado);
      return true;
    } else {
      return false;
    }
  }
}


No* LDL::removeHead() {
    qtde--;
  if (isEmpty()) {
    return nullptr;
  } else {
    No *pAnda = cabeca;

        pAnda -> getAnt() -> setProx(pAnda -> getProx());
        pAnda -> getProx() -> setAnt(pAnda -> getAnt());
        cabeca = pAnda -> getProx();
        return pAnda;
      delete pAnda;
      pAnda = nullptr;
}
  }

No* LDL::removeTail() {
    qtde--;
  if (isEmpty()) {
    return nullptr;
  } else {
    No *pAnda = cabeca;
  while (pAnda -> getProx() != cabeca) {
      pAnda = pAnda -> getProx();
      }
      pAnda -> getAnt() -> setProx(cabeca);
      pAnda -> getProx() -> setAnt(pAnda -> getAnt());
      return pAnda;
      delete pAnda;
      pAnda = nullptr;
    }
  }

No* LDL::remove(int chave) {
  qtde--;
  if (isEmpty()) {
    return nullptr;
  } else {

    No *pAnda = cabeca;
  while (pAnda -> getChave() != chave && pAnda -> getProx() != cabeca) {
      pAnda = pAnda -> getProx();
      }
    if (pAnda -> getChave() == chave) {
      if (cabeca == pAnda) {
        pAnda -> getAnt() -> setProx(pAnda -> getProx());
        pAnda -> getProx() -> setAnt(pAnda -> getAnt());
        cabeca = pAnda -> getProx();
      } else if (pAnda != cabeca) {
        pAnda -> getAnt() -> setProx(pAnda -> getProx());
        pAnda -> getProx() -> setAnt(pAnda -> getAnt());
        // Ultimo da lista
      } else if (pAnda -> getProx() == cabeca) {
        pAnda -> getAnt() -> setProx(cabeca);
        pAnda -> getProx() -> setAnt(pAnda -> getAnt());
      }
      return pAnda;
      delete pAnda;
      pAnda = nullptr;
      
    } else {
      return nullptr;
    }
  }
}

