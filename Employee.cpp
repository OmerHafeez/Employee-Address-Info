#include "Employee.h"
#include <iostream>
using namespace std;

Employee::Employee(const string& n, const string& d, int emp, Address* addr)
    : name(n), dob(d), empNo(emp), address(addr) {}

void Employee::displayInfo() {
    cout << "Employee Information:"<<endl;
    cout << "Name: " << name << endl;
    cout << "DOB: " << dob << endl;
    cout << "Emp No: " << empNo << endl;
    cout << "Address: " << address->addressLine << " , " << address->city << ", " << address->state << endl;;
}
