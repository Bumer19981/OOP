#include "functional_atd.h"
using namespace std;
namespace simple_langtypes {
    void functional::InData(ifstream& ifst) {
        string typification;
        ifst >> typification >> isLazyCalculations >> year;
        typification == "dinamic" ? this->typification = dynamic : this->typification = strict;
    }
}