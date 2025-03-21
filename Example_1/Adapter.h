#pragma once
#include <string>
#include <iostream>
using namespace std;

class Adapter {
	string id;
	static int counter;
	string interface;
	int price;

	public:
		Adapter(string this_interface, int this_price);
		string getId()const;

		friend istream& operator>>(istream& in, Adapter& obj) {
			cout << "Interface: ";
			in >> obj.interface;
			cout << "Price: ";
			in >> obj.price;
			return in;
		}

		friend ostream& operator<<(ostream& out, const Adapter& obj) {
			out << obj.getId() << " " << obj.interface << " [" << obj.price << "]" << endl;
			return out;
		}

};