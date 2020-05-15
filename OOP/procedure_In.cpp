#include "procedure_atd.h"
using namespace std;
namespace simple_langtypes {
    void procedure::InData(ifstream& ifst) {
        ifst >> isAbstract >> year;
        langtype::InData(ifst);
    }
}