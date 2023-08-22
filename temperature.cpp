#include <iostream>

//declare namespace to remove the need to use "std"
//using namespace std;

int main()

{

// Declare Var
double tempf;

// Ask for current temp.
std::cout << "\n";
std::cout << "What is the current temp in fahrenheit? \n";
std::cout << "\n";
std::cin >> tempf;
std::cout << "\n";

// Write some input sanitization here incase people enter strange things.
// https://www.learncpp.com/cpp-tutorial/stdcin-and-handling-invalid-input/

// Convert new variables
// Make them "int" instead of "double" if you dont want the decimal places.
int tempc = (tempf - 32) * 5/9;
int tempk = (tempf - 32) * 5/9 + 273.15;

// show remainder
std::cout << "The temp is " << tempf << " degrees Fahrenheit. \n";
std::cout << "The temp is " << tempc << " degrees Celsius. \n";
std::cout << "The temp is " << tempk << " degrees Kelvin. \n";
std::cout << "\n";

// This will pause and require a key to be struck, else the program will close since the returns is called.
// Don't use this its not portable (mac/linux)
//system("pause");

//Tell them its done now
std::cout << "Press enter to exit. \n";

// I should be using something like this. Use ignore() to catch the new line then use get to stop the terminal.
std::cin.ignore();
std::cin.get();

return 0;

}
