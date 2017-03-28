#include <iostream>
#include <string>
using namespace std;

int main() {
    
    double exemption = 3900;
    string name;
    double wage;
    double withheld;
    char ask1;
    double subtractedDataSingle;
    double tax;
    
    cout << endl;
    cout << "Please input your information in here." << endl;
    cout << endl;
    cout << "Name(ex.Toshiki_Yonezawa): ";
    cin >> name;
    cout << endl;
    cout << "Wage(ex.10000): ";
    cin >> wage;
    cout << endl;
    cout << "Withheld(ex.10000): ";
    cin >> withheld;
    cout << endl;
    cout << "I am so sorry. I must ask a personal question from here." << endl;
    cout << "Are you single person or married person?(type 'a' if you are single / type 'b' if you are married): ";
    cin >> ask1;
    
    subtractedDataSingle = wage - exemption;
    
    switch (ask1) {
        case 'a':
            if (0 <= subtractedDataSingle && subtractedDataSingle <= 8925) {
            tax = (subtractedDataSingle * 0.1);
            }
            else if (8926 <= subtractedDataSingle && subtractedDataSingle  <= 36250) {
            tax = 892.5 + (subtractedDataSingle * 0.15);
            }
            else if (36251 <= subtractedDataSingle && subtractedDataSingle <= 87850) {
            tax = 4991.25 + (subtractedDataSingle * 0.25);
            }
            else if (87851 <= subtractedDataSingle) {
            tax = 17891.25 + (subtractedDataSingle * 0.28);
            }
            else {
            
            cout << endl;
            cout << "I am so sorry. I couldn't understand what you want to say." << endl;
            }
        break;
    }
    
    return 0;
}