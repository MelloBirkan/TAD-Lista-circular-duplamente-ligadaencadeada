
#ifndef __LINKEDLIST_H__
#define __LINKEDLIST_H__

#ifndef __DOUBLY_H__
#define __DOUBLY_H__

#include "node.h"
#include <string>

class Doubly{
	private:
		NodeLL *head;
    NodeLL *tail;
    
	public:	
    int count;
		LinkedList();
		~LinkedList();
		bool isEmpty();
		bool isFull();
		bool insert(int val);
		bool append(int val);
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