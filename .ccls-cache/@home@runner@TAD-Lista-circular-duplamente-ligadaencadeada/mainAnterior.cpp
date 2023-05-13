
/*
// main.cpp
#include <iostream>
#include "listaCirc.hpp"


void append(LinkedList *listaLincada, std::string e){
   	if (listaLincada->append(e));
   	else std::cout << "Falha na inserção!\n";
}


void insert(LinkedList *listaLincada, std::string e){
   	if (listaLincada->insert(e));
   	else std::cout << "Falha na inserção!\n";
}


void print(LinkedList *listaLincada) {
  listaLincada->print();
}


void clear(LinkedList *listaLincada) {
  listaLincada->clear();
}


void removeNode(LinkedList *listaLincada, std::string val) {
   int temp = listaLincada->remove(val, frase);
  std::cout << "Nó removido: " << val << "\n";
}


void removeHead(LinkedList *listaLincada) {
NodeLL *temp = listaLincada->getHead();
int valTemp = temp->getVal();
removeNode(listaLincada, valTemp);
}


void removeTail(LinkedList *listaLincada) {
NodeLL *temp = listaLincada->getTail();
int valTemp = temp->getVal();
removeNode(listaLincada, valTemp);
}


NodeLL primeiroNo(LinkedList *listaLincada) {
  NodeLL *temp = listaLincada->getHead();
  int valTemp = temp->getVal();
  std::cout << "No obtido com sucesso. A Variavel Obtida: " << valTemp << "\n";
  return *temp;
}


NodeLL ultimoNo(LinkedList *listaLincada) {
  NodeLL *temp = listaLincada->getTail();
  int valTemp = temp->getVal();
  std::cout << "No obtido com sucesso. A Variavel Obtida: " << valTemp << "\n";
  return *temp;
}


NodeLL getNode(LinkedList *listaLincada, int val) {
  if(NodeLL *temp = listaLincada->search(val)) {
    int valTemp = temp->getVal();
  std::cout << "No obtido com sucesso. A Variavel obtida: " << valTemp << "\n";
  return *temp;
  } else std::cout << "O no com valor " << val << " nao existe\n";
}


int main()
{ 
 std::cout << "*** Lista Ligada/Encadeada (Linked List) ***\n";
  LinkedList* list = new LinkedList();
 printListInfo(list);
 insert(list, 1);
 insert(list, 2);
 insert(list, 3);
 append(list, 4);
 append(list, 5);
 append(list, 6);
 printListInfo(list);
 clear(list);
 printListInfo(list);
 insert(list, 77);
 append(list, 88);
 insert(list, 99);
 append(list, 3);
 insert(list, 2);
 append(list, 1);
 insert(list, 0);
 printListInfo(list);
 removeNode(list, 3);
 printListInfo(list);
 removeHead(list);
 printListInfo(list);
 removeTail(list);
 printListInfo(list);
 primeiroNo(list);
 getNode(list, 3);

 delete list;
 list = nullptr;
  
 std::cout << "Fim.\n";
}
*/