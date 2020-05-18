#include "langtype_atd.h"
using namespace std;
namespace simple_langtypes {
	bool langtype::Compare(langtype& other) {
        return AmountOfYears() < other.AmountOfYears();
    }}