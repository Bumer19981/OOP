#include "functional_atd.h"
using namespace std;
namespace simple_langtypes {
	void functional::Out(ofstream& ofst) {
		string typification = this->typificationVar == strict ? "strict" : "dinamic";
		ofst << "It is a functional language: typification = " << typification
			<< ", lazy calculations = " << isLazyCalculations << ", year = " << year << endl;
		langtype::Out(ofst);
		ofst << endl;
	}
	void functional::SetTypification(string typification)
	{
		typification == "dinamic" ? this->typificationVar = dynamic : this->typificationVar = strict;
	}
	void functional::SetIsLazyCalculations(bool isLazyCalculationsVar)
	{
		isLazyCalculations = isLazyCalculationsVar;
	}
	//void functional::SetYear(short int yearVar)
	//{
	//	year = yearVar;
	//}
}