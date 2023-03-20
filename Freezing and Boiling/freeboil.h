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




