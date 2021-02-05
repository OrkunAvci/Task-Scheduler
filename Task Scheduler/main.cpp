#include <iostream>

#include "commandBlock.h"

using namespace std;

//	Playing around with time:
int main()
{
	CommandBlock killSpotify(chrono::seconds(1), "taskkill", "/f /im Spotify.exe");
	killSpotify.start();
	killSpotify.~CommandBlock();

	system("pause");
	return 0;
}
