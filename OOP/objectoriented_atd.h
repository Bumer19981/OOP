#ifndef __objectoriented_atd__
#define __objectoriented_atd__
#include "langtype_atd.h"
namespace simple_langtypes {
	class objectoriented : public langtype {
		enum inheritance { once, multiple, interface } inheritanceVar;
	public:
		void InData(ifstream& ifst);
		void Out(ofstream& ofst);

		inheritance GetInheritance();
		//void SetYear(short int yearVar);
		void SetInheritance(string inheritanceVarVar);
		objectoriented() {}
	};
}
#endif