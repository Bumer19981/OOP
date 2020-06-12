#include "procedure_atd.h"
using namespace std;
namespace simple_langtypes 
{
    void Procedure::MultiMethod(Langtype* other,
        ofstream& ofst) 
    {
        other->MMProcedure(ofst);
    }
}