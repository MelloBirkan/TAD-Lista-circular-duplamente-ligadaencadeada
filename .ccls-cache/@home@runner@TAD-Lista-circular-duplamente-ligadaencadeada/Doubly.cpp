#include <string>
#include <iostream>
#include "Doubly.h"

LinkedList::LinkedList(){
	head = nullptr;
  tail = nullptr;
};
LinkedList::~LinkedList(){
	clear();
};

void LinkedList::clear(){
	NodeLL *pAnt, *pAnda = head;
	
	while(pAnda != nullptr){
		pAnt = pAnda; 
		pAnda = pAnda->getProx();
		pAnt->setProx(nullptr);
		delete pAnt;
		pAnt = nullptr;
	}
	head = nullptr;	
  count = 0;
}


NodeLL* LinkedList::search(int val){
	NodeLL *pAnda;
	
    if (isEmpty()) {
		return nullptr; 
    }else{
      pAnda = head;
      
      while ((pAnda != nullptr) && (pAnda->getVal() != val))
        pAnda = pAnda->getProx();
      return pAnda;
    }
}


bool LinkedList::isEmpty(){
  if (getHead() == nullptr) return true;
	else return false;
};

bool LinkedList::isFull(){
	NodeLL *aux = new NodeLL();
	
	if (aux == nullptr) return true;

	aux = nullptr;
	return false;
};

bool LinkedList::insert(int val){
	NodeLL *aux;
    if (!isFull()){
      aux = new NodeLL(val, nullptr);
      if (isEmpty()){ 
        head = aux;
      }else { 
      	aux->setProx(head);
      	head = aux;
      }
      count++;
      return true;
    }
    else return false; 
};

bool LinkedList::append(int val){
	NodeLL *aux, *pAnda;
    if (!isFull()){
      aux = new NodeLL(val, nullptr);
      if (isEmpty()){ 
        head = aux;
      }else { 
        pAnda = head;  
        while (pAnda->getProx() != nullptr)
           pAnda = pAnda->getProx();
        pAnda->setProx( aux );
        tail = aux;
      }
      count++;
	  return true;
    }
    else return false; 
};

bool LinkedList::remove(int val){
	NodeLL *pAnt = nullptr, *pAnda;
    if (isEmpty()) return false; 
    else{
      count--;
      pAnda = head;
      
      while ((pAnda != nullptr) && (pAnda->getVal() != val)){
        pAnt = pAnda;
        pAnda = pAnda->getProx();
      }
      if (pAnda == nullptr) return false; 
      else {
      	
      	if ((head == pAnda)) {
		  head = pAnda->getProx();
	    } else{ 
	    	pAnt->setProx(pAnda->getProx());
		}
		delete pAnda;
      	pAnda = nullptr;
      	return true;   
        ;
      }
    }
}

void LinkedList::print(){
  if (isEmpty()) std::cout << "Lista vazia!\n";
  else {
NodeLL *pAnda; 
int i = 1;
std::cout << "Lista com " << count << " elementos: " ;
pAnda = head;
while (pAnda != nullptr) {
      std::cout << pAnda->getVal() << " ";
      pAnda = pAnda->getProx();
    }
  
    std::cout <<  "\n";
    }
}
