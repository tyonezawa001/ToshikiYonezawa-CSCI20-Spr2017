/*
 *Created by: Toshiki Yonezawa
 *Created on: 04/25/2017
 *The program can create three different account names form inputed user name.
 */

#include <iostream>
#include <string>
#include <algorithm> // it needs for changing letters from upper letters to small letters
using namespace std;

int main() {
    
    string userInputName; // variable for user input
    string firstPart; // variable for first name of user 
    string lastPart; // variable for last name of user
    
    cout << endl;
    cout << "Please enter your name with space between first name and last name." << endl;
    cout << "Name (ex. Toshiki Yonezawa): ";
    
    getline(cin, userInputName); // get a full name of user name with white space
    
    firstPart = userInputName.substr(0, userInputName.find(' ')); // pick up first name which is separated by first letter to white space
    
    transform(firstPart.begin(), firstPart.end(), firstPart.begin(), ::tolower); // all letters must be small letter, so the statement transforms to small letter.
    
    lastPart = userInputName.substr(userInputName.find(' ') + 1, userInputName.length()); // pick up last name which is separated by next to white space (white space + 1) and last letter
    
    transform(lastPart.begin(), lastPart.end(), lastPart.begin(), ::tolower); // all letters must be small letter, so the statement transforms to small letter.
    
    if (userInputName.length() > 21 || firstPart.length() > 10 || lastPart.length() > 10) { // if the first name and last name is more than 10 letters, the program is end with return 0.
        
        cout << endl;
        cout << "The input name  should be a first name of up to 10 characters and a last name of up to 10 characters." << endl;
        cout << "Please do it all over again!" << endl;
        
        return 0;
    }
    else if (firstPart == lastPart) { // if first name and last name are exactly same letters, the program is end with return 0.
        
        cout << endl;
        cout << "Warning! Your output looks exactly same first name and final name." << endl;
        
        return 0;
    }
    
    cout << endl;
    cout << "1st recommend: " << firstPart.substr(0, 2) + lastPart << endl; // combine first 2 letters of first name and last name
    cout << endl;
    cout << "2nd recommend: " << firstPart.at(0) + lastPart << endl; // combine first letter of first name and last name
    cout << endl;
    cout << "3rd recommend: " << firstPart + lastPart << endl; // combine first name and last name
    
    return 0;
}

/*Toshiki Yonezawa
 *1st recommend: toyonezawa
 *2nd recommend: tyonezawa
 *3rd recommend: toshikiyonezawa
 *
 *April Browne
 *1st recommend: apbrowne
 *2nd recommend: abrowne
 *3rd recommend: aprilbrowne
 *
 *AnaElizabeth Hazeltine-Smith
 *The input name  should be a first name of up to 10 characters and a last name of up to 10 characters.
 *Please do it all over again!
 *
 *James James
 *Warning! Your output looks exactly same first name and final name.
 */