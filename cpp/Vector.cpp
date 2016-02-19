#include "../hpp/Vector.hpp"

Vector::Vector(int maxSize) {
   maxSize_ = maxSize;                    //Establish maximum vector's size
   vector_ = new TDATO[maxSize_];         //Create new vector with maximum size
   setSize(ZERO);                         //Set current size of vector to zero
}

Vector::~Vector() {
   delete vector_;                      //Delete vector
}

void Vector::setSize(int size) {
   size_ = size;                          //Set current vector's size
}

int Vector::getSize(void) {
   return size_;                          //Get current vector's size
}

bool Vector::setItem(TDATO item) {
   if (size_ < maxSize_ -1) {             //Check if the vector is not full
      vector_[size_] = item;              //Save the new item into vector
      size_ ++;                           //Increase the current size
      return 0;
   }
   return 1;                              //If the program is here, the vector is full
}

TDATO Vector::getItem(int position) {
   if (position <= size_)
      return vector_[position -1];        //Return the item from position
}

void Vector::deleteItem(int numItems) {
   if (numItems <= getSize())
      setSize(getSize() - numItems);         //Hide X number of items from the bottom
   else
      setSize(ZERO);
}

void Vector::printItems(void) {
   for (int i = 0; i < getSize(); i++) {     //Iterate and print all items
      std::cout << " " << vector_[i];
   }
}

int Vector::getMaxSize(void) {
   return maxSize_;                          //Return the maximum size
}
