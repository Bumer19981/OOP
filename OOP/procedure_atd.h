#ifndef __procedure_atd__
#define __procedure_atd__
#include "langtype_atd.h"
namespace simple_langtypes {
	class procedure : public langtype {
		bool isAbstract;
	public:
		void InData(ifstream& ifst);
		void Out(ofstream& ofst);
		void OutProcedure(ofstream& ofst);

		bool GetIsAbstract();
	/*	int GetYear();*/
		void SetIsAbstract(bool isAbstractVar);
		//void SetYear(short int yearVar);
		procedure() {}
	};
}
#endif