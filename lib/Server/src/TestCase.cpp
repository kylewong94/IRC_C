#include "Server.h"


int main (void)
{
	char * PortNumber;
	
	PortNumber = new char [4];
	PortNumber = "780";

	Server ServerListenTest(5, 10, PortNumber);
	ServerListenTest.ServerStart();
}
