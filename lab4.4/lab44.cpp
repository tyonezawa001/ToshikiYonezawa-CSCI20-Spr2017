/*
 *Created by: Toshiki Yonezawa
 *Created on: 04/20/2017
 *This program will be able to create three accunt names from user name.
 */

#include <iostream>
#include <string.h>
#include <algorithm> // it needs for changing letters from upper letters to small letters
using namespace std;

int main() {
    
    int i = 0;
    char userName[21] = "12345678901234567890"; // char variable for input which has a limit under 20 letters
    char userAcount[21] = "12345678901234567890"; // char variable for new statement for recommendations
    char userLastName[21] = "12345678901234567890"; // char variable for last name statement
    char key = ' '; // char variable states of space
    int search = 0; // integer varieble for placement numbers of ' '
    std::string last; // string variable for last name
    std::string first1; // string variable for 1st recommend
    std::string first2; // string variable for 2nd recommend
    std::string first3; // string variable for 3rd recommend
    
    //Introduction
    cout << endl;
    cout << "This program will be able to give three different account names from user name." << endl;
    cout << endl;
    cout << "Please enter your name with space between your first name and last name (ex.Toshiki Yonezawa)." << endl;
    cout << "name: ";
    cin.get(userName, 21); // input user name to variable 'userName'
    
    //count the number of characters with space
    for (i = 0; userName[i] != '\0'; i++) {
        if (userName[i] == ' ') { // user input must have a space betwen first name and final name, so if user input has the space the if statement add 1 to i value.
            i++;
        }
    }
    
    i = i + 1; // the variable i must add more 1 value because input user name must have a space.
    
    // the problem said the usr input must be less than 21 characters, so if user output will be over 20, the program stops.
    if (i > 20) {
        cout << endl;
        cout << "Warning! The program limits the number of characters to 20!" << endl;
        cout << "Please do it all over again!" << endl;
        return 0;
    }
    
    strncpy(userAcount, userName + 0, 1); // the statement pick up 1st letter of user input
    userAcount[1] = '\0'; // add '\0' after the 1st letter.
    first1 = userAcount;
    std::transform(first1.begin(), first1.end(), first1.begin(), ::tolower); // all letters must be small letter, so the statement transforms to small letter.
    
    strncpy(userAcount, userName + 0, 2); // the statement pick up 1st letter to 2nd letter of user input.
    userAcount[2] = '\0'; // add '\0' after the 2nd letter.
    first2 = userAcount;
    std::transform(first2.begin(), first2.end(), first2.begin(), ::tolower); // all letters must be small letter, so the statement transforms to small letter.
    
    string str(userName); // char variable transform to string variable
    search = str.find(key); // find the place of ' '
    strncpy(userAcount, userName + 0, search); // the statement pick up first name part of user input. 
    userAcount[search] = '\0'; // add '\0' after the first name.
    first3 = userAcount;
    std::transform(first3.begin(), first3.end(), first3.begin(), ::tolower); // all letters must be small letter, so the statement transforms to small letter.
    
    search = search + 1; // the statment output the first number of last name's place 
    last = str.substr(search); // char variable transform to string variable, and then initialized to last variable
    std::transform(last.begin(), last.end(), last.begin(), ::tolower); // all letters must be small letter, so the statement transforms to small letter.
    
    // if statement which compare first name and last name. If first and final name are same, the program stops.
    if (first3 == last) {
        cout << endl;
        cout << "Warning! Your output looks exactly same first name and final name." << endl;
        return 0;
    }
    
    //Output statement
    cout << endl;
    cout << "1st recommend: " << first1 + last << endl;
    cout << endl;
    cout << "2nd recommend: " << first2 + last << endl;
    cout << endl;
    cout << "3rd recommend: " << first3 + last << endl;
    
    return 0;
}

/*
 *name: toshiki yonezawa
 *1st recommend: tyonezawa
 *2nd recommend: toyonezawa
 *3rd recommend: toshikiyonezawa
 *
 *name: April Browne
 *1st recommend: abrowne
 *2nd recommend: apbrowne
 *3rd recommend: aprilbrowne
 *
 *name: AnaElizabeth Hazeltine-Smith
 *Warning! The program limits the number of characters to 20!
 *Please do it all over again!
 *
 *name: James James
 *Warning! Your output looks exactly same first name and final name.
 */