#include "coin.h"
int main() {
    Coin c;
    cout << "Initial side facing up: " << c.getSideUp() << endl;

    int num_heads = 0, num_tails = 0;
    for (int i = 0; i < 20; i++) {
        c.toss();
        cout << "Side facing up after toss " << i+1 << ": " << c.getSideUp() << endl;
        if (c.getSideUp() == "heads") {
            num_heads++;
        }
        else {
            num_tails++;
        }
    }

    cout << "Number of heads: " << num_heads << endl;
    cout << "Number of tails: " << num_tails << endl;

    return 0;
}
