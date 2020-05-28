#include <fstream>
#include "container_atd.h"
#include "langtype_atd.h"

using namespace std;
namespace simple_langtypes {
	void Container::Sort() {
		if (list.head == NULL)
		{
			throw std::invalid_argument("Error: list is empty!");
		}
		for (int i = 0; i < list.size - 1; i++) {
			for (int j = i + 1; j < list.size; j++) {
				Node* ComparableItem1 = new Node;
				Node* ComparableItem2 = new Node;
				for (int k = 0; k <= i; ++k) {
					if (k == 0) {
						ComparableItem1 = list.head;
					}
					else {
						ComparableItem1 = ComparableItem1->next;
					}
				}
				for (int k = 0; k <= j; ++k) {
					if (k == 0) {
						ComparableItem2 = list.head;
					}
					else {
						ComparableItem2 = ComparableItem2->next;
					}
				}
				if (ComparableItem1->l->Compare(*ComparableItem2->l)) {
					Node* tmp;
					tmp = ComparableItem2->next;
					ComparableItem2->next = ComparableItem1->next;
					ComparableItem2->next->prev = ComparableItem2;

					ComparableItem1->next = tmp;
					ComparableItem1->next->prev = ComparableItem1;

					tmp = ComparableItem1->prev;
					ComparableItem1->prev = ComparableItem2->prev;
					ComparableItem1->prev->next = ComparableItem1;

					ComparableItem2->prev = tmp;
					ComparableItem2->prev->next = ComparableItem2;
					if (list.head->l->Compare(*ComparableItem2->l))
						list.head = ComparableItem2;
				}
			}
		}
		for (int i = 0; i < list.size; ++i) {
			if (i == 0) {
				list.tail = list.head;
			}
			else {
				list.tail = list.tail->next;
			}
		}
	}
}