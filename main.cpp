// main.cpp
#include<iostream>
using namespace std;
#include "Employee.h"

int main() 
{
    // Create an Address object
    Address empAddress("254 St 78", "Isb", "State");

    // Create an Employee object with the Address object
    Employee employee("Hafsa", "01-02-03", 58, &empAddress);

    // Display employee information
    employee.displayInfo();

    return 0;
}
