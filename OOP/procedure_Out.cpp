#include "procedure_atd.h"
using namespace std;
namespace simple_langtypes {
    void Procedure::Out(ofstream& ofst) {
        ofst << "It is a procedure language: is abstract = " << isAbstract
            << ", year = " << year << endl;
        Langtype::Out(ofst);
        ofst << endl;
    }
    void Procedure::SetIsAbstract(bool isAbstractVar)
    {
        isAbstract = isAbstractVar;
    }
}