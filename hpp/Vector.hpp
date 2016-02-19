#include <iostream>

using namespace std;

typedef TDATO int;

class Vector {
private:
   int size_;                                //Size of the vector
   int maxSize_;                             //Maximum size of the vector
   int vectorPos_;                           //Current Vector's position

public:
   Vector(int size = 20);                    //Constructor with parameter by default, allow call without arguments
   ~Vector();                                //Default destructor

   void setSize(int size);                   //Set vector's size
   int getSize(void);                        //Get vector's size
   void pushItem(TDATO item);                //Push item into vector
   TDATO getItem(int position);              //Get item from vector [position]
   void dropItem(void);                      //Remove item from vector
};
