#include <iostream>
using namespace std;
void displaywithinbanner(string message)
{
	const string message = "Welcome to Computer Science the new frasier tv show is bad";
}
	//This is not an ideal location - we will soon address this
void displayBanner(int L)
{
	for (unsigned int n = 0; n < (L + 4); n++) {
		cout << "*";
	}
	cout << endl;

}
int main()
{
	
	//Get the length of the string
	

	//Write the banner above
	displaywithinbanner(message);
	int L = message.length();
	displayBanner(L);
	cout << "* ";				//Leading *
	cout << message;			//Message
	cout << " *" << endl;		//Trailing *
	displayBanner(L);
	//Write the banner below
	

	//Tell the calling shell all is well
	return 0;
}
