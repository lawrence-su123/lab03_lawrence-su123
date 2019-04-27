// myProg02.cpp 
// Lawrence Su 4/26/19
// this program counts the number of animals and ducks in a text file
#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream

using namespace std;

int main(int argc, char *argv[])
{
	ifstream ifs;
	string my_line;
	if (argc!=2) {
		// if argc is not 2, print an error message and exit
		cerr << "Usage: "<< argv[0] << " inputFile" << endl;
		exit(1); // defined in cstdlib
	}
	ifs.open(argv[1]);
	int animals = 0;
	int ducks = 0;
	int non_ducks = 0;
	if (ifs.fail())
	{
		cerr << "unable to open the file"<<endl;
		exit(-1);
	}

	while (getline(ifs,my_line))
	{
		if (my_line != " ")

		{
			animals+=1;

			if (my_line == "duck")

				ducks+=1;
		}
	}
	non_ducks = animals - ducks;
	ifs.close();
	cout<< "Report for "<<argv[1]<<":"<<endl;
	cout<< "   Animal count:    "<< animals <<endl;
	cout<< "   Duck count:      "<< ducks << endl;
	cout<< "   Non duck count:  "<< non_ducks <<endl;



	return 0;
}
