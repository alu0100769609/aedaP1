#include "../hpp/Vector.hpp"

#include <cstdlib>                  //to use system();
#include <iostream>

using namespace std;

int main(void) {
   int option;                      //Select option from menu
   bool error = false;              //Check setItem's out
   TDATO item;                      //Type of items to set defined in Vector.hpp

   Vector myVector;                 //Creating our vector
   system("clear");                 //Clean screen

   do {
      cout << "...Vector Menu...\n" //Print menu with different options
           << "=================\n" << endl;

      cout << "Please choose an option:\n\n"
           << "0.- Delete vector and exit\n"
           << "1.- Set item\n"
           << "2.- Get vector's size\n"
           << "3.- Get maximum lenght of vector\n"
           << "4.- Delete items\n"
           << "5.- Print items\n" << endl;

      cin >> option;                //Get user option
      if (option != 1)              //Don't clean if option = 1,
         system("clear");           // we will make another question

      switch (option) {
         case 0:                    //Exit vector menu
            return 0;
            break;
         case 1:                    //Ask for items to set
            cout << "What item do you want to set? ";
            cin >> item;
            system("clear");
            error = myVector.setItem(item); //Set item
            if (error)
               cout << "This vector is full, please delete first" << endl;
            break;
         case 2:                    //Get vector's size
            cout << "This vector has " << myVector.getSize()
                 << " elements" << endl;
          break;
        case 3:                     //Get the maximum lenght of the vector
            cout << "This vector can reach " << myVector.getMaxSize()
                 << " elements" << endl;
          break;
        case 4:                     //Delete items from vector
            cout << "How many items do you want to delete? ";
            cin >> item;
            system("clear");
            myVector.deleteItem(item);
            break;
        case 5:                     //Print items from vector
            cout << "The vector has "
                 << myVector.getSize() << " elements, and they are: ";
            myVector.printItems();
            cout << "\n\n" << endl;
            break;

        default:
            break;
     }
  } while (true);                  //The end comes with return when case = 0
}
