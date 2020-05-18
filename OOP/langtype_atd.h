#pragma once
#ifndef __langtype_atd__
#define __langtype_atd__
#include <fstream>
using namespace std;
namespace simple_langtypes {
	class langtype {
		int mentions;
	protected:
		short int year;
	public:
		static langtype* In(ifstream& ifst);
		virtual void InData(ifstream& ifst);
		virtual void Out(ofstream& ofst);
		virtual int AmountOfYears();
		bool Compare(langtype& other);
		virtual void OutProcedure(ofstream& ofst);


		virtual int GetYear();
		virtual int GetMentions();
		virtual void SetMentions(int mentionsVar);
		virtual void SetYear(int yyearVarear);
	//protected:
	//	langtype() {};

	};
}
#endif