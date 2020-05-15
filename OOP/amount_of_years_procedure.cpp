#include <fstream>
#include "procedure_atd.h"
#include <string.h>
#include <ctime>
using namespace std;
namespace simple_langtypes {
	int procedure::AmountOfYears()
	{
		time_t now = time(0);
		struct tm ltm;
		localtime_s(&ltm, &now);
		int yearNow = 1900 + ltm.tm_year;
		return (yearNow - this->year);
	}
}