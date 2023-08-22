#include <iostream>

int main()

{

  // Declare our variable
double gold;

  // Add an empty line here to break it from the top of the console.
  std::cout << "\n";

  // Specify the amount of gold the party has by asking them.
  std::cout << "How much gold does the party have? \n";
  std::cout << "\n";
  std::cin >> gold;
  std::cout << "\n";

// Now write conditions for what Kevin will have the merchant say if we have less than 10 gold.
if (gold < 10) {
  std::cout << "Merchant: You can't afford this.\n";

  // Now write what the merchant will say if we have less than 20 gold.
} else if (gold < 20) {
  std::cout << "Merchant: You can't afford this.\n";

// Now write what the merchant will say if we have a value that doesnt meet the conditions defined in the previous.
// In this case it doesnt matter how much gold we have. Kevin will make it more.
} else {
  std::cout << "Merchant: You don't have enough gold.\n";
}

// Add this line break after the code to seperate the pause return.
std::cout << "\n";

system("pause");

return 0;

}