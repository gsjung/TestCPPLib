//
//  Person.h
//  TestCPPLib
//
//  Created by lesstif on 11. 4. 7..
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//
#include <string>

class Person {
public:
    
    Person();
    
    Person(const char* name);
    virtual ~Person();
    
    virtual void whoAmI();
    
    virtual void throwException();
    
    std::string& getName() { return name_;}
    
protected:
    std::string name_;
    
};