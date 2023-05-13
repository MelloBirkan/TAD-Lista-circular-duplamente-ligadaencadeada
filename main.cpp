// AMANDA GOIS SMANIOTO       TIA:42127351
// DANIELA BRAZOLIN FLAUTO    TIA:42130581

// AVALIACAO:
// Amanda: 9, Dani: 9

// REFERENCIAS:
// https://www.youtube.com/watch?v=HMkdlu5sP4A
// https://www.youtube.com/watch?v=5s0x8bc9DvQ
// https://www.softwaretestinghelp.com/doubly-linked-list-2/#:~:text=A%20doubly%20linked%20list%20is,data%20part%20and%20two%20pointers

// main.cpp
#include "ListCirc.h"
#include <iostream>
using namespace std;

void Append(LDL *listaLincada, int chave, std::string dado) {
  if (listaLincada->append(chave, dado))
    ;
  else
    std::cout << "Falha na inserção!\n";
}

void Insert(LDL *listaLincada, int chave, std::string dado) {
  if (listaLincada->insert(chave, dado))
    ;
  else
    std::cout << "Falha na inserção!\n";
}

void Print(LDL *listaLincada) { listaLincada->mostraOrdemCrescente(); }

void PrintReverse(LDL *listaLincada) { listaLincada->mostraOrdemDecrescente(); }

void Clear(LDL *listaLincada) { listaLincada->clear(); }

void PrintDoubleListInfo(LDL *list) {
  if (list->isEmpty()) {
    cout << "Lista vazia!\n";
  } else {
    Print(list);
    PrintReverse(list);
  }
}

void removeNode(LDL *listaLincada, int chave) {
  No *temp = listaLincada->remove(chave);
  std::cout << "Nó removido -> id: " << temp->getChave() << ", "
            << "name: " << temp->getDado() << "\n";
}

void removeHead(LDL *listaLincada) {
  No *temp = listaLincada->removeHead();
  std::cout << "Nó removido -> id: " << temp->getChave() << ", "
            << "name: " << temp->getDado() << "\n";
}

void removeTail(LDL *listaLincada) {
  No *temp = listaLincada->removeTail();
  std::cout << "Nó removido -> id: " << temp->getChave() << ", "
            << "name: " << temp->getDado() << "\n";
}

No *getCabeca(LDL *listaLincada) {
  No *temp = listaLincada->getCabeca();
  std::cout << "Nó -> id: " << temp->getChave() << ", "
            << "name: " << temp->getDado() << "\n";
  return temp;
}

No *getTail(LDL *listaLincada) {
  No *temp = listaLincada->getTail();
  std::cout << "Nó -> id: " << temp->getChave() << ", "
            << "name: " << temp->getDado() << "\n";
  return temp;
}

No *getNode(LDL *listaLincada, int chave) {
  if (listaLincada->busca(chave) == nullptr) {
    cout << "Não existe esse Nó\n";
    return nullptr;
  } else {
    No *temp = listaLincada->busca(chave);
    std::cout << "Nó -> id: " << temp->getChave() << ", "
              << "name: " << temp->getDado() << "\n";
    return temp;
  }
}

int main() {
  cout << "*** Lista Circular Duplamente Ligada/Encadeada (Doubly Circular "
          "Linked List) ***\n";
  LDL *list = new LDL();
  PrintDoubleListInfo(list);
  Insert(list, 1, "Carol");
  Insert(list, 2, "Eric");
  Insert(list, 3, "John");
  Append(list, 4, "Leo");
  Append(list, 5, "Julia");
  Append(list, 6, "Lisa");

  PrintDoubleListInfo(list);
  Clear(list);

  PrintDoubleListInfo(list);
  Insert(list, 11, "Paulo");
  Append(list, 22, "Thomas");
  Insert(list, 33, "Olga");
  Append(list, 44, "Bia");
  Insert(list, 55, "Angela");
  Append(list, 66, "Karen");
  Insert(list, 77, "Adauto");
  PrintDoubleListInfo(list);
  removeNode(list, 44);
  PrintDoubleListInfo(list);
  removeHead(list);
  PrintDoubleListInfo(list);
  removeTail(list);
  PrintDoubleListInfo(list);

  No *primeiro = getCabeca(list);
  No *ultimo = getTail(list);
  No *idSeteSete = getNode(list, 77);

  cout << "Fim.\n";
}
