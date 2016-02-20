#include "../hpp/Queue.hpp"

#include <cstdlib>                  //to use system();
#include <iostream>

using namespace std;

int main(void) {
   int option;                      //Select option from menu
   TDATO item;                      //Type of items to set defined in Node.hpp

   Queue* myQueue = new Queue();    //Creating our linked list
   system("clear");                 //Clean screen

   do {
      cout << "...Queue Menu...\n" //Print menu with different options
           << "======================\n" << endl;

      cout << "Please choose an option:\n\n"
           << "0.- Exit\n"
           << "1.- Print queue\n"
           << "2.- Insert head item\n"
           << "3.- Delete last item\n" << endl;

      cin >> option;                //Get user option
      if ((option != 2) && (option != 3))
         system("clear");

      switch (option) {
         case 0:                    //Exit queue menu
            return 0;
            break;
         case 1:
            cout << "Items: ";
            myQueue->printItems();    //Print the list of items
            cout << endl;
            break;
         case 2:                    //Insert head
            cout << "Write your item: ";
            cin >> item;
            myQueue->setHead(item);
            system("clear");

            break;
        case 3:                     //Delete last item
            system("clear");
            myQueue->deleteLast();
            cout << endl;
            break;

        default:
            break;
     }
  } while (true);                  //The end comes with return when case = 0

}
