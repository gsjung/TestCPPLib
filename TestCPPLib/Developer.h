//
//  Developer.h
//  TestCPPLib
//
//  Created by lesstif on 11. 4. 7..
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//
#include "Person.h"

class Developer : public Person
{
public:
    Developer(const char* name);
    
    virtual ~Developer();
    
    virtual void whoAmI();
    
    virtual void throwException();
        
private:
    
};