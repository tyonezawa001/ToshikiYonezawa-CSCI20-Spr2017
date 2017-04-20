#include <iostream>
using namespace std;

int main() {
    
    int i;
    char userName[21] = "12345678901234567890";
    
    cout << endl;
    cout << "Please enter your name: ";
    cin.get(userName, 21);
    
    for (i = 0; userName[i] != '\0'; i++) {
        if (userName[i] == ' ') {
            i++;
        }
    }
    
    i = i + 1;
    
    if (i > 20) {
        cout << endl;
        cout << "Warning! user input must be 20 words or less!" << endl;
        cout << "Please do it all over again!" << endl;
    }
    
    cout << userName << endl;
    
    return 0;
}