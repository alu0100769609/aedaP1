#include "../hpp/LinkedList.hpp"

LinkedList::LinkedList(void) {
   setFirst(NULL);
   setLast(NULL);
}

LinkedList::~LinkedList(void) {

}

bool LinkedList::empty() {
   return (first_ == NULL);
}

void LinkedList::setFirst(Node* first) {
   first_ = first;
}


Node* LinkedList::getFirst(void) {
   return first_;
}

void LinkedList::setLast(Node* last){
   last_ = last;
}

Node* LinkedList::getLast(void) {
   return last_;
}

void LinkedList::setHead(TDATO element) {
   Node* aux = new Node(element);
   if (empty()) {
      setFirst(aux);
      setLast(aux);
   }
   else {
      aux->setNext(getFirst());
      setFirst(aux);
   }
}

void LinkedList::setTail(TDATO element) {
   Node* aux = new Node(element);
   if (empty()) {
      setFirst(NULL);
      setLast(NULL);
   }
   else {
      getLast()->setNext(aux);                //Esto lo veo peligrar---------------------------------------------------
      setLast(aux);
   }
}

void LinkedList::deleteFirst() {
   if (empty())
      std::cout << "Empty list, nothing deleted" << std::endl;
   else {
      if (getFirst() == getLast()) {
         Node* aux = getFirst();
         setFirst(NULL);
         setLast(NULL);
         delete aux;
      }
      else {
         Node* aux = getFirst();
         setFirst(aux->getNext());
         delete aux;
      }
      std::cout << "Deleted" << std::endl;
   }
}

void LinkedList::deleteLast() {
   if (empty())
      std::cout << "Empty list, nothing deleted" << std::endl;
   else {
      Node* aux = getFirst();
      while (aux != NULL) {
         if (getFirst() == getLast()) {
            setFirst(NULL);
            setLast(NULL);
            std::cout << "Deleted" << std::endl;
         }
         else if (aux->getNext() == getLast()) {
            Node* aux2 = getLast();
            setLast(aux);
            getLast()->setNext(NULL);
            delete aux2;
            std::cout << "Deleted" << std::endl;
         }
         else
            aux = aux->getNext();
      }
   }
}

void LinkedList::printItems() {
   if (empty())
      std::cout << "The list is empty" << std::endl;
   else {
      Node* aux = getFirst();
      do{
         std::cout << aux->getElement() << " ";
         aux = aux->getNext();
      } while (aux != NULL);
      std::cout << "\n";
   }
}
