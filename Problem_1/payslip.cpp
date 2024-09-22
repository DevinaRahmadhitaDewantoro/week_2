#include <iostream> // Include the iostream library for input and output

using namespace std;

int main() {
    // Declare variables for the payslip details
    string name;                
    int baseSalary;          
    int percentage;          
    int installment;            
    int insurance;              

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
    int grossSalary = baseSalary * (percentage / 100.0); // for the prompt that i will input will be equal or  
                                                         // more then 100% because gross salary is basically how much salary you actually get
                                                         // including bonuses or additional payments before taxes.
                                                         // so we can conclude that gross salary is greater then the base salary
                                                         
      

    // Prompt the user for installment and insurance amounts
    cout << "Installment = Rp ";
    cin >> installment;

    cout << "Insurance = Rp ";
    cin >> insurance;

    // Calculate the tax and net salary
    int tax = grossSalary * 0.2;                      // Calculate the tax amount (20%)
    int netSalary = grossSalary - tax - installment - insurance; // Calculate the net salary

    // Display the payslip in a simple format
    cout << "\nPayslip for Employee" << endl;
    cout << "---------------------" << endl;
    cout << "Name = " << name << endl;
    cout << "Gross Salary = Rp" << grossSalary << ",00" << endl;
    cout << "Tax (20%) = Rp" << tax << ",00" << endl;
    cout << "Installment = Rp" << installment << ",00" << endl;
    cout << "Insurance = Rp" << insurance << ",00" << endl;
    cout << "Net Salary = Rp" << netSalary << ",00" << endl;

    return 0;
}
