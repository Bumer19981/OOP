#include "container_atd.h"
using namespace std;
namespace simple_langtypes {
    void Container::MultiMethod(ofstream& ofst) {
        ofst << "Multimethod." << endl;
       // Node* tempHead = list.head;

       // int temp = list.size;

        for (int i = 1; i < list.size; i++) {
            Node* tempHead0 = list.head;
            int counter0 = 0;
            while (counter0 != i - 1) {
                tempHead0 = tempHead0->next;
                counter0 += 1;
            }
            for (int j = i + 1; j <= list.size; j++) {
                Node* tempHead1 = list.head;
                int counter1 = 0;
                while (counter1 != j - 1) {
                    tempHead1 = tempHead1->next;
                    counter1 += 1;
                }
                tempHead0->l->MultiMethod(tempHead1->l, ofst);
                tempHead0->l->Out(ofst);
                tempHead1->l->Out(ofst);
            }
        }
        //while (temp != 0) {
        //    Langtype* l = tempHead->l;
        //    l->MultiMethod(tempHead->next->l, ofst);
        //    l->Out(ofst);
        //    tempHead->next->l->Out(ofst);
        //    tempHead = tempHead->next;
        //    temp--;
        //}
    }
}