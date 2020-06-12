#include <fstream>
#include "langtype_atd.h"
#include <string>
using namespace std;
namespace simple_langtypes 
{
    void Langtype::InData(ifstream& ifst) 
    {
        string line;
        getline(ifst, line);
        int words = 0;
        string array1[1];
        for (int i = 0; i < line.length(); ++i) 
        {

            if (line[i] == ' ' && line[i + 1] != '\0') 
            {
                words += 1;
            }
        }
        if (words > 0 || words < 0)
        {
            throw std::invalid_argument("Error: wrong amount of params in langtype mentions!");
        }
        words = 0;
        for (int i = 0; i < line.length(); ++i) 
        {

            if (line[i] == ' ' && line[i + 1] != '\0') 
            {
                words += 1;
                i += 1;
            }
            array1[words] += line[i];
            if (line[i] == ' ') 
            {
                throw std::invalid_argument("Error: additional space char in langtype mentions!");
            }
        }
        try 
        {
            mentions = stoi(array1[0]);
            if (stoi(array1[0]) < 0) 
            {
                throw std::invalid_argument("!");
            }
        }
        catch (exception & e) 
        {
            throw std::invalid_argument("Error: langtype mentions should be a positive number!");
        }
    }}