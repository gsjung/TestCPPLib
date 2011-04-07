#include <iostream>
#include <exception>

using namespace std;

class PersonException: public exception
{
    virtual const char* what();
} ;

class DeveloperException: public exception
{
    virtual const char* what() ;
} ;
