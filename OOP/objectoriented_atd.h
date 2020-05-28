#ifndef __objectoriented_atd__
#define __objectoriented_atd__
#include "langtype_atd.h"
namespace simple_langtypes {
	class Objectoriented : public Langtype {
		enum Inheritance {
			ONCE,
			MULTIPLE,
			INTERFACE
		};
		Inheritance inheritanceVar;
	public:
		void InData(ifstream& ifst);
		void Out(ofstream& ofst);
		Inheritance GetInheritance();
		void SetInheritance(string inheritanceVarVar);
		Objectoriented() {}
	};
}
#endif