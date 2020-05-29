#include "container_atd.h"
using namespace std;
namespace simple_langtypes {
    void Container::MultiMethod(ofstream& ofst) {
        ofst << "Multimethod." << endl;
        Node* tempHead = list.head;

        int temp = list.size;
        while (temp != 1) {
            Langtype* l = tempHead->l;
            l->MultiMethod(tempHead->next->l, ofst);
            l->Out(ofst);
            tempHead->next->l->Out(ofst);
            tempHead = tempHead->next;
            temp--;
        }
    }
}