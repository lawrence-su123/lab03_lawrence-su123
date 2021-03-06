// countDucks.cpp 
// Lawrence Su 4/26/19
// counts number of ducks in a text file
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
	int ducks=0;
	if (ifs.fail())
	{
		cerr << "unable to open the file"<<endl;
		exit(-1);
	}

	while (getline(ifs,my_line))
	{
		if (my_line == "duck")
		{
			ducks+=1;
		}
	}
	ifs.close();
	cout<< "There were " << ducks << " ducks" << " in "<<argv[1]<<endl; 



	return 0;
}
