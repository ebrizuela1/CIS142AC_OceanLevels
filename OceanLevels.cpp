#include <iostream>
using namespace std;

int main () {
    // establish variables
    double years, growth;

    // Ask user question regarding ocean growth in x years
    cout << "Enter the number of years for which you'd like to calculate the rise in sea level. ";
    cin >> years;

    // Do math
    growth = years * 1.5;

    //output rise in sea level
    cout << "The sea level will be " << growth << "mm higher than the current sea level in " << years << "years";

    return 0;
}
