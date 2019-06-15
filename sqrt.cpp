#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

int main(int argc, char* argv[])
{
	if(argc != 2) 
	{
		cout << "Usage: " << argv[0] << " <int>" << endl;
		return 1;
	}

	istringstream iss(argv[1]);

	double number; iss >> number;

	if(!iss.eof()) 
	{
		cout << "Invalid param" << endl;
		return 1;
	}

	cout << "Sqrt of " << number << " is " << sqrt(number) << endl;

	return 0;
}

