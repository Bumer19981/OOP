#include <fstream>
#include "container_atd.h"
#include "langtype_atd.h"

using namespace std;
namespace simple_langtypes {
	void container::Sort() {
		for (int i = 0; i < list.size - 1; i++) {
			for (int j = i + 1; j < list.size; j++) {
				Node* ComparableItem1 = new Node;
				Node* ComparableItem2 = new Node;
				for (int k = 0; k <= i; ++k) {
					if (k == 0) {
						ComparableItem1 = list.Head;
					}
					else {
						ComparableItem1 = ComparableItem1->Next;
					}
				}
				for (int k = 0; k <= j; ++k) {
					if (k == 0) {
						ComparableItem2 = list.Head;
					}
					else {
						ComparableItem2 = ComparableItem2->Next;
					}
				}
				if (ComparableItem1->l->Compare(*ComparableItem2->l)) {
					Node* tmp;
					tmp = ComparableItem2->Next;
					ComparableItem2->Next = ComparableItem1->Next;
					ComparableItem2->Next->Prev = ComparableItem2;

					ComparableItem1->Next = tmp;
					ComparableItem1->Next->Prev = ComparableItem1;

					tmp = ComparableItem1->Prev;
					ComparableItem1->Prev = ComparableItem2->Prev;
					ComparableItem1->Prev->Next = ComparableItem1;

					ComparableItem2->Prev = tmp;
					ComparableItem2->Prev->Next = ComparableItem2;
					if (list.Head->l->Compare(*ComparableItem2->l))
						list.Head = ComparableItem2;
				}
			}
		}
		for (int i = 0; i < list.size; ++i) {
			if (i == 0) {
				list.Tail = list.Head;
			}
			else {
				list.Tail = list.Tail->Next;
			}
		}
	}
}