#include <fstream>
#include "langtype_atd.h"
using namespace std;
namespace simple_langtypes {
    void langtype::Out(ofstream& ofst) {
        ofst << "mentions = " << mentions;
    }
    void langtype::SetMentions(int mentionsVar)
    {
        mentions = mentionsVar;
    }
    void langtype::SetYear(int yearVar)
    {
        year = yearVar;
    }
}