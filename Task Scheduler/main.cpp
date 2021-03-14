#include <iostream>

#include "commandBlock.h"

using namespace std;

//	Playing around with time:
int main()
{
	CommandBlock killSpot(chrono::seconds(0), "taskkill", "/f /im Spotify*");

	killSpot.start();

	killSpot.~CommandBlock();

	return 0;
}
