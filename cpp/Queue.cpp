#include "../hpp/Queue.hpp"

Queue::Queue(void) {
   setFirst(NULL);
   setLast(NULL);
}

Queue::~Queue(void) {

}

bool Queue::empty() {
   return (first_ == NULL);
}

void Queue::setFirst(Node* first) {
   first_ = first;
}


Node* Queue::getFirst(void) {
   return first_;
}

void Queue::setLast(Node* last){
   last_ = last;
}

Node* Queue::getLast(void) {
   return last_;
}

void Queue::setHead(TDATO element) {
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
/*
void Queue::setTail(TDATO element) {
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

void Queue::deleteFirst() {
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
*/
void Queue::deleteLast() {
   if (empty())
      std::cout << "Empty queue, nothing deleted" << std::endl;
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

void Queue::printItems() {
   if (empty())
      std::cout << "The queue is empty" << std::endl;
   else {
      Node* aux = getFirst();                   //Create aux pointer to first
      do{
         std::cout << aux->getElement() << " "; //Print item of list
         aux = aux->getNext();                  //Iterate to the next
      } while (aux != NULL);                    //While no end of list
      std::cout << "\n";
   }
}
