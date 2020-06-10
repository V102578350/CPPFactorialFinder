#include <iostream>


int Factorial(int aNum)
{
    if(aNum > 1)
        return aNum * Factorial(aNum - 1);
    else
        return 1;
}

int main()
{
    int result;
    std::cout << "Enter a number to find the Factorial Value: " << std::endl;
    std::cin >> result;

    std::cout << "The Factorial value of " << result << " is " << Factorial(result) << std::endl;
}