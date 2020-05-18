#include "objectoriented_atd.h"
using namespace std;
namespace simple_langtypes {
    void objectoriented::Out(ofstream& ofst) {
        string inheritance;
        if (this->inheritanceVar == once) {
            inheritance = "once";
        }
        else if (this->inheritanceVar == multiple) {
            inheritance = "multiple";
        }
        else {
            inheritance = "interface";
        }
        ofst << "It is an object-oriented language: inheritance = " << inheritance << ", year = " << year << endl;
        langtype::Out(ofst);
        ofst << endl;
    }
    void objectoriented::SetInheritance(string inheritanceVarVar)
    {
        if (inheritanceVarVar == "once") {
            inheritanceVar = once;
        }
        else if (inheritanceVarVar == "multiple")
        {
            inheritanceVar = multiple;
        }
        else
        {
            inheritanceVar = interface;
        }
    }
  /*  void objectoriented::SetYear(short int yearVar)
    {
        year = yearVar;
    }*/
}