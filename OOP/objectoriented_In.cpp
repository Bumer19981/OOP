#include "objectoriented_atd.h"
using namespace std;
namespace simple_langtypes {
	void objectoriented::InData(ifstream& ifst) {
		string inheritance;
		ifst >> inheritance >> year;
		if (inheritance == "once") {
			this->inheritanceVar = once;
		}
		else if (inheritance == "multiple")
		{
			this->inheritanceVar = multiple;
		}
		else
		{
			this->inheritanceVar = interface;
		}
		langtype::InData(ifst);
	}
	objectoriented::inheritance objectoriented::GetInheritance()
	{
		return inheritanceVar;
	}
}