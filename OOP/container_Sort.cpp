#include <fstream>
#include "container_atd.h"
#include "langtype_atd.h"

using namespace std;
namespace simple_langtypes 
{
	void Container::Sort() 
	{
		if (list.head == NULL)
		{
			throw std::invalid_argument("Error: list is empty!");
		}
		for (int i = 0; i < list.size - 1; i++) 
		{
			for (int j = i + 1; j < list.size; j++) 
			{
				Node* comparableItem1 = new Node;
				Node* comparableItem2 = new Node;
				for (int k = 0; k <= i; ++k) 
				{
					if (k == 0) 
					{
						comparableItem1 = list.head;
					}
					else 
					{
						comparableItem1 = comparableItem1->next;
					}
				}
				for (int k = 0; k <= j; ++k) 
				{
					if (k == 0) 
					{
						comparableItem2 = list.head;
					}
					else 
					{
						comparableItem2 = comparableItem2->next;
					}
				}
				if (comparableItem1->l->Compare(*comparableItem2->l)) 
				{
					Node* tmp;
					tmp = comparableItem2->next;
					comparableItem2->next = comparableItem1->next;
					comparableItem2->next->prev = comparableItem2;

					comparableItem1->next = tmp;
					comparableItem1->next->prev = comparableItem1;

					tmp = comparableItem1->prev;
					comparableItem1->prev = comparableItem2->prev;
					comparableItem1->prev->next = comparableItem1;

					comparableItem2->prev = tmp;
					comparableItem2->prev->next = comparableItem2;
					if (list.head->l->Compare(*comparableItem2->l))
						list.head = comparableItem2;
				}
			}
		}
		for (int i = 0; i < list.size; ++i) 
		{
			if (i == 0) 
			{
				list.tail = list.head;
			}
			else 
			{
				list.tail = list.tail->next;
			}
		}
	}
}