#ifndef __container_atd__
#define __container_atd__
#include "list_atd.h"
namespace simple_langtypes {
	class container
	{

	public:
		List list;
		void In(ifstream& ifst);
		void Out(ofstream& ofst);
		void Clear(List& list);
		void MultiMethod(ofstream& ofst);
		container();
		~container() { Clear(list); }
	};
}
#endif