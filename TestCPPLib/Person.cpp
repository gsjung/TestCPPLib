//
//  Person.cpp
//  TestCPPLib
//
//  Created by lesstif on 11. 4. 7..
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//
#include <iostream>

#include "Person.h"

#include "MyException.h"

using namespace std;

Person::Person(const char* name)
{
    cout << "Person Created" << endl;
    this->name_ = name;
}

Person::~Person()
{
    cout << "Person Destructed" << endl;
}

void Person::whoAmI()
{
    cout << "I'm Person" << endl;
}

void Person::throwException()
{
    throw PersonException();
}

