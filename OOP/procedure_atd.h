#ifndef __procedure_atd__
#define __procedure_atd__
#include "langtype_atd.h"
namespace simple_langtypes {
	class procedure : public langtype {
		bool isAbstract;
		short int year;
	public:
		void InData(ifstream& ifst);
		void Out(ofstream& ofst);
		int AmountOfYears();
		void OutProcedure(ofstream& ofst);
		procedure() {}
	};
}
#endif