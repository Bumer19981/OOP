#pragma once
#ifndef __langtype_atd__
#define __langtype_atd__
#include <fstream>
using namespace std;
namespace simple_langtypes {
	class Langtype {
		int mentions;
	protected:
		short int year;
	public:
		static Langtype* In(ifstream& ifst);
		virtual void InData(ifstream& ifst);
		virtual void Out(ofstream& ofst);
		virtual int AmountOfYears();
		bool Compare(Langtype& other);
		virtual void OutProcedure(ofstream& ofst);
		virtual void MultiMethod(Langtype* other, ofstream& ofst);
		virtual void MMProcedure(ofstream& ofst);
		virtual void MMObject(ofstream& ofst);
		virtual void MMFunctional(ofstream& ofst);
		virtual int GetYear();
		virtual int GetMentions();
		virtual void SetMentions(int mentionsVar);
		virtual void SetYear(int yyearVarear);
	};
}
#endif