## Abstraction
Abstraction takes the finer details away from unnessesary places and allows for a cleaner, simpler interface.
##### In our examples we used seperate classes for performing all data-access, as well as get/set methods for actually interacting with the data, abstracting out the details of array-access and other functions
In `abstraction_good.cpp` we declare a seperate class, `Controller` which basically performs all functions
```
// This class controlls the portals (admin/user) and the data.
class Controller
{
public:	
	// Gets the sum of two integers from the pre-set arrays
	int get_result(int array_1, int index_1, int array_2, int index_2)
	...
	// This is the user-portal, allowing user-level access to the data
	void user_portal()
	...
	// This is the admin-portal, allowing admin-level (full) access to the data
	void admin_portal()
	...
private:
	// Pre-set arrays
	int one[10] = {0,1,2,3,4,5,6,7,8,9};
	int two[10] = {9,8,7,6,5,4,3,2,1,0};
	int get_value(int array, int index)
    ...
	void set_value(int array, int index, int value)
	...
```
In our bad example, `abstraction_bad.cpp` we combine the functions of the former `Controller` class and integrate all the get/set methods into their implementations, decoupling all abstraction. 
```
int main()
...
	int one[10] = {0,1,2,3,4,5,6,7,8,9};
	int two[10] = {9,8,7,6,5,4,3,2,1,0};
    ...
		cout << "Welcome" << endl;
		cout << "(1) - Admin Portal" << endl;
		cout << "(2) - User Portal" << endl;
		cout << "(0) - Exit" << endl;
		cout << "Enter Choice:" << endl;
        ...
					cout << "Welcome to the Admin Portal" << endl;
					cout << "(1) - Get Value" << endl;
					cout << "(2) - Set Value" << endl;
					cout << "(0) - Exit" << endl;
					cout << "Enter Choice:" << endl;
                    ...	
						if (array == 1)
						{
							cout << one[index] << endl;
				    ...
						if (array == 1)
						{
							one[index] = value;
						...
						cout << "Item value set to " << value << endl;
        ...
				cout << "Welcome to the User Portal" << endl;
				cout << "(1) - Get Result" << endl;
				cout << "(0) - Exit" << endl;
				cout << "Enter Choice:" << endl;
                ...
					if (array_1 == 1)
					{
						if (array_2 == 1)
						{
							cout << (one[index_1] + one[index_2]) << endl;
						}
						else
						{...
```
Abstraction is everywhere. A great example is the layers and layers of abstraction that go into our very computers and the content we use them for (see example below).
###### Example:
![Abstraction](https://github.com/UW-COSC-4010-5010-CYBER-FA-2017/foundational-concepts-in-cybersecurity-jwild1_cbugg/blob/master/7/abstraction.png)
