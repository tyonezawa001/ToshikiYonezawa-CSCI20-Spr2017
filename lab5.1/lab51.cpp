#include <iostream> 
#include <iostream> 
#include <cstring> 
using namespace std;   

int main() {
    int nameLength = 0;
    char * name = new char[];

    cout << "Please enter a 10 letter word or less" << endl;
    cin >> name;

    char * head  = name;
    char * tail = name;
    nameLength = strlen(*name);

    cout << "Your word is " << firststr << endl; // the line is wrong because varible "firstst" was not declared in this scope

    if (nameLength<10)
    {
         while (*head != '\0')
         {
                cout << *head;
                head++;
         }
     }
     else
     {
          cout << "WARNING WORD TOO BIG TO DISPLAY!!" << endl;
     }

     cout << endl;

     tail = &name[strlen(name) - 1];

     if (nameLength < 10)
     {
          while (tail != name)
          {
                 cout << *tail;
                 tail--;
          }
     }
     cout << endl;

     head = name; // variable "head" is initialized by variable "name"
     tail = &name[strlen(name) - 1]; // now variable "tail" has a same address with variable "name"

     head++;
     tail--;

     if (*head == *tail)
     {
         cout << "It is an palindrome!" << endl;
     }
     else
     {
         cout << "It is not an palindrome" << endl;
     }

     return 0; 
}