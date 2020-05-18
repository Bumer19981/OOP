#include "functional_atd.h"
using namespace std;
namespace simple_langtypes {
    void functional::InData(ifstream& ifst) {
        string typification;
        ifst >> typification >> isLazyCalculations >> year;
        typification == "dinamic" ? this->typificationVar = dynamic : this->typificationVar = strict;
        langtype::InData(ifst);
    }
    bool functional::GetIsLazyCalculations()
    {
        return isLazyCalculations;
    }
    functional::typification functional::GetTypification()
    {
        return typificationVar;
    }
}