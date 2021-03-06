// resourceEncapsulation_good.cpp

// This is a good example of resource encapsulation. 
//	It uses c++'s public/private declarations to disallow 
//	other functions (main) access to private variables
//	other than by dedicated get/set-type methods.

// Chris Bugg
// COSC 4010
// 10/10/17

#include <iostream>
using namespace std;

class secret
{

private:

	int secret_number = 42;	// Defining a secret number not to be shared with other functions/classes

public:	
	
	int get_secret()	// A dedicated function for getting the value of 'secret_number'
	{

		int lies = 1;	// Secure obfuscation seeding

		lies = lies + secret_number;	// Obfuscating the real secret so we never share it

		return lies;	// Returning only what we want to the calling class/function
	}
};

int main()
{
	cout << "Resource Encapsulation - Good" << endl;

	secret secret_keeper;	// Defining our secret class

	int what_is_it;

	what_is_it = secret_keeper.get_secret();	// Getting the 'secret_number' through the defined methods

	cout << "get_secret() says: " << what_is_it << endl;

	getchar();

	return 0;
}
