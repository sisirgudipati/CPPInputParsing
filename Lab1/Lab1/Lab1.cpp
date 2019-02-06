// Lab1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "enums.h"
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std; 

int helpfulArgument(char * x) {
	cout << x << " <input_file_name>" << endl; 
	return TooManyArguments; 
}

int parse(vector<string> & words, char * x) {
	ifstream inFile(x);
	if (!(inFile.is_open())) {
		return UnableToOpen; 
	}

	else {
		string line_1, word_1; 
		while (getline(inFile, line_1)) {
			if (line_1.length() == 0) {
				continue; 
			}
			istringstream iss(line_1); 
			while (iss >> word_1) {
				words.push_back(word_1);
			}
		}
		return Success;
	}
}

int numDigits(int number)
{
	int digits = 0;
	if (number < 0){ 
		digits = 1;
	}
	
	while (number) {
		number /= 10;
		digits++;
	}
	return digits;
}

int main(int argc, char * argv[])
{
	if (argc != CorrectNumberOfArguments) {
		return helpfulArgument(argv[programName]);
	}

	vector<string> empty; 
	int returnVal = parse(empty, argv[inputFile]);
	if (returnVal != Success) {
		return returnVal;
	}

	else {
		vector<int> final;
		for (unsigned int t = 0; t < empty.size(); ++t) {
			string itrr = empty[t];
			int countLetters = 0; 
			for (unsigned int g = 0; g < itrr.length(); g++) {
				if (isdigit(itrr[g])) {
					continue; 
				}
				else {
					countLetters++;
				}
			}

			if (countLetters == 0) {
				//int numLengthBeforeConversion = itrr.length();
				//cout << "before" << numLengthBeforeConversion << endl; 
				int numberr = stoi(itrr);
				//int numLengthAfterConversion = numDigits(numberr);
				//cout << "after" << numLengthAfterConversion << endl; 
				//call another function to get length of digits, if it changes then add that many 0s at the beginning 
				//int numZeroes = numLengthBeforeConversion - numLengthAfterConversion; 
				//if (numZeroes > 0) {
				//	int finalNumOfZeroes; 
				//	for (int z = numZeroes; z > 0; --z) {
				//		0 << finalNumOfZeroes; 
				//	}
				//	int accurateNumber = finalNumOfZeroes << numberr; 
				//}
				final.push_back(numberr);
			}
			else {
				cout << "Strings: " << itrr << endl; 
			}
		}

		for (unsigned int y = 0; y < final.size(); y++) {
			cout << "Numbers: " << final[y] << endl; 
		}

		return Success; 
	}
}

