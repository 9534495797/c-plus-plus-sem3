#include <iostream>
#include <iomanip> // For setting precision

class Account {
public:
    virtual float calculateInterest(float principal, float rate, int years) {
        return principal * rate * years / 100;
    }
};

class SavingsAccount : public Account {
public:
    float calculateInterest(float principal, float rate, int years) override {
        return principal * rate * years / 100;
    }
};

class FixedDepositAccount : public Account {
public:
    float calculateInterest(float principal, float rate, int years) override {
        return principal * rate * years / 100;
    }
};

int main() {
    float principal, rate;
    int years;

    std::cin >> principal >> rate >> years;

    SavingsAccount savingsAccount;
    FixedDepositAccount fixedDepositAccount;

    float savingsInterest = savingsAccount.calculateInterest(principal, rate, years);
    float fixedDepositInterest = fixedDepositAccount.calculateInterest(principal, rate, years);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << savingsInterest << std::endl;
    std::cout << fixedDepositInterest << std::endl;

    return 0;
}


