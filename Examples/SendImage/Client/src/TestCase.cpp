#include "ImageClient.h"


int main (void)
{
	char IPv4 [] = "172.113.243.138";
	//char PortNumber [] = "25565";

//	char IPv4 [] = "127.0.0.1";
	char PortNumber [] = "1025";
//        char FileName [] = "newImage_1.png";
        char FileName [] = "hey.png";

        ImageClient Tester(IPv4, PortNumber);

        Tester.ReadImage(FileName);
        Tester.Connect();
        Tester.SendCycle();
}
