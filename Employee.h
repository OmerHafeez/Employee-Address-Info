#pragma once
#define EMPLOYEE_H
#include "Address.h"
#include<iostream>
#include <string>
using namespace std;
class Employee
{
private:
    Address* address;
public:
    string name, dob;
    int empNo;
    // Parameterized constructor for Employee
    Employee(const string& n, const string& d, int emp, Address* addr);
    // Member function
    void displayInfo();
};

