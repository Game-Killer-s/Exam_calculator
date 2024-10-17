#include <iostream>
#include "functions.h"

using namespace std;

int main() {
	string i1;
	i1 = "1+2+3+4+5+6+7+8+9+10(1+2+3+4+5(2*5))";//    676
	cout << i1.length() << endl;
	cout << i1 << endl;
	mainLogick(i1);
}