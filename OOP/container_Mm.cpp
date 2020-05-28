#include "container_atd.h"
using namespace std;
namespace simple_langtypes {
    void container::MultiMethod(ofstream& ofst) {
        ofst << "Multimethod." << endl;
        Node* tempHead = list.Head;

        int temp = list.size;
        while (temp != 1) {
            langtype* l = tempHead->l;
            l->MultiMethod(tempHead->Next->l, ofst);
            l->Out(ofst);
            tempHead->Next->l->Out(ofst);
            tempHead = tempHead->Next;
            temp--;
        }
    }
}