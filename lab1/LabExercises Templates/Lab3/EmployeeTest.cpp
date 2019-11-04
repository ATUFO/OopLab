// Lab 3: EmployeeTest.cpp
// Create and manipulate two Employee objects.
#include <iostream>
using namespace std;

#include "Employee.h" // include definition of class Employee

// function main begins program execution
int main()
{
     /* Create two Employee objects and assign them to Employee variables. */
     Employee employee1("Bob", "Jones", 34500);   // create Employee object employee1
     Employee employee2("Susan", "Baker", 37800); // create Employee object employee2
     /* Output the first name, last name and salary for each Employee. */
     cout << "Employee 1: " << employee1.getFirstName() << " " << employee1.getLastName() << "; "
          << "Yearly Salary: " << employee1.getSalary() << endl;
     cout << "Employee 2: " << employee2.getFirstName() << " " << employee2.getLastName() << "; "
          << "Yearly Salary: " << employee2.getSalary() << endl;

     /* Give each Employee a 10% raise. */
     cout << "\nIncreasing employee salaries by 10%\n";
     employee1.setSalary(int(1.1 * employee1.getSalary())); // raise 10% of each employee
     employee2.setSalary(int(1.1 * employee2.getSalary()));
     /* Output the first name, last name and salary of each Employee again. */
     cout << "Employee 1: " << employee1.getFirstName() << " " << employee1.getLastName() << "; "
          << "Yearly Salary: " << employee1.getSalary() << endl;
     cout << "Employee 2: " << employee2.getFirstName() << " " << employee2.getLastName() << "; "
          << "Yearly Salary: " << employee2.getSalary() << endl;
} // end main
