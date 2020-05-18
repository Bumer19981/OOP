#include "procedure_atd.h"
using namespace std;
namespace simple_langtypes {
    void procedure::Out(ofstream& ofst) {
        ofst << "It is a procedure language: is abstract = " << isAbstract
            << ", year = " << year << endl;
        langtype::Out(ofst);
        ofst << endl;
    }
    void procedure::SetIsAbstract(bool isAbstractVar)
    {
        isAbstract = isAbstractVar;
    }
 /*   void procedure::SetYear(short int yearVar)
    {
        year = yearVar;
    }*/
}