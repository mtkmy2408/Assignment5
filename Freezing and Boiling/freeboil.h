#include <iostream>
#include <string>

class Substance {
public:
    Substance(double temp) : temperature(temp) {}

    // Accessor and mutator functions
    double getTemperature() const { return temperature; }
    void setTemperature(double temp) { temperature = temp; }

    // Freezing and boiling point functions for each substance
    bool isEthylFreezing() const { return temperature <= -173; }
    bool isEthylBoiling() const { return temperature >= 172; }
    bool isOxygenFreezing() const { return temperature <= -362; }
    bool isOxygenBoiling() const { return temperature >= -306; }
    bool isWaterFreezing() const { return temperature <= 32; }
    bool isWaterBoiling() const { return temperature >= 212; }

private:
    double temperature;
};

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



