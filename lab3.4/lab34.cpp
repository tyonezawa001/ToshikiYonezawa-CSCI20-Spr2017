/*
 *Updated by:Toshiki Yonezawa
 *Updated on:04/04/2017
 *This homework is asking about debugging, so I fixed the program, and then I submit it.
 *
 *Write a loan calculator program. 
 *The user borrows 'I' dollars at 'r'% interest (compounded monthly) and makes a payment of 'a' dollars at theend of each month. 
 *Your program should get all of this informationfrom the user as well as 'y', a number of years to simulate, and should return the balance left after 'y' years. 
 *
 *A typical run of the programmight look something like this: 
 *Enter the amount borrowed: 10000
 *Enter the monthly payment you'll make: 200Enter the annual interest rate: 7.5
 *Enter the number of years you want to simulate: 3
 *At the end of 3 years you owe 4468.19 dollars By running the program several times, you should be able to tell me approximately how long it'LL take to pay off your debt.
 *For those that are unfamiliar with annual rates compounded monthly, if 'r' is the given annual rate and we do monthly compounding, then each month's interest is computed at the rate 'r'/12.
 *Remember, if your balance owed at the beginning of the month is 'b' then your balance owedat the end of the month will 'b'(1 + ('r'/100)/12) minus the payment 'a' you make at the end of the month. 
 */
 
#include <iostream> 
using namespace std; 
int main(){
  
  double a, m, r, I;
  int y;   
  
  // Input amount, payment, interest rate, and number of years
  cout << "Enter the amount borrowed: ";
  cin >> a;
  cout << "Enter the monthly payment you'll make: ";
  cin >> m;
  cout << "Enter the annual interest rate: ";
  cin >> r;
  cout << "Enter the number of years you want to simulate: ";
  cin >> y;
  
  // convert interest rate from percent to fraction
  r = r/100;
  
  // iterate through each month
  for(int i = 0; i < (y*12); i++) {
    
    // calculate additional interest
    I = a*(r/12);
    
    // add interest and subtract payment from balance
    a = a + I - m;
  }
  
  // Print ending amount
  cout << "At the end of " << y << " years you owe " << a << " dollars" << endl;
   return 0;
}

/*
 *Enter the amount borrowed: 10000
 *Enter the monthly payment you'll make: 200
 *Enter the annual interest rate: 7.5
 *Enter the number of years you want to simulate: 3
 *At the end of 3 years you owe 4468.19 dollars.
 */