#include <iostream>
#include <string>
#include "Functions.h"

using namespace std;

int mainArithmetic(string inputData) {
	int buff=0;
	for (int i = 1; i < inputData.length()-1; i++) {
		if (i == 1) {
			buff = (inputData[i]-'0');
		}
		else {
			switch (inputData[i])
			{
			case('+'):
				buff += (inputData[i+1]-'0');
				break;
			case('-'):
				buff -= (inputData[i+1]-'0');
				break;
			case('*'):
				buff *= (inputData[i+1]-'0');
				break;
			case('/'):
				buff /= (inputData[i+1]-'0');
				break;
			case('^'):
				buff = (int)pow(buff, (inputData[i+1]-'0'));
			default:
				break;
			}
		}
	}
	return buff;
}