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
    Person(const char* name);
    virtual ~Person();
    
    void whoAmI();
    
    void throwException();
    
    std::string& getName() { return name_;}
    
private:
    std::string name_;
    
};