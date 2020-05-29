#ifndef __procedure_atd__
#define __procedure_atd__
#include "langtype_atd.h"
namespace simple_langtypes {
	class Procedure : public Langtype {
		bool isAbstract;
	public:
		void InData(ifstream& ifst);
		void Out(ofstream& ofst);
		void OutProcedure(ofstream& ofst);

		void MultiMethod(Langtype* other, ofstream& ofst);
		void MMProcedure(ofstream& ofst);
		void MMObject(ofstream& ofst);
		void MMFunctional(ofstream& ofst);

		bool GetIsAbstract();
		void SetIsAbstract(bool isAbstractVar);
		Procedure() {}
	};
}
#endif