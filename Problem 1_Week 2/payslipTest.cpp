#include <iostream> // Include the iostream library for input and output

using namespace std;

// Function to test if the calculation passes
bool testpasses(string name, int baseSalary, int percentage, int installment, int insurance) {
    // Expected values
    string expectedName = "Itadori Yuji";
    int expectedGrossSalary = 8000000;  // 4000000 * (200 / 100.0)
    int expectedTax = 1600000;          // 8000000 * 0.2
    int expectedNetSalary = 5900000;    // 8000000 - 1600000 - 300000 - 200000
    int expectedInstallment = 300000;
    int expectedInsurance = 200000;

    // Calculate the actual gross salary, tax, and net salary
    int grossSalary = baseSalary * (percentage / 100.0);
    int tax = grossSalary * 0.2;
    int netSalary = grossSalary - tax - installment - insurance;

    // Compare actual values with expected values
    bool nameTest = (name == expectedName);
    bool grossSalaryTest = (grossSalary == expectedGrossSalary);
    bool taxTest = (tax == expectedTax);
    bool installmentTest = (installment == expectedInstallment);
    bool insuranceTest = (insurance == expectedInsurance);
    bool netSalaryTest = (netSalary == expectedNetSalary);

    // Return true if all tests pass, otherwise false
    return nameTest && grossSalaryTest && taxTest && installmentTest && insuranceTest && netSalaryTest;
}

int main() {
    
    string name = "Itadori Yuji";
    int baseSalary = 4000000;
    int percentage = 200;
    int installment = 300000;
    int insurance = 200000;

    // Check if the test passes using the predefined inputs
    if (testpasses(name, baseSalary, percentage, installment, insurance)) {
        cout << "Test passed!" << endl;
    } else {
        cout << "Test failed!" << endl;
    }

    // Calculate the gross salary from the percentage
    int grossSalary = baseSalary * (percentage / 100.0);

    // Calculate the tax and net salary
    int tax = grossSalary * 0.2;                      
    int netSalary = grossSalary - tax - installment - insurance; 
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
