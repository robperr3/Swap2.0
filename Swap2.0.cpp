// Swap2.0.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

void badSwap(int x, int y);
void goodSwap(int& x, int& y);

int main()
{
	//declaring and initializing/assigning value to my variable inside function
	int terroristBalance = 50000;
	int JoesBalance = 100;
	
	cout << "Mission Parameters:\n\n";
	cout << "The enemy terrorist cell is moving forward with their plans to expand their network within the US\n";
	cout << "Our mission will be to hack into their bank account and switch their funds with that of a failing\n ";
	cout << "business. We all love Joe's coffee shop and know its not doing so well.So let's help Joe out & \n";
	cout << "mess with some terrorists today!\n\n";

	//writing original starting values to screen for user
	cout << "Hacking into terrorist bank account. standby.....\n";
	cout << "Current terrorist account balance: $" << terroristBalance << "\n";
	cout << "Hacking into Joe's bank account. standby.....\n";
	cout << "Current Joe's account balance: $" << JoesBalance << "\n\n";

	cout << "Activating old hacking solution software aka badSwap....\n";
	//calling funct badSwap  and passing to arguements
	badSwap(terroristBalance, JoesBalance);
	cout << "Terrorist's new account balance: $" << terroristBalance << "\n";
	cout << "Joe's new account balance: $" << JoesBalance << "\n";
	cout << "This obviously didnt get the job done. software is corrupt\n\n";

	cout << "Activating new hacking solution software aka goodSwap.....\n";
	goodSwap(terroristBalance, JoesBalance);
	cout << "Terrorist's new account balance: $" << terroristBalance << "\n";
	cout << "Joe's new account balance: $" << JoesBalance << "\n\n";
	cout << "Take that scumbags! Good work boys! Now lets call it a day and grab some coffee. We earned it!\n";

	system("pause");
	return 0;
}
///swapping 2 local values (copies of orginals) that are being passed to it
void badSwap(int x, int y)// this is how you swap variables
{
	int temp = x;//data in x is now in temp
	x = y;//data in y is now in x 
	y = temp;// what was in temp (which happens to be x) is now in y; they swapped!
			//However realize that this only swaps the values for the duration of the function.
			//once the function completes, the variables remain their original values. 
}
///swapping 2 ref's to a orignal values that are passed to it
void goodSwap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;//its just like badSwap, except when the vairables swap,
			//it changes the original values of the variables.
}


