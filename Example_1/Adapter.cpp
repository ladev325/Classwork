#include "Adapter.h"

Adapter::Adapter(string this_interface, int this_price)
{
	counter++;
	if(counter > 999) counter = 0;
	interface = this_interface;
	price = this_price;
	id = "WFID";
	id += to_string(counter / 100) + to_string(counter / 10 % 10) + to_string(counter % 10);
}

string Adapter::getId()const
{
	return id;
}

