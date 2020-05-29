#include "functional_atd.h"
using namespace std;
namespace simple_langtypes {
    void Functional::MultiMethod(Langtype* other,
        ofstream& ofst) {
        other->MMFunctional(ofst);
    }}