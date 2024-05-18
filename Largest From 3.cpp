#include <iostream>
using namespace std;

int main() {
    double num1, num2, num3;

    // Getting input from the user
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter third number: ";
    cin >> num3;

    // Finding the largest number 
    
    
    double largest = num1;//Assuming Number 1 As Largest
    
    
    
    if (num2 > largest) // Comparing Number 1(Largest) With Number 2
    
        largest = num2;// Setting Number 2 As largest If It Is Greater Than Number 1
        
    if (num3 > largest) // Comparing Number 1(Largest) With Number 3
    
        largest = num3;// Setting Number 2 As largest If It Is Greater Than Number 1 And Number 2
        
        

    // Displaying the result
    cout << "The largest number is: " << largest << endl;

    return 0;
}
