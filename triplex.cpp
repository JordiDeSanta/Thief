#include <iostream>
#include <string>

int main() 
{
    // Intro
    std::cout << "You're a thief trying steal a house\n";
    std::cout << "Desactive the alarm or be exposed and enjailed\n";
    std::cout << "Discover the 3 numbers key..\n\n" << "Hints:\n";
    
    // Declare correct key and empty input key
    const int RealKey[3] = {2, 2, 3};
    int key[3];

    // Calculate sum and product of the digits to give in the hint
    const int KeySum = RealKey[0] + RealKey[1] + RealKey[2];
    const int KeyMul = RealKey[0] * RealKey[1] * RealKey[2];

    // Print hints
    std::cout << "+ The product of this 3 numbers is " << KeyMul << std::endl;
    std::cout << "+ The sum of this 3 numbes is " << KeySum << std::endl;
    std::cout << "+ Extra: the order is from lowest to highest\n\n";

    // For loop what contains user input for once digit of the password
    for (int i = 0; i < 3; i++)
    {
        std::cout << i + 1 << ": "; // Print i of the number
        std::cin >> key[i]; // Ask to player the i digit of password

        // if the player guess a number the alarm call the polica
        if (key[i] != RealKey[i])
        {
            // Game Over
            std::cout << "Police!, hands up";
            return 0;
        };
    };
    
    // You Win!
    std::cout << "*deactivated alarm sound";

    return 0;
}   
