#ifndef __functional_atd__
#define __functional_atd__
#include "langtype_atd.h"
namespace simple_langtypes {
	class functional : public langtype {
		short int year;
		enum typification { strict, dynamic } typification;
		bool isLazyCalculations;
	public:
		void InData(ifstream& ifst);
		void Out(ofstream& ofst);
		functional() {}
	};
}
#endif