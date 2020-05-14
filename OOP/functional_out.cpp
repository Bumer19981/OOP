#include "functional_atd.h"
using namespace std;
namespace simple_langtypes {
    void functional::Out(ofstream& ofst) {
        string typification = this->typification == strict ? "strict" : "dinamic";
        ofst << "It is a functional language: typification = " << typification
            << ", lazy calculations = " << isLazyCalculations << ", year = " << year << endl;
    }
}