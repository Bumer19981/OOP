#include "procedure_atd.h"
using namespace std;
namespace simple_langtypes {
    void procedure::InData(ifstream& ifst) {
        ifst >> isAbstract >> year;
        langtype::InData(ifst);
    }
    bool procedure::GetIsAbstract()
    {
        return isAbstract;
    }
    //int procedure::GetYear()
    //{
    //    return year;
    //}
}