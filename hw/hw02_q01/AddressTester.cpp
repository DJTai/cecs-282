//============================================================================
// Name        : 282_hw02.cpp
// Author      : David Taitingfong
// Description : Tester function for Address.cpp and Address.h
//============================================================================

#include "Address.h"

#include <iostream>
using namespace std;

int main()
{
	Address noApt("853", "Via Tonga Ct", "San Diego", "CA", "92154");
	Address hasApt("2540", "W Ball Rd", "Apt 28", "Anaheim", "CA", "92804");

	noApt.displayAddress();
	cout << endl;
	hasApt.displayAddress();

	return 0;
}
