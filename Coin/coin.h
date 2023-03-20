#include <iostream>
#include <string>
#include <random>
using namespace std;

class Coin {
     string sideUp;
public:
    Coin() {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dis(0, 1);
        if (dis(gen) == 0) {
            sideUp = "heads";
        }
        else {
            sideUp = "tails";
        }
    }

    void toss() {
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<> dis(0, 1);
        if (dis(gen) == 0) {
            sideUp = "heads";
        }
        else {
            sideUp = "tails";
        }
    }

        string getSideUp() {
        return sideUp;
    }
};





