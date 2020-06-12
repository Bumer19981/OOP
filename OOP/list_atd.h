#ifndef __list_atd__
#define __list_atd__
#include "node_atd.h"
namespace simple_langtypes 
{
	class List
	{
	public:
		Node* head;
		Node* tail;
		int size;
		List();
		~List();
	};
}
#endif