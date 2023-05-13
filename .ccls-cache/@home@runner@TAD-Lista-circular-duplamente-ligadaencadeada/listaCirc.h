//AMANDA GOIS SMANIOTO       TIA:42127351
//DANIELA BRAZOLIN FLAUTO    TIA:42130581

#ifndef __LISTACIRC_H__
#define __LISTACIRC_H__

#include "node.h"
#include <string>

class LinkedList{
	private:
		NodeLL *head;
    NodeLL *tail;
    
	public:	
    int count;
		LinkedList();
		~LinkedList();
		bool isEmpty();
		bool isFull();
		bool insert(int val, std::string nome);
		bool append(int val, std::string nome);
		bool remove(int val);
    NodeLL *search(int val);
		void clear();
		void print();	

    NodeLL* getHead(){ return head; };
		void setHead(NodeLL *head) { this->head = head;	}
    NodeLL* getTail(){ return tail; };
		void setTail(NodeLL *tail) { this->tail = tail;	}
};

#endif