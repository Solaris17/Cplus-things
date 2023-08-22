#include <iostream>
#include <ctime> // For time seeding
#include <cstdlib> // For rand function
#include <limits> // This is for alpha check

// Main Function We want to loop it but we should not "return main();"
void shop()
{

// Run srand based off of current time to seed rand function.
srand( time(0));

  // Declare our variable(s)
double gold;
int charisma = rand()%20+1;
int dc = rand()%20+1;

  // Add an empty line here to break it from the top of the console.
  std::cout << "\n";

  // Specify the amount of gold the party has by asking them.
  std::cout << "Barter: \n";
  std::cout << "\n";
  std::cout << "Merchant DC: " << dc << "\n";
  std::cout << "Charisma Roll: " << charisma << "\n";
  std::cout << "\n";

  if (charisma < dc)
	{
		std::cout << "Charisma check failure! \n";
	}
	else if (charisma >= dc)
	{
		std::cout << "Charisma check success! \n";
	}

  std::cout << "\n";
  std::cout << "How much gold does the party have? \n";
  std::cout << "\n";
  std::cin >> gold;
  std::cout << "\n";

// These should probably be if/else-if statements and part of the interaction.
// Check for negative number or Alphas.

// Check to make sure its not going to dip negative.
while (gold <= 0) {

        std::cout << "Wha? yuhv not got enuf gold fer trade? \n";
        std::cout << "\n";
        std::cin >> gold;
        std::cout << "\n";

    // Check for Alphas
    while(std::cin.fail())
    {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
    std::cout << "Ur not makin much cents. \n";
    std::cout << "\n";
    std::cin >> gold;
    std::cout << "\n";
    }

}

// Now write conditions for what the merchant say if we fail the roll. We add '1' to the value of "gold"
  if (charisma < dc) {
    std::cout << "Merchant: You can't afford this. The item is: " << ++gold << " gold.\n";

  // Now write what the merchant will say if we are greater than or equal to the merchant DC. We will subtract '1' from the value of "gold"
}  else if (charisma >= dc) {
   std::cout << "Merchant: You can afford this! The item is: " << --gold << " gold.\n";

// Now write what Kevin will do if our check passes.
// In this case it doesnt matter how much gold we have. Kevin will make it more.
// We will use the '+' modifier to increment the amount by 2 so it is over the original value if you get a success roll.
} 

  if (charisma >= dc) {
   std::cout << "\n";
   std::cout << "Kevin (system call): You don't have enough gold; It's worth : " << gold+2 << "\n";

}

// Add this line break after the code to seperate the pause return.
std::cout << "\n";

}

// Repeat logic that we can call from main() this will let us jump back to the beginning.
bool getRepeat()
{
  std::cout << "yer wan to go ageen? (Y/N): \n";
  std::cout << "\n";
  // Add this ignore to clear the buffer or the "get()" will and then it will continue instead of waiting like it should.
  std::cin.ignore();
  int yesno = std::cin.get();
  return ( yesno == 'Y' || yesno == 'y' );
}

int main()
{
   bool repeat = true;
   while (repeat)
   {
     shop();
     repeat = getRepeat();

     // Clear the screen incase its a re-run. This method is not portable; its windows specific.
     // Fix it later by making it a void method at the beginning: https://stackoverflow.com/questions/6486289/how-can-i-clear-console
     system("cls");
   }

std::cout << "\n";
std::cout << "Bye \n";
std::cout << "\n";

//Tell them its done now
std::cout << "Press enter to exit. \n";
std::cout << "\n";

// I should be using something like this. Its portable between OSs. Use ignore() to catch the new line then use get to stop the terminal.
std::cin.ignore();
std::cin.get();

return 0;

}
