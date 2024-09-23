#include <iostream>
using namespace std;

extern int dollar;
extern int quarters;
extern int dime;
extern int nickels;
extern int pennies;
extern int purchase;
extern int change;
extern int rem;


int main()
{
    std::cout << " Enter the total purchase: " << "\n";
    std::cin >> purchase;

    dollar = 100;

    change = dollar - purchase;

    quarters = change / 25;
    rem = change % 25;

    dime = rem / 10;
    rem = rem % 10;

    nickels = rem / 5;
    rem = rem % 5;

    pennies = rem;


    std::cout << "Your change is : " << quarters << " quarters " << dime << " dime " << nickels << " nickels " << pennies << " pennies. ";

    



    
    
}


