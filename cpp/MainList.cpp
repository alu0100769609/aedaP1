#include "../hpp/LinkedList.hpp"

#include <cstdlib>                  //to use system();
#include <iostream>

using namespace std;

int main(void) {
   int option;                      //Select option from menu
   TDATO item;                      //Type of items to set defined in Node.hpp

   LinkedList* myList = new LinkedList();               //Creating our linked list
   system("clear");                 //Clean screen

   do {
      cout << "...Linked List Menu...\n" //Print menu with different options
           << "======================\n" << endl;

      cout << "Please choose an option:\n\n"
           << "0.- Exit\n"
           << "1.- Print list\n"
           << "2.- Insert head item\n"
           << "3.- Insert tail item\n"
           << "4.- Delete first item\n"
           << "5.- Delete last item\n" << endl;

      cin >> option;                //Get user option
      if ((option != 2) && (option != 3))
         system("clear");

      switch (option) {
         case 0:                    //Exit Linked list menu
            return 0;
            break;
         case 1:
            cout << "Items: ";
            myList->printItems();    //Print the list of items
            cout << "\n" << endl;
            break;
         case 2:                    //Insert head
            cout << "Write your item: ";
            cin >> item;
            myList->setHead(item);
            system("clear");

            break;
        case 3:                     //Insert tail
            cout << "Write your item: ";
            cin >> item;
            myList->setTail(item);
            system("clear");
          break;
        case 4:                     //Delete first item
            myList->deleteFirst();
            break;
        case 5:                     //Delete last item
            myList->deleteLast();
            break;

        default:
            break;
     }
  } while (true);                  //The end comes with return when case = 0

}
