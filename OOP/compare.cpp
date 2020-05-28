#include "langtype_atd.h"
using namespace std;
namespace simple_langtypes {
    bool Langtype::Compare(Langtype& other) {
        return AmountOfYears() < other.AmountOfYears();
    }}