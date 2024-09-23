#include <iostream>    
#include <cmath>

using namespace std;

int main(){

    
    double a = 1, b = 1, c = 1;  
    cout << "Coefficients are set as a = " << a << ", b = " << b << ", c = " << c << endl;
    double discriminant = b * b - 4 * a * c;
    
    
    bool testPassed = false;

    
    if (discriminant > 0 ) {
        
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a); 
        cout << "\nDiscriminant = " << discriminant << " (positive) " << endl;
        cout << "\nThe equation has two distinct real roots: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
        
        
        testPassed = (discriminant > 0);
    } 
    else if (discriminant == 0){
        
        double x = -b / (2 * a);
        cout << "\nDiscriminant = " << discriminant;
        cout << "\nThe equation has exactly one real root: " << endl;
        cout << "x = " << x << endl;

        
        testPassed = (discriminant == 0);
    } 
    else {
       
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);
        cout << "\nDiscriminant = " << discriminant << " (negative) " << endl;
        cout << "\nThe equation has no real roots (complex roots): " << endl;
        cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;

        
        testPassed = (discriminant < 0);
    }
    if (testPassed) {
        cout << "\nTest Passed: The discriminant matches the expected condition." << endl;
    } else {
        cout << "\nTest Failed: The discriminant did not match the expected condition." << endl;
    }

    return 0; 
}
