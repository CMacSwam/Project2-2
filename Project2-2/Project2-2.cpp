/*
* File: Project2 - 2
* Author: Chase McCluskey
* Date: 9/5/24
*
* Declaration: Using Strings to print a statement then using user input in a sting output
*/

#include <iostream>
#include <string>

using namespace std;
int main()
{
	cout << "Hello, my name is Hal!" << endl;
	cout << "What is your name?";
	string user_name;
	getline(cin, user_name);
	cout << "Hello, " + user_name + ". I am glad to meet you!" << endl;
	return 0;
}