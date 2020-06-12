#include <iostream>
#include "container_atd.h"
using namespace std;
int main(int argc, char* argv[])
{
	if (argc != 3) 
	{
		cout << "incorrect command line! "
			"Waited: command in_file out_file"
			<< endl;
		exit(1);
	}
	string inputPath = argv[1];
	string outputPath = argv[2];
	try {
		ifstream file(inputPath);
		file.exceptions(std::ifstream::failbit | std::ifstream::badbit);
		ofstream outfile(outputPath);
		cout << "Start" << endl;
		simple_langtypes::Container c;
		c.In(file);
		outfile << "Filled container. " << endl;
		c.Out(outfile);
		c.OutProcedure(outfile);
		c.MultiMethod(outfile);
		outfile << "Sorted container. " << endl;
		c.Sort();
		c.Out(outfile);
		c.Clear(c.list);
		outfile << "Empty container. " << endl;
		c.Out(outfile);
		cout << "Stop" << endl;
	}
	catch (std::invalid_argument & ia) 
	{
		std::cerr << ia.what();
	}
	catch (std::ifstream::failure f) 
	{
		std::cerr << "Error reading input file";
	}
	getchar();
	return 0;
}
