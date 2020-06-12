#ifndef __functional_atd__
#define __functional_atd__
#include "langtype_atd.h"
namespace simple_langtypes 
{
	class Functional : public Langtype 
	{
		enum Typification 
		{
			STRICT,
			DYNAMIC
		};
		Typification typificationVar;
		bool isLazyCalculations;
	public:
		void InData(ifstream& ifst);
		void Out(ofstream& ofst);
		void MultiMethod(Langtype* other, ofstream& ofst);
		void MMProcedure(ofstream& ofst);
		void MMObject(ofstream& ofst);
		void MMFunctional(ofstream& ofst);
		bool GetIsLazyCalculations();
		Typification GetTypification();
		void SetTypification(string typification);
		void SetIsLazyCalculations(bool isLazyCalculationsVar);
		Functional() {}
	};
}
#endif