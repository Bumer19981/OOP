#include "procedure_atd.h"
using namespace std;
namespace simple_langtypes {
    void procedure::MultiMethod(langtype* other,
        ofstream& ofst) {
        other->MMProcedure(ofst);
    }
}