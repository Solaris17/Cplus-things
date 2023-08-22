#include <iostream>

//function
int main() 
{

  // Declare a variable
    int score;

  // Iinitilize variables
    score = 0;

// We can also do this in one go IE: "int score = 0;"

  // you can view it by calling the variable score like: 
    std::cout << score << "\n";

  // We can use "<<" to chain "std::cout" together.
    std::cout << "Hello, the " << "score is: " << score << "\n";

    return 0;
  
}