#include "langtype_atd.h"
#include "procedure_atd.h"
#include "objectoriented_atd.h"
#include "functional_atd.h"
#include <string>
using namespace std;
namespace simple_langtypes {
    Langtype* Langtype::In(ifstream& ifst) {
        Langtype* l;
        int k;
        string line;
        getline(ifst, line);
        int words = 0;
        string array[1];
        for (int i = 0; i < line.length(); ++i) {

            if (line[i] == ' ' && line[i + 1] != '\0') {
                words += 1;
            }
        }
        if (words > 0 || words < 0)
        {
            throw std::invalid_argument("Error: wrong amount of params in langtype object!");
        }
        words = 0;
        for (int i = 0; i < line.length(); ++i) {

            if (line[i] == ' ' && line[i + 1] != '\0') {
                words += 1;
                i += 1;
            }
            array[words] += line[i];
            if (line[i] == ' ') {
                throw std::invalid_argument("Error: additional space char in langtype object!");
            }
        }
        if (array[0] != "1" && array[0] != "2" && array[0] != "3") {
            throw std::invalid_argument("Error: unknown langtype!");
        }

        k = stoi(array[0]);;
        switch (k) {
        case 1:
            l = new Procedure;
            break;
        case 2:
            l = new Objectoriented;
            break;
        case 3:
            l = new Functional;
            break;
        default:
            return 0;
        }
        l->InData(ifst);
        return l;
    }
    int Langtype::GetYear()
    {
        return this->year;
    }
    int Langtype::GetMentions() {
        return mentions;
    }
}