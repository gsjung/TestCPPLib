#include "Developer.h"

#include <iostream>

#include "MyException.h"

using namespace std;

Developer::Developer(const char* name)
{
    cout << "Developer Created" << endl;
    
}

Developer::~Developer()
{
    cout << "Developer Destructed" << endl;
}

void Developer::whoAmI()
{
    cout << "I'm Developer" << endl;
}

void Developer::throwException()
{
    throw DeveloperException();
}

