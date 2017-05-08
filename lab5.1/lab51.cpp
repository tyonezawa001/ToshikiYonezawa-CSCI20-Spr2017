/*
 *Updated by: Toshiki Yonezawa
 *Updated on: 05/08/2017
 *This program must work as researching a word which is palindrome or not.
 *However, it has some errors now, so I'll try explaing how to work pointers in this program.
 *In addition, I'll try what's the errors in this program.
 *I didn't fix this prgram, so I just added comments if I think some lines are important.
 */

#include <iostream> 
#include <iostream> 
#include <cstring> 
using namespace std;   

int main() {
    int nameLength = 0;
    char * name = new char[]; // the line is wrong be cause it must have a variable in the "[]" for initializing.

    cout << "Please enter a 10 letter word or less" << endl;
    cin >> name;

    char * head  = name; // variable "head" points to variable "name". In here, the varibele "head" is initialized by "name".
    char * tail = name; // variable "tail" also points to variable "name". In here, the variable "head" is initialized by "name".
    nameLength = strlen(*name); // I htink the line may be wrong because if I want to know the word's length of name, I may use variable "name" not "*name".

    cout << "Your word is " << firststr << endl; // the line is wrong because varible "firstst" was not declared in this scope

    if (nameLength < 10)
    {
         while (*head != '\0') // I don't know what's this working for? 
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

     tail = &name[strlen(name) - 1]; // now variable "tail" may have same address with variable "name". However, I confuse why "strlen" is in here?? 

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