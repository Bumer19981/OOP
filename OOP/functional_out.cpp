#include "functional_atd.h"
using namespace std;
namespace simple_langtypes 
{
	void Functional::Out(ofstream& ofst) 
	{
		string typification = this->typificationVar == STRICT ? "strict" : "dinamic";
		ofst << "It is a functional language: typification = " << typification
			<< ", lazy calculations = " << isLazyCalculations << ", year = " << year << endl;
		Langtype::Out(ofst);
		ofst << endl;
	}
	void Functional::SetTypification(string typification)
	{
		typification == "dinamic" ? this->typificationVar = DYNAMIC : this->typificationVar = STRICT;
	}
	void Functional::SetIsLazyCalculations(bool isLazyCalculationsVar)
	{
		isLazyCalculations = isLazyCalculationsVar;
	}
}