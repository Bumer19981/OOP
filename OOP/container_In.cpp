#include "container_atd.h"
using namespace std;
namespace simple_langtypes 
{
    void Container::In(ifstream& ifst)
    {
        if (!ifst.is_open())
        {
            throw std::invalid_argument("Error reading file!");
        }
        while (!ifst.eof()) 
        {
            Langtype* l;
            if ((l = Langtype::In(ifst)) != 0) 
            {
                list.size++;
                Node* temp = new Node;
                temp->next = list.head;
                temp->prev = list.tail;
                temp->l = l;
                if (list.head != NULL)
                {
                    list.tail->next = temp;
                    list.tail = temp;
                    list.head->prev = list.tail;
                }
                else list.head = list.tail = temp;
            }
        }
    }
}