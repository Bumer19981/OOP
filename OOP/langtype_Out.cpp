#include <fstream>
#include "langtype_atd.h"
using namespace std;
namespace simple_langtypes {
    void langtype::Out(ofstream& ofst) {
        ofst << "mentions = " << mentions;
    }
}