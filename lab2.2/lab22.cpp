/*
 *Created by: Toshiki Yonezawa
 *Created on: 02/23/2017
 *This program will be randomly choosing one number from 1 to 100. 
 */

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


// void sructure 
void randomGenerator(){
    
    srand(time(0));
    int randomNum = (rand() % 100) + 1; // Choosing a number randomly in here
    
    cout << endl;
    cout << "Your random number is " << randomNum << "." << endl; // making a sentence for output 
    
    return;
    
}

// int main() structure.
int main(){
    
    randomGenerator();
    
    return 0;
    
}