#include <iostream>
#include <iomanip>
bool bilet(int n) {
    int sumL = 0;
    int sumR = 0;

    for (int i = 0; i < 6; i++) {
        if (i < 3) {
            sumR += n % 10;
        }
        else {
            sumL += n % 10;
        }
        n /= 10;
    }
    return sumL == sumR;
}
int main() {
    int count = 0;
    for (int i = 0; i <= 999999; i++) {
        if (bilet(i)) {
            count++;
            std::cout << std::setfill('0') << std::setw(6) << i << " ";
        }
    }
    std::cout << "\nВсего: " << count << std::endl;
    return 0;
}