#ifndef __list_atd__
#define __list_atd__
#include "node_atd.h"
namespace simple_langtypes {
	class List
	{
	public:
		Node* Head;
		Node* Tail;
		int size;
		List();
		~List();
	};
}
#endif