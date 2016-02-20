#include "Node.hpp"

class Queue {
private:
   Node* first_;                    //Pointer to the first element
   Node* last_;                     //Pointer to the last element
public:
   Queue(void);                //Constructor
   ~Queue(void);               //Destructor
   bool empty(void);                //Check if empty list
   void setFirst(Node* first);      //Set pointer to the first node
   Node* getFirst(void);            //Get pointer to the first element
   void setLast(Node* last);        //Set pointer to the last node
   Node* getLast(void);             //Get pointer to the last element
   void setHead(TDATO element);     //Set element from head
//   void setTail(TDATO element);     //Set element from tail
//   void deleteFirst(void);          //Delete node from head
   void deleteLast(void);           //Delete node from tail
   void printItems(void);           //Print the list of elements
};
