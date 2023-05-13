//AMANDA GOIS SMANIOTO       TIA:42127351
//DANIELA BRAZOLIN FLAUTO    TIA:42130581

#ifndef __NODE_H__
#define __NODE_H__

class NodeLL {
public: 
  NodeLL(){ val = 0; frase = ""; prox = nullptr;	};
  NodeLL(int val, std::string frase, NodeLL *prox) {
    this->val = val;
    this->frase = frase;
    this->prox = prox;
  };
  ~NodeLL();

  NodeLL *getProx() { return prox; };
	int getVal(){ return val; };
  std::string getFrase(){return frase;};
	
	void setProx(NodeLL *prox) { this->prox = prox; };
	void setVal(int val) { this->val = val;	};

private:
    int val;
    std::string frase;
    NodeLL *prox;
};

#endif