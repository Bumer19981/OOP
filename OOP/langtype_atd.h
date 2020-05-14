#pragma once
#ifndef __langtype_atd__
#define __langtype_atd__
#include <fstream>
using namespace std;
namespace simple_langtypes {
	class langtype {
	public:
		static langtype* In(ifstream& ifst);
		virtual void InData(ifstream& ifst) = 0;
		virtual void Out(ofstream& ofst) = 0;
	};
}
#endif