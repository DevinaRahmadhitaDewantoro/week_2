#include <iostream>    
#include <cmath>

using namespace std;

int main(){

// declare variables for coefficients of a, b, and c 
double a, b, c;

// prompt user to enter the coefficients 

cout << "Enter the coefficient a: ";
cin >> a;

cout << "Enter the coefficient b: ";
cin >> b;

cout << "Enter the coefficient c: ";
cin >> c;

// Calculate the discriminant 

double discriminant = b * b - 4 * a * c;

// check the value of the discriminant and calculate thr roots accordingly
if (discriminant > 0 ) {
    //two distinct real root
    double x1 = (-b + sqrt(discriminant)) / (2 * a);
    double x2 = (-b - sqrt(discriminant)) / (2 * a); 
    cout << "\ndiscriminant = " << discriminant << " (positive) " << endl;
    cout << "\nThe equation has two distinct real roots: " << endl;
    cout << "x1 = " << x1 << endl;
    cout << "x2 = " << x2 << endl;
} else if (discriminant == 0){
    // one real root
    double x = -b / (2 *a);
    cout << "\ndiscriminant = " << discriminant;
    cout << "\nThe equation has exactly one real root: " << endl;
    cout << "x = " << x << endl;
} else {
    // complex roots
    double realPart = -b / (2 * a);
    double imaginaryPart = sqrt(-discriminant) / (2 * a);
    cout << "\ndiscriminant = " << discriminant << " (negative) " << endl;
    cout << "\nThe equation has no real roots (complex roots): " << endl;
    cout << "x1 = " << realPart << " + " << imaginaryPart << "i" << endl;
    cout << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
}



   return 0; 

}