//AMANDA GOIS SMANIOTO       TIA:42127351
//DANIELA BRAZOLIN FLAUTO    TIA:42130581

#ifndef __NODE_H__
#define __NODE_H__

#include <string>
class NodeLL {
public: 
  NodeLL(){ val = 0; nome = ""; prox = nullptr;	};
  NodeLL(int val, std::string nome, NodeLL *prox) {
    this->val = val;
    this->nome = nome;
    this->prox = prox;
  };
  ~NodeLL();

  NodeLL *getProx() { return prox; };
	int getVal(){ return val; };
  std::string getNome() { return this->nome;	};
	
	void setProx(NodeLL *prox) { this->prox = prox; };
	void setVal(int val) { this->val = val;	};
  void setNome(std::string nome) { this->nome = nome; };

private:
  int val;
  std::string nome;
  NodeLL *prox;
};

#endif