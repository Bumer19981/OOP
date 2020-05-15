#include "container_atd.h"
namespace simple_langtypes {
    container::container() { }
    List::List() : Head(NULL), Tail(NULL), size(0) {}
    List::~List() {
        while (size != 0)
        {
            Node* temp = Head->Next;
            delete Head;
            Head = temp;
            size--;
        }
    }
    void container::Clear(List& list) {
        list.~List();
    }
}
