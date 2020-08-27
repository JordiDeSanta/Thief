#include <iostream>
#include <string>

int main() 
{
    std::cout << "You're a thief trying steal a house\n";
    std::cout << "Desactive the alarm or be exposed and enjailed\n";
    std::cout << "Discover the 3 numbers key..\n" << "Hints:\n";
    
    int realKey[3] = {2, 2, 3};
    int key[3];

    int sum = realKey[0] + realKey[1] + realKey[2];
    int mul = realKey[0] * realKey[1] * realKey[2];

    std::cout << "+ The product of this 3 numbers is " << mul << std::endl;
    std::cout << "+ The sum of this 3 numbes is " << sum << std::endl;
    std::cout << "+ Extra: the order is from lowest to highest\n";

    for (int i = 0; i < 3; i++)
    {
        std::cout << i + 1 << ": ";
        std::cin >> key[i];

        if (key[i] != realKey[i])
        {
            std::cout << "Police!, hands up";
            return 0;
        }
    }
    
    std::cout << "*deactivated alarm sound";
    return 0;
}   
