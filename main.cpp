#include <iostream>
using namespace std;

#include "ovalArea.h"

int main()
{
	ovalArea a; 
	ovalArea b(3, 4);  
	a.set();
	a.Area();
	b.Area();

	return 0;
}