#include <iostream>

int main()

{

// Declare Var
double speedkmh;

// Ask for current speed.
std::cout << "\n";
std::cout << "What is the speed in kmh? \n";
std::cout << "\n";
std::cin >> speedkmh;
std::cout << "\n";

// Write some input sanitization here incase people enter strange things.
// https://www.learncpp.com/cpp-tutorial/stdcin-and-handling-invalid-input/

// Convert new variables
// Make them "int" instead of "double" if you dont want the decimal places.
double speedmph = (speedkmh / 1.609);

// show remainder
std::cout << "The speed is " << speedmph << " mph. \n";
std::cout << "The speed is " << speedkmh << " kmh. \n";
std::cout << "\n";

// This will pause and require a key to be struck, else the program will close since the returns is called.
// Don't use this its not portable (mac/linux)
system("pause");

// I should be using something like???
//std::cin.get();

return 0;

}
