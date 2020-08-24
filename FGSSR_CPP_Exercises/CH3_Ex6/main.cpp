/**
 * This is a program to compute the net monthly salary and the income level.
 * 
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com>
 * 
 */

// Question:
// Write an algorithm and a C++ program that accepts an employee salary,
// and a tax percentage then computes the monthly net salary and determine,
// his income level according to the incoming table:
// | Criteria     | ns>=5000 | 5000>ns>2000 | ns<2000 |
// | Income level | High     | Moderate     | low    |

#include <iostream>

using namespace std;

int main(){

    int salary, netSalary, tax;
    cout << "Enter the salary: ";
    cin >> salary;

    cout << "Enter Tax Percentage: ";
    cin >> tax;

    // Calculate Net Salary By Subtracting the Tax amount from Total Salary
    netSalary = salary - (salary / 100 * tax);

    cout << "Net Salary: " << netSalary << endl;

    if(netSalary >= 5000) {
        cout << "Income Level: High" << endl;
    } else if(netSalary >= 2000 && netSalary < 5000) {
        cout << "Income Level: Moderate" << endl;
    } else if(netSalary < 2000){
        cout << "Income Level: low" << endl;
    }

    return 0;
}

// Solution Algorithm:
/*
 
 Input Total Salary
 Input Tax Percentage
 
 Tax Amount = Total Salary / 100 * Tax
 Net Salary = Total Salary - Tax Amount
 
 Output "Net Salary"
 
 If (Net Salary Greater Than or Equal 5000)
 Then
 Output "Income Level High"
 
 Elese If (Net Salary Greater Than or Equal 2000 and Lower Than 5000)
 Then
 Output "Income Level Moderate"
 
 Else If (Net Salary Lower Than 2000)
 Then
 Output "Income Level low"
 End IF
*/