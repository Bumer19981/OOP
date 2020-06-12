#ifndef __container_atd__
#define __container_atd__
#include "list_atd.h"
namespace simple_langtypes
{
	class Container
	{
	public:
		List list;
		void In(ifstream& ifst);
		void Out(ofstream& ofst);
		void Clear(List& list);
		void Sort();
		void OutProcedure(ofstream& ofst);
		Container();
		~Container() { Clear(list); }
		void MultiMethod(ofstream& ofst);
	};
}
#endif