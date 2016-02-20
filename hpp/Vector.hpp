#include <iostream>

typedef int TDATO;
const int ZERO = 0;
const int MAX_SIZE = 10;

class Vector {
private:
   int size_;                                //Current size of the vector
   int maxSize_;                             //Maximum size of the vector
   int* vector_;                             //Current Vector's position

public:
   Vector();                                 //Constructor
   ~Vector();                                //Default destructor

   void setSize(int size);                   //Set vector's size
   int getMaxSize(void);                     //Get the maximum size of the vector
   int getSize(void);                        //Get vector's size
   bool setItem(TDATO item);                 //Set item into vector, return 1 if failed
   TDATO getItem(int position);              //Get item from vector position
   void deleteItem(int numItems = 1);        //Remove item/s from vector, 1 by default
   void printItems(void);                    //Print items on the screen
};
