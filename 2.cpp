//Write a C++ program using class to calculate simple interest amount. (Use parameterized
//constructor with default value for rate)


#include<iostream>
using namespace std;
 
// Driver code
int main()
{
    // We can change values here for
    // different inputs
    float P = 1, R = 1, T = 1;
 
    // Calculate simple interest 
    float SI = (P * T * R) / 100;
 
    // Print the resultant value of SI 
    cout << "Simple Interest = " << SI;
 
    return 0;
}