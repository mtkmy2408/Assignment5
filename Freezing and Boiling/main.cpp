#include "freeboil.h"

int main() {
    double temp;
    std::cout << "Enter a temperature in Fahrenheit: ";
    std::cin >> temp;

    Substance substance(temp);

    std::cout << "At " << temp << " degrees Fahrenheit, the following substances will: " << std::endl;

    if (substance.isEthylFreezing())
        std::cout << " - freeze ethyl alcohol" << std::endl;
    if (substance.isEthylBoiling())
        std::cout << " - boil ethyl alcohol" << std::endl;
    if (substance.isOxygenFreezing())
        std::cout << " - freeze oxygen" << std::endl;
    if (substance.isOxygenBoiling())
        std::cout << " - boil oxygen" << std::endl;
    if (substance.isWaterFreezing())
        std::cout << " - freeze water" << std::endl;
    if (substance.isWaterBoiling())
        std::cout << " - boil water" << std::endl;

    return 0;
}