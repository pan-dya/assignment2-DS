#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main() {
	srand((unsigned) time(0));
	int randomNumber;
	int MAXI = 1000;
	string outstr("{");
	for (int i = 0; i < MAXI; i++) {
		randomNumber = (rand() % MAXI) + 1;
		outstr = outstr + to_string(randomNumber) + ",";
	}
	outstr.pop_back();
	outstr = outstr + "}";

	ofstream outfile;
	outfile.open("input.txt");
	outfile << outstr;
	outfile.close();

	return 0;
}
