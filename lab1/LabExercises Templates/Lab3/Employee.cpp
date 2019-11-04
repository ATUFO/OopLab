// Lab 3: Employee.cpp
// Employee class member-function definitions.
#include <iostream>
using namespace std;

#include "Employee.h" // Employee class definition

/* Define the constructor. Assign each parameter value to the appropriate data
   member. Write code that validates the value of salary to ensure that it is
   not negative. */
Employee::Employee(string fstName, string lstName, int sal) : firstName(fstName),
                                                              lastName(lstName)
{
    setSalary(sal); // use set funtion to store salary
}
/* Define a set function for the first name data member. */
void Employee::setFirstName(string name)
{
    firstName = name; //store firstName
}
/* Define a get function for the first name data member. */
string Employee::getFirstName()
{
    return firstName;
}
/* Define a set function for the last name data member. */
void Employee::setLastName(string name)
{
    lastName = name; // store lastName
}
/* Define a get function for the last name data member. */
string Employee::getLastName()
{
    return lastName;
}
/* Define a set function for the monthly salary data member. Write code
   that validates the salary to ensure that it is not negative. */
void Employee::setSalary(int amount)
{
    if (amount < 0)
    {
        cout << "Salary must greater than 0"; // display a error message
        salary = 0;                           // and set salary to zero
    }
    else
        salary = amount;
}
/* Define a get function for the monthly salary data member. */
int Employee::getSalary()
{
    return salary;
}