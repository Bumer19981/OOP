#include "objectoriented_atd.h"
using namespace std;
namespace simple_langtypes {
	void objectoriented::InData(ifstream& ifst) {
		string inheritance;
		ifst >> inheritance >> year;
		if (inheritance == "once") {
			this->inheritance = once;
		}
		else if (inheritance == "multiple")
		{
			this->inheritance = multiple;
		}
		else
		{
			this->inheritance = interface;
		}
		langtype::InData(ifst);
	}
}