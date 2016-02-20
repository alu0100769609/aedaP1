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
   Node* aux = new Node(element);               //Creating Node with data
   if (empty()) {                               //If list is empty
      setFirst(aux);                            //First node = aux
      setLast(aux);                             //Last node = aux
   }
   else {                                       //If list is not empty
      aux->setNext(getFirst());                 //Set next of aux to 1st element
      setFirst(aux);                            // and change 1st element to aux
   }
}

void LinkedList::setTail(TDATO element) {
   Node* aux = new Node(element);               //Creating Node with data
   if (empty()) {                               //If list is empty
      setFirst(aux);                            //First node = aux
      setLast(aux);                             //Last node = aux
   }
   else {                                       //If list is not empty
      getLast()->setNext(aux);                  //Set next of last node = aux
      setLast(aux);                             //Set last node = aux
   }
}

void LinkedList::deleteFirst() {
   if (empty())
      std::cout << "Empty list, nothing deleted" << std::endl;
   else {
      if (getFirst() == getLast()) {            //If only one element
         Node* aux = getFirst();                //Create aux pointer to first
         setFirst(NULL);                        //Set first = null
         setLast(NULL);                         //Set last = null
         delete aux;                            //Delete node
      }
      else {                                    //If more than one element
         Node* aux = getFirst();                //Create aux pointer to first
         setFirst(aux->getNext());              //Set first = 2nd element
         delete aux;                            //Delete node (old first)
      }
      std::cout << "Deleted" << std::endl;
   }
}

void LinkedList::deleteLast() {
   if (empty())
      std::cout << "Empty list, nothing deleted" << std::endl;
   else {                                       //If list is not empty
      Node* iterator = getFirst();              //Create pointer to iterate
      do {
         if (getFirst() == getLast()) {         //If only one element
            setFirst(NULL);                     //Set first = null
            setLast(NULL);                      //Set last = null
            delete iterator;                    //Delete node
            std::cout << "Deleted" << std::endl;
         }
         else if (iterator->getNext() == getLast()) {
            Node* aux = getLast();              //Create aux pointer to last
            setLast(iterator);                  //Set last = iterator (second last)
            getLast()->setNext(NULL);           //Set next of last = null
            delete aux;                         //Delete aux (old last)
            std::cout << "Deleted" << std::endl;
         }
         else
            iterator = iterator->getNext();     //Iterate to next node
      }while (iterator->getNext() != NULL);     //Iterate while no end of list
   }
}

void LinkedList::printItems() {
   if (empty())
      std::cout << "The list is empty" << std::endl;
   else {
      Node* aux = getFirst();                   //Create aux pointer to first
      do{
         std::cout << aux->getElement() << " "; //Print item of list
         aux = aux->getNext();                  //Iterate to the next
      } while (aux != NULL);                    //While no end of list
      std::cout << "\n";
   }
}
