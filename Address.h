#pragma once
#define ADDRESS_H
#include <string>
using namespace std;

class Address
{
public:
    string addressLine, city, state;
    // Parameterized constructor for Address
    Address(const string& line, const string& c, const string& s);
};



