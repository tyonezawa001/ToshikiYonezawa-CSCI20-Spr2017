/*
 *Updated by: Toshiki Yonezawa
 *Updated on: 03/28/2017
 *This program works as income tax calculator. 
 *The program can calculate a right tax value from input wage data, and then it compare between right tax value and withheld value.
 *If the program gets a negative value from the comparering, user must pay more tax.
 *If the program gets a positive velue from the comparering, user must get a refund.
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int exemption = 3900; // the personal exemption of $3,900.
    string name; // set variable for user name.
    double wage = 0; // set variable for user wage.
    double withheld = 0; // set variable for user withheld.
    char status; // set variable for asking user status.
    double agiSingle = 0; // set variable for single person's adjusted gross income.
    double agiMarried = 0; // set variable for married person's adjusted gross income.
    double tax = 0; // set variable for right tax value.
    double difference = 0; // set variable for difference between wirhheld and tax values.
    double positiveDifference = 0; // set variable for changing sign for difference velue
    
    // In here, the program asks infomration about input.
    cout << endl;
    cout << "Please input your information in here." << endl;
    cout << endl;
    cout << "Name(ex.Toshiki_Yonezawa): ";
    cin >> name; // variable for asking name.
    cout << "Wage(ex.10000): ";
    cin >> wage; // variable for asking wage.
    cout << "Withheld(ex.10000): ";
    cin >> withheld; // variable for asking withheld
    cout << endl;
    cout << "I am so sorry. I must ask a more personal question to you." << endl;
    cout << "Are you single person or married person?" << endl;
    cout << "Please input 's' if you are single person. Please input 'm' if you are married person." << endl;
    cout << "status: ";
    cin >> status; // variable for asking a status.
    
    switch (status) { // switch statment to separate three different situations. 
        case 's': // situation for single person.
        
            agiSingle = (wage - exemption); // calculate the adjusred Gross Income.
        
            if (0 <= agiSingle && agiSingle <= 8925) { // $0 <= agi <= $8,925.
                tax = (agiSingle * 0.1); // 10% of agi.
            }
            else if (8926 <= agiSingle && agiSingle <= 36250) { // $8,926 <= agi <= 36,250.
                tax = 892.50 + ((agiSingle - 8925) * 0.15); // $892.50 plus 15% of the excess over $8,925.
            }
            else if (36251 <= agiSingle && agiSingle <= 87850) { // $36,251 <= agi <= $87,850.
                tax = 4991.25 + ((agiSingle - 36250) * 0.25); // $4991.25 plus 25% of the excess over $36,250.
            }
            else if (87851 <= agiSingle) { // 87,851 <= adi.
                tax = 17891.25 + ((agiSingle - 87850) * 0.28); // $17,891.25 plus 28% of the excess over $87,850
            }
            
            // output for the program.
            cout << endl;
            cout << "Name: " << name << endl;
            cout << "Total Gross Adjusted Income: $" << agiSingle << "." << endl;
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
            break;
        case 'm': // situation for married person.
        
            agiMarried = (wage - (exemption * 2)); // we must subtruct 2 times exemption because the user is married person.
        
            if (0 <= agiMarried && agiMarried <= 17850) { // $0 <= agi <= $17,850.
                tax = (agiMarried * 0.1); // 10% of adj.
            }
            else if (17851 <= agiMarried && agiMarried <= 72500) { // $17,851 <= adj <= $72,500.
                tax = 1785 + ((agiMarried - 17850) * 0.15); // $1,785 plus 15% of the excess over $17,850.
            }
            else if (72501 <= agiMarried) { // $72,501 <= agi.
                tax = 9982.5 + ((agiMarried - 72500) * 0.28); // $9,982.50 plus 28% of the excess over $72,500.
            }
            
            // output for the program
            cout << endl;
            cout << "Name: " << name << endl;
            cout << "Total Gross Adjusted Income: $" << agiMarried << "." << endl;
            cout << "Total tax owed: $" << tax << "." << endl;
            
            difference = withheld - tax; // compare between wthheld and tax.
            
            if (difference > 0) { // when he difference is positive value, get a refund.
                
                cout << endl;
                cout << "Congratulstions! you will get a refund which is $" << difference << "." << endl;
                
            }
            else if (difference < 0) {// when the difference is negative value, must pay more tax.
                
                positiveDifference = (difference * -1); // the equation for changing sign.
                
                cout << endl;
                cout << "I am so sorry, but you must pay more tax which is $" << positiveDifference << "." <<endl;
                
            }
            else { // nothing happen when the difference is zero.
                
                cout << endl;
                cout << "You don't have to pay more tax, and you don't get a refund too." << endl;
                
            }
            break;
        default: // output without single person and married person.
            
            cout << endl;
            cout << "I am so sorry. I couldn't understand what you want to say." << endl;
            
            break;
    }
    
    return 0;
    
}

/*
 *Name: Joe Vandal
 *Total Gross Adjusted Income: $8200.
 *Must pay more tax which is $570.
 *
 *Name: Alfonso Haynes
 *Total Gross Adjusted Income: $24551.
 *Must get a refund which is $401.85.
 *
 *Name: Bridget Rowe
 *Total Gross Adjusted Income: $84329.
 *Must pay more tax which is $4954.
 *
 *Name: Wendy Joseph
 *Total Gross Adjusted Income: $65491.
 *Must pay more tax which is $1959.15.
 */