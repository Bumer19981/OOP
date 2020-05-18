#include "langtype_atd.h"
#include "procedure_atd.h"
#include "objectoriented_atd.h"
#include "functional_atd.h"
using namespace std;
namespace simple_langtypes {
    langtype* langtype::In(ifstream& ifst) {
        langtype* l;
        int k;
        ifst >> k;
        switch (k) {
        case 1:
            l = new procedure;
            break;
        case 2:
            l = new objectoriented;
            break;
        case 3:
            l = new functional;
            break;
        default:
            return 0;
        }
        l->InData(ifst);
        return l;
    }
    int langtype::GetYear()
    {
        return this->year;
    }
    int langtype::GetMentions() {
        return mentions;
    }
}