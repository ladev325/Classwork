#include <iostream>
#include <fstream>
#include "Adapter.h"
using namespace std;

int Adapter::counter = 0;

int main() {
	ofstream file("file.txt");
	if (!file) {
        cout << "Error opening" << endl;
        return 1;
    }

	Adapter ad1("USB0-A", 200);
	Adapter ad2("USB-C", 400);
	Adapter ad3("Micro-USB", 250);

	file << ad1 << ad2 << ad3;

	file.close();
	return 0;
}