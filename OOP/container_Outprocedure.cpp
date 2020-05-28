#include "container_atd.h"
using namespace std;
namespace simple_langtypes {
	void Container::OutProcedure(ofstream& ofst) {
		ofst << "Only procedure." << endl;
		Node* node = list.head;
		for (int i = 0; i < list.size; i++) {
			ofst << i << ": ";
			node->l->OutProcedure(ofst);
			node = node->next;
		}
	}
}