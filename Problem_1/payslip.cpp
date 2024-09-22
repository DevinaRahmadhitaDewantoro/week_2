#include <iostream>
#include <fstream> // Include the fstream library for file output
#include <string>

using namespace std;

int main() {
    // Declare variables for the payslip details
    string name;                
    int baseSalary;          
    int percentage;          
    int installment;            
    int insurance;              

    // Open a file to write the payslip
    ofstream outFile("test.txt");

    // Check if the file is opened successfully
    if (!outFile) {
        cerr << "Error opening file!" << endl;
        return 1; // Exit the program if the file cannot be opened
    }

    // Prompt the user to enter the employee's details
    cout << "Payslip for Employee" << endl;
    cout << "---------------------" << endl;
    cout << "Name: ";
    cin.ignore();               // Ignore any previous newline characters
    getline(cin, name);         // Get the employee's name including spaces

    // Prompt for the base salary and percentage to calculate the gross salary
    cout << "Base Salary = Rp ";
    cin >> baseSalary;

    cout << "Percentage (in %) to calculate Gross Salary: ";
    cin >> percentage;

    // Calculate the gross salary from the percentage
    int grossSalary = baseSalary * (percentage / 100.0);

    // Prompt the user for installment and insurance amounts
    cout << "Installment = Rp ";
    cin >> installment;

    cout << "Insurance = Rp ";
    cin >> insurance;

    // Calculate the tax and net salary
    int tax = grossSalary * 0.2;                      
    int netSalary = grossSalary - tax - installment - insurance; 

    // Write the payslip to the file
    outFile << "\nPayslip for Employee" << endl;
    outFile << "---------------------" << endl;
    outFile << "Name:  " << name << endl; // Maintain the format with space after "Name:"
    outFile << "Gross Salary = Rp" << grossSalary << ",00" << endl;
    outFile << "Tax (20%) = Rp" << tax << ",00" << endl;
    outFile << "Installment = Rp" << installment << ",00" << endl;
    outFile << "Insurance = Rp" << insurance << ",00" << endl;
    outFile << "Net Salary = Rp" << netSalary << ",00" << endl;

    // Close the file
    outFile.close();
    cout << "Payslip written to test.txt" << endl;

    return 0;
}
