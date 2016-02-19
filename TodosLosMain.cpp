#include <cstdlib>                  //to use system();
#include <iostream>

using namespace std;

int main (void) {
   int option;
   bool end = false;          //The end of the program
   bool program;              //Just to "return" from called program
do {
   system("clear");
   cout << "...Welcome...\n"
        << "=============\n" << endl;

   cout << "Please choose an option:\n\n"
        << "0.- Exit\n"
        << "1.- Vector\n"
        << "2.- Linked list\n"
        << "3.- Stack\n"
        << "4.- Queue\n" << endl;

   cout << "Your option: ";
   cin >> option;

   switch (option) {
      case 0:
         end = true;
         break;
      case 1:
         system("./mainVector.out");
         break;
      case 2:
//         MainList();
         break;
      case 3:
//         MainStack();
         break;
      case 4:
//         MainQueue();
         break;
      default:
         break;
   }
} while (!end);
}
