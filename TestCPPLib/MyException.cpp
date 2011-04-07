#include "MyException.h"

using namespace std;

const char* PersonException::what()     
{       
    return "PersonException happened";    
}

const char* DeveloperException::what()     
{       
    return "DeveloperException happened";    
}
