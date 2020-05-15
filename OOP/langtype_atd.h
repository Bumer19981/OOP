#pragma once
#ifndef __langtype_atd__
#define __langtype_atd__
#include <fstream>
using namespace std;
namespace simple_langtypes {
	class langtype {
		int mentions;
	public:
		static langtype* In(ifstream& ifst);
		virtual void InData(ifstream& ifst);
		virtual void Out(ofstream& ofst);
		virtual int AmountOfYears() = 0;
		bool Compare(langtype& other);
		virtual void OutProcedure(ofstream& ofst);
	protected:
		langtype() {};

	};
}
#endif