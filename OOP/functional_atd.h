#ifndef __functional_atd__
#define __functional_atd__
#include "langtype_atd.h"
namespace simple_langtypes {
	class Functional : public Langtype {
		enum Typification {
			STRICT,
			DYNAMIC
		};
		Typification typificationVar;
		bool isLazyCalculations;
	public:
		void InData(ifstream& ifst);
		void Out(ofstream& ofst);

		bool GetIsLazyCalculations();
		Typification GetTypification();
		void SetTypification(string typification);
		void SetIsLazyCalculations(bool isLazyCalculationsVar);
		Functional() {}
	};
}
#endif