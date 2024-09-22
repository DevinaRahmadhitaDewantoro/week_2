#include <iostream>    
#include <cmath>
#include <fstream> // Include the fstream library to handle file output

using namespace std;

int main(){

    // Declare variables for coefficients of a, b, and c 
    double a, b, c;

    // Prompt user to enter the coefficients 
    cout << "Enter the coefficient a: ";
    cin >> a;

    cout << "Enter the coefficient b: ";
    cin >> b;

    cout << "Enter the coefficient c: ";
    cin >> c;

    // Calculate the discriminant 
    double discriminant = b * b - 4 * a * c;

    // Open a file to write the results
    ofstream outFile("test.txt");

    if (!outFile) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    // Check the value of the discriminant and calculate the roots accordingly
    if (discriminant > 0 ) {
        // Two distinct real roots
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a); 

        outFile << "discriminant = " << discriminant << " (positive)" << endl;
        outFile << "The equation has two distinct real roots:" << endl;
        outFile << "x1 = " << x1 << endl;
        outFile << "x2 = " << x2 << endl;
    } else if (discriminant == 0){
        // One real root
        double x = -b / (2 *a);

        outFile << "discriminant = " << discriminant << " (zero)" << endl;
        outFile << "The equation has exactly one real root:" << endl;
        outFile << "x = " << x << endl;
    } else {
        // Complex roots
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);

        outFile << "discriminant = " << discriminant << " (negative)" << endl;
        outFile << "The equation has no real roots (complex roots):" << endl;
        outFile << "x1 = " << realPart << " + " << imaginaryPart << "i" << endl;
        outFile << "x2 = " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    // Close the file
    outFile.close();
    cout << "Results written to test.txt" << endl;

    return 0; 
}
