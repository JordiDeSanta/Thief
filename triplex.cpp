#include <iostream>


void Intro()
{
    // Intro
    std::cout << "You're a thief trying steal a house\n";
    std::cout << "Desactive the alarm or be exposed and enjailed\n";
    std::cout << "Discover the 3 numbers key..\n\n" << "Hints:\n";
};

void Hints(int Mul, int Sum)
{
    // Print hints
    std::cout << "+ The product of this 3 numbers is " << Mul << std::endl;
    std::cout << "+ The sum of this 3 numbes is " << Sum << std::endl << std::endl;
};

bool PlayGame()
{
    Intro();

    // Declare correct key and empty input key
    const int RealKey[3] = {2, 2, 3};
    int Key[3];

    // Calculate sum and product of the digits to give in the hint
    const int KeySum = RealKey[0] + RealKey[1] + RealKey[2];
    const int KeyMul = RealKey[0] * RealKey[1] * RealKey[2];
    int GuessSum, GuessMul; // Declaring guesses

    // Calling print hints method
    Hints(KeyMul, KeySum);

    // For loop what contains user input for once digit of the password
    for (int i = 0; i < 3; i++)
    {
        std::cout << i + 1 << ": "; // Print i of the number
        std::cin >> Key[i]; // Ask to player the i digit of password
    };

    // Defining player guesses
    GuessSum = Key[0] + Key[1] + Key[2];
    GuessMul = Key[0] * Key[1] * Key[2];

    // If the hints agree with the player reply
    if(GuessSum == KeySum && GuessMul == KeyMul)
    {
        std::cout << "\n*deactivated alarm sound\n\n"; // You Win!
        return true;
    }
    else
    {
        std::cout << "\nPolice! hands up\n\n"; // Game Over
        return false;
    };
};

int main() 
{
    bool bLevelCompleted = false;

    while (!bLevelCompleted)
    {
        bLevelCompleted = PlayGame();
        std::cin.clear(); // Clears any errors
        std::cin.ignore(); // Discards the buffer
    }
  
    return 0;
};  
