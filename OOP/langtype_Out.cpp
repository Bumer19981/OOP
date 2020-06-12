#include <fstream>
#include "langtype_atd.h"
using namespace std;
namespace simple_langtypes 
{
    void Langtype::Out(ofstream& ofst) 
    {
        ofst << "mentions = " << mentions;
    }
    void Langtype::SetMentions(int mentionsVar)
    {
        mentions = mentionsVar;
    }
    void Langtype::SetYear(int yearVar)
    {
        year = yearVar;
    }
}