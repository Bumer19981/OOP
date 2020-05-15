#include <fstream>
#include "langtype_atd.h"
using namespace std;
namespace simple_langtypes {
    void langtype::InData(ifstream& ifst) {
        ifst >> mentions;
    }}