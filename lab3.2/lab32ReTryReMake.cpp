#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int exemption = 3900; // the personal exemption of $3,900.
    string name; // set variable for user name.
    double wage = 0; // set variable for user wage.
    double withheld = 0; // set variable for user withheld.
    char status; // set variable for asking user status.
    double agi = 0; // set variable for single person's adjusted gross income.
    double tax = 0; // set variable for right tax value.
    double difference = 0; // set variable for difference between wirhheld and tax values.
    double positiveDifference = 0; // set variable for changing sign for difference velue
    
    // In here, the program asks infomration about input.
    cout << endl;
    cout << "Please input your information in here." << endl;
    cout << endl;
    cout << "Name(ex.Toshiki_Yonezawa): ";
    cin >> name; // variable for asking name.
    cout << "Wage(ex.$10000): $";
    cin >> wage; // variable for asking wage.
    cout << "Withheld(ex.$10000): $";
    cin >> withheld; // variable for asking withheld
    cout << endl;
    cout << "I am so sorry. I must ask a more personal question to you." << endl;
    cout << "Are you single person or married person?" << endl;
    cout << "Please input 's' if you are single person. Please input 'm' if you are married person." << endl;
    cout << "status: ";
    cin >> status; // variable for asking a status.
    
    switch (status) { // switch statment to separate three different situations. 
        case 's': // situation for single person.
        
            agi = (wage - exemption); // calculate the adjusred Gross Income.
        
            if (0 <= agi && agi <= 8925) { // $0 <= agi <= $8,925.
                tax = (agi * 0.1); // 10% of agi.
            }
            else if (8926 <= agi && agi <= 36250) { // $8,926 <= agi <= 36,250.
                tax = 892.50 + ((agi - 8925) * 0.15); // $892.50 plus 15% of the excess over $8,925.
            }
            else if (36251 <= agi && agi <= 87850) { // $36,251 <= agi <= $87,850.
                tax = 4991.25 + ((agi - 36250) * 0.25); // $4991.25 plus 25% of the excess over $36,250.
            }
            else if (87851 <= agi) { // 87,851 <= adi.
                tax = 17891.25 + ((agi - 87850) * 0.28); // $17,891.25 plus 28% of the excess over $87,850
            }
            break;
        case 'm': // situation for married person.
        
            agi = (wage - (exemption * 2)); // we must subtruct 2 times exemption because the user is married person.
        
            if (0 <= agi && agi <= 17850) { // $0 <= agi <= $17,850.
                tax = (agi * 0.1); // 10% of adj.
            }
            else if (17851 <= agi && agi <= 72500) { // $17,851 <= adj <= $72,500.
                tax = 1785 + ((agi - 17850) * 0.15); // $1,785 plus 15% of the excess over $17,850.
            }
            else if (72501 <= agi) { // $72,501 <= agi.
                tax = 9982.5 + ((agi - 72500) * 0.28); // $9,982.50 plus 28% of the excess over $72,500.
            }
            break;
        default: // output without single person and married person.
            
            cout << endl;
            cout << "I am so sorry. I couldn't understand what you want to say." << endl;
            
            break;
    }
    
    // output for the program.
    cout << endl;
    cout << "Name: " << name << endl;
    cout << "Total Gross Adjusted Income: $" << agi << "." << endl;
    cout << "Total tax owed: $" << tax << "." << endl;
            
    difference = withheld - tax; // compare between withheld and tax.
            
    if (difference > 0) { // get a refund when difference is positive value. 
                
    cout << endl;
    cout << "Congratulstions! you will get a refund which is $" << difference << "." << endl;
                
    }
    else if (difference < 0) { // must pay more tax when difference is negatie value.
                
    positiveDifference = (difference * -1); // change a sign for output.
                
    cout << endl;
    cout << "I am so sorry, but you must pay more tax which is $" << positiveDifference << "." <<endl;
                
    }
    else { // dothing happen when the difference is zero.
                
    cout << endl;
    cout << "You don't have to pay more tax, and you don't get a refund too." << endl;
                
    }
    
    return 0;
    
}