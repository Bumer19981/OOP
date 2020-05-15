#include "container_atd.h"
using namespace std;
namespace simple_langtypes {
    void container::Out(ofstream& ofst) {
        ofst << "Container contents " << list.size
            << " elements." << endl;
        Node* tempHead = list.Head;

        int temp = list.size;
        while (temp != 0) {
            langtype* l = tempHead->l;
            l->Out(ofst);
            ofst << "amount of years = "
                << l->AmountOfYears() << endl;
            tempHead = tempHead->Next;
            temp--;
        }
    }
}