#include "procedure_atd.h"
using namespace std;
namespace simple_langtypes {
    void procedure::OutProcedure(ofstream& ofst) {
        Out(ofst);
        ofst << "amount of years = "
            << AmountOfYears() << endl;
    }
}