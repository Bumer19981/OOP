#ifndef __functional_atd__
#define __functional_atd__
#include "langtype_atd.h"
namespace simple_langtypes {
	class functional : public langtype {
		enum typification { strict, dynamic } typificationVar;
		bool isLazyCalculations;
	public:
		void InData(ifstream& ifst);
		void Out(ofstream& ofst);

		bool GetIsLazyCalculations();
		typification GetTypification();
		void SetTypification(string typification);
		void SetIsLazyCalculations(bool isLazyCalculationsVar);
		//void SetYear(short int yearVar);
		functional() {}
	};
}
#endif