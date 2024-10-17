#include <iostream>
#include <string.h>
#include "Functions.h"

using namespace std;

void mainLogick(string inputData,bool startFromFunction) {
	int countOpenBracket = 0,
		countClosedBracket = 0;
	string copyInputData;
	for (int i = 0; i < inputData.length(); i++) {
		if (startFromFunction == true) {
			if (inputData[i] == '(' || countOpenBracket > 0) {
				if (inputData[i] == '(') {
					countOpenBracket++;
				}
				if (inputData[i] == ')') {
					countClosedBracket++;
				}
				copyInputData.push_back(inputData[i]);
			}
		}
		else {
			if (inputData[i] == '(' || countOpenBracket > 0) {
				if (inputData[i] == '(') {
					countOpenBracket++;
				}
				if (inputData[i] == ')') {
					countClosedBracket++;
				}
				copyInputData.push_back(inputData[i]);
			}
		}
	}
	if (countClosedBracket != countOpenBracket) {
		cout << "Not all bracket are closed" << endl;
		return;
	}
	if (countOpenBracket > 1) {
		mainLogick(copyInputData, 1);
	}
}
