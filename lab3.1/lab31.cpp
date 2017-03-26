/*Updated by: Toshiki Yonezawa
 *Updated by: 03/26/2017
 *This program works to create communication plan for one customer.
 *In the program, I put on some if/else statements and equations for fee calculation.
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int dumb = 0; // number of dumb phone
    int smart = 0; // number of smart phone
    int tablet = 0; // number of tablet
    string ask1; // variable for checking data plan
    double ask2; // variable for asking amount of data user needs.
    string ask3; // variable for asking customer information
    int totalDeviceFee = 0; // fee for total devices
    double totalDataFee = 0; // fee for total data fee
    double totalPlanFee = 0; // fee for total plan fee
    int totalDeviceNum = 0; // total number of devices
    
    cout << endl;
    cout << "Welcome to Toshiki's Cellphone Company!" << endl;
    cout << endl;
    cout << "Thank you for coming today!" << endl;
    cout << endl;
    cout << "The program will start asking some questions, and it creates a best communication plan for you!" << endl;
    cout << endl;
    cout << "Q1. In this company, we are dealing in dumb phone(free/each), smart phone($5/each) and tablet($10)." << endl;
    cout << "    How many devices you want to contract with our company? Please input a number for each devices." << endl;
    cout << endl;
    cout << "Dumb phone: ";
    cin >> dumb;
    cout << endl;
    cout << "Smart phone: ";
    cin >> smart;
    cout << endl;
    cout << "Tablet: ";
    cin >> tablet;
    cout << endl;
    
    totalDeviceFee = (dumb * 0) + (smart * 5) + (tablet * 10); // calculatioon for otal device fee
    
    cout << "Your total device fee will be $" << totalDeviceFee << endl;
    cout << "------------------------------------------------------" << endl;
    cout << endl;
    
    cout << "Now we offer 'Unlimited data' plan for our customers." << endl;
    cout << "In this plan, you will pay $75 for unlimited talk, text and data (up to 10 GB and $1.50 for each GB after that)." << endl;
    cout << endl;
    cout << "We also offer 'Monthly charge' plan for our customers." << endl;
    cout << "In the plan, your will pay $30 for unlimited talk and text, and also you need to pay per data charge." << endl;
    cout << "For the data charge, you will pay $5 for the first GB of data and $0.75 for each GB or portion there of up to 5 GB." << endl; 
    cout << "$1.50 for each GB or portion there of up to 15 GB.  $3 for each GB after that." << endl;
    cout << endl;
    cout << "Which paln you want to use for your devices?(monthly/unlimited): ";
    cin >> ask1;
    
    // the if statement separates monthly data cutomer and unlimited chagre customer.
    if (ask1 == "monthly") {
        
        cout << endl;
        cout << "Now you choose 'Monthly data($30)' plan." << endl;
        cout << "How much data(GB) amount you expect every month? Please input a number for your expectation." << endl;
        cout << "Amount of data(GB): ";
        cin >> ask2;
        
        // the if statement separates for information of monthly data plan.
        if (0 <= ask2 && ask2 <= 1) {
            
            totalDataFee = 30 + 5;
            
            cout << endl;
            cout << "Your total data fee will be $" << totalDataFee << "." <<endl;
            
        }
        
        else if (1 < ask2 && ask2 <= 5) {
            
            totalDataFee = 30 + 5 + ((ask2 - 1) * 0.75);
            
            cout << endl;
            cout << "Your total data fee will be $" << totalDataFee << "." << endl;
        }
        
        else if (5 < ask2 && ask2 <= 15) {
            
            totalDataFee = 30 + 5 + (5 * 0.75) + ((ask2 - 5) * 1.5);
               
            cout << endl;
            cout << "Your total data fee will be $" << totalDataFee << "." << endl;
        }
        
        else if (15 < ask2) {
            
            totalDataFee = 30 + 5 + (5 * 0.75) + (15 * 1.5) + ((ask2 - 15) * 3.0);
            
            cout << endl;
            cout << "Your total data fee will be $" << totalDataFee << "." << endl;
        }
    }
    
    else if (ask1 == "unlimited") {
        
        cout << "Now you choose 'Unlimited charge($75)' plan." << endl;
        cout << "How much data(GB) amount you expect every month? Please input a number for your expectation." << endl;
        cout << "Amount of data(GB): ";
        cin >> ask2;
        
        if (0 <= ask2 && ask2 <= 10) {
            
            totalDataFee = 75;
            
            cout << endl;
            cout << "Your total data fee will be $" << totalDataFee << "." << endl;
        }
        
        else if (10 < ask2) {
            
            totalDataFee = 75 + ((ask2 - 10) * 1.5);
            
            cout << endl;
            cout << "Your total data fee will be $" << totalDataFee << "." << endl;
        }
    }
    
    totalPlanFee = totalDeviceFee + totalDataFee; // clculation for finding total number of devices.
    
    cout << "Now your total plan fee will be $" << totalPlanFee << "." <<endl;
    cout << "------------------------------------------------------" << endl;
    cout << endl;
    
    cout << "We have two different types of discount." << endl;
    cout << "Corporate Discount – 10 percent discount for corporate customers" << endl;
    cout << "Family Plan Discount - $3 per phone line over 2" << endl;
    cout << "If you meet the standard of these, we will discount from your total plan fees." << endl;
    cout << endl;
    cout << "Are you corporate customer?(yes/no): "; 
    cin >> ask3;
    
    // the if statement exists for asking customer's information.
    if (ask3 == "yes") {
        
        cout << endl;
        cout << "Congratulation! you will get 10 percent discount from your total plan fees." << endl;
        
        totalPlanFee = (totalDeviceFee + totalDataFee) * 0.9;
        
        cout << endl;
        cout << "Now your total plan fee will be $" << totalPlanFee << endl;
        cout << "------------------------------------------------------" << endl;
        cout << endl;
    }
    
    else if (ask3 == "no") {
        
        cout << endl;
        cout << "Suddenly you don't meet the standard for the corporate discount." << endl;
        cout << endl;
    }
    
    totalDeviceNum = dumb + smart + tablet;
    
    cout << "Now you contract " << totalDeviceNum << " devices with our company." << endl;
    
    if (2 < totalDeviceNum) {
        
        cout << endl;
        cout << "Congratulation! you will get a discount for family Plan Discount." << endl;
        
        totalPlanFee = (totalDeviceFee + totalDataFee) - (totalDeviceNum * 3);
        
        cout << endl;
        cout << "Now your total Plan fee will be $" << totalPlanFee << endl;
        cout << "------------------------------------------------------" << endl;
        cout << endl;
        return 0;
    }
    
    else if (totalDeviceNum <= 2) {
        
        cout << endl;
        cout << "Suddenly you dont meet the standard for family Plan Discount." << endl;
        cout << endl;
    }
    
    cout << "Now your total Plan fee will be $" << totalPlanFee << endl;
    cout << endl;
    
    return 0;
}

/*
 *User #1:
 *2 smart phone
 *5 GB of data
 *If the user choose 'monthly charge' plan, total plan fee will be $48.
 *If user choose 'monthly charge' plan, total plan fee will be $85.
 *
 *User #2:
 *2 smart phone, 1 dumb phone, 1 tablet
 *15 GB of data
 *Corporate Discount
 *I think family plan discount automatically applys because the customer has over 2 devices.
 *If the user choose 'monthly charge' plan, total plan fee will be $61.75.
 *If user choose 'monthly charge' plan, total plan fee will be $90.5.
 *
 *USer #3:
 *1 dumb phone
 *0 GB data
 *If the user choose 'monthly charge' plan, total plan fee will be $35.
 *If user choose 'monthly charge' plan, total plan fee will be $75.
 */