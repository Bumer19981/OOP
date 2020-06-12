#include "container_atd.h"
namespace simple_langtypes 
{
    Container::Container() { }
    List::List() : head(NULL), tail(NULL), size(0) {}
    List::~List() 
    {
        while (size != 0)
        {
            Node* temp = head->next;
            delete head;
            head = temp;
            size--;
        }
    }
    void Container::Clear(List& list)
    {
        list.~List();
    }
}