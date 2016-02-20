#include "../hpp/Stack.hpp"

#include <cstdlib>                  //to use system();
#include <iostream>

using namespace std;

int main(void) {
   int option;                      //Select option from menu
   TDATO item;                      //Type of items to set defined in Node.hpp

   Stack* myStack = new Stack();               //Creating our linked list
   system("clear");                 //Clean screen

   do {
      cout << "...Stack Menu...\n" //Print menu with different options
           << "================\n" << endl;

      cout << "Please choose an option:\n\n"
           << "0.- Exit\n"
           << "1.- Print list\n"
           << "2.- Insert head item\n"
           << "3.- Delete first item\n" << endl;

      cin >> option;                //Get user option
      if ((option != 2) && (option != 3))
         system("clear");

      switch (option) {
         case 0:                    //Exit Stack menu
            return 0;
            break;
         case 1:
            cout << "Items: ";
            myStack->printItems();    //Print the list of items
            cout << endl;
            break;
         case 2:                    //Insert head
            cout << "Write your item: ";
            cin >> item;
            myStack->setHead(item);
            system("clear");
            break;
        case 3:                     //Delete first item
            myStack->deleteFirst();
            cout << endl;
            system("clear");
            break;
        default:
            break;
     }
  } while (true);                  //The end comes with return when case = 0

}
