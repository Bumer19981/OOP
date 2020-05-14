#ifndef __objectoriented_atd__
#define __objectoriented_atd__
#include "langtype_atd.h"
namespace simple_langtypes {
	class objectoriented : public langtype {
		short int year;
		enum inheritance { once, multiple, interface } inheritance;
	public:
		void InData(ifstream& ifst);
		void Out(ofstream& ofst);
		objectoriented() {}
	};
}
#endif