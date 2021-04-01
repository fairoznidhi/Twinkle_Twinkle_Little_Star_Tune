#include<iostream>
using namespace std;
#include <windows.h>

int main()
{
	int x;
	//C
	cout<<"\nTwinkle twinkle little star\n";
	for (x = 0; x <= 1; x++) {
		Beep(262, 600);
	}
	//G
	for (x = 0; x <= 1; x++) {
		Beep(392, 600);
	}
	//A
	for (x = 0; x <= 1; x++) {
		Beep(440, 600);
	}
	//G
	Beep(392,2000);


	cout<<"How I wonder what you are\n";
	//F
	for (x = 0; x <= 1; x++) {
		Beep(349, 500);
	}
	//E
	for (x = 0; x <= 1; x++) {
		Beep(330, 600);
	}
	//D
	for (x = 0; x <= 1; x++) {
		Beep(294, 600);
	}
	//C
	Beep(262, 1300);



	cout<<"Up above the world so high\n";
	//G
	for (x = 0; x <= 1; x++) {
		Beep(392, 600);
	}
	//F
	for (x = 0; x <= 1; x++) {
		Beep(349, 500);
	}
	//E
	for (x = 0; x <= 1; x++) {
		Beep(330, 600);
	}
	Beep(294, 1300);


	cout<<"Like a diamond in the sky\n";
	//G
	for (x = 0; x <= 1; x++) {
		Beep(392, 600);
	}
	//F
	for (x = 0; x <= 1; x++) {
		Beep(349, 500);
	}
	//E
	for (x = 0; x <= 1; x++) {
		Beep(330, 600);
	}
	Beep(294, 1200);

	cout<<"Twinkle twinkle little star\n";
	//C
	for (x = 0; x <= 1; x++) {
		Beep(262, 600);
	}
	//G
	for (x = 0; x <= 1; x++) {
		Beep(392, 600);
	}
	//A
	for (x = 0; x <= 1; x++) {
		Beep(440, 600);
	}
	//G
	Beep(392, 1200);


	cout<<"How I wonder what you are!!!!!!\n";
	//F
	for (x = 0; x <= 1; x++) {
		Beep(349, 500);
	}
	//E
	for (x = 0; x <= 1; x++) {
		Beep(330, 600);
	}
	//D
	for (x = 0; x <= 1; x++) {
		Beep(294, 600);
	}
	//C
	Beep(262, 1500);

	printf("\nYepppee\n\n");
	return 0;
}