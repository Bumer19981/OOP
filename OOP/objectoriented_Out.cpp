#include "objectoriented_atd.h"
using namespace std;
namespace simple_langtypes 
{
    void Objectoriented::Out(ofstream& ofst) 
    {
        string inheritance;
        if (this->inheritanceVar == ONCE) 
        {
            inheritance = "once";
        }
        else if (this->inheritanceVar == MULTIPLE) 
        {
            inheritance = "multiple";
        }
        else 
        {
            inheritance = "interface";
        }
        ofst << "It is an object-oriented language: inheritance = " << inheritance << ", year = " << year << endl;
        Langtype::Out(ofst);
        ofst << endl;
    }
    void Objectoriented::SetInheritance(string inheritanceVarVar)
    {
        if (inheritanceVarVar == "once") 
        {
            inheritanceVar = ONCE;
        }
        else if (inheritanceVarVar == "multiple")
        {
            inheritanceVar = MULTIPLE;
        }
        else
        {
            inheritanceVar = INTERFACE;
        }
    }
}