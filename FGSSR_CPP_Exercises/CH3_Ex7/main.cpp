/**
 * This is a program to compute the net Annual income based on Salary and Tax percentage.
 * 
 * Solution By: Abdelrahman Helaly <AH3laly@gmail.com>
 * 
 */

// Question:
// Write an algorithm and a C++ program that accepts an employee salary,
// and a tax percentage then computes the net annual income.

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

    // Output annual salary by multiplying NetSalary By 12 Months
    cout << "Annual Income: " << (netSalary * 12) << endl;

    return 0;
}

// Solution Algorithm:
/*
 
 Input Total Salary
 Input Tax Percentage
 
 Tax Amount = Total Salary / 100 * Tax
 Net Salary = Total Salary - Tax Amount
 
 Annual Salary = Net Salary * 12

 Output Annual Salary

*/