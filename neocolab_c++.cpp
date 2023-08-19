//#include <iostream>
//#include <string>
//
//class Year {
//public:
//    enum Month {
//        January = 1, February, March, April, May, June,
//        July, August, September, October, November, December
//    };
//};
//
//int main() {
//    int monthNumber;
//
//    std::cout << "Enter the number representing a month: ";
//    std::cin >> monthNumber;
//
//    if (monthNumber >= Year::January && monthNumber <= Year::December) {
//        Year::Month month = static_cast<Year::Month>(monthNumber);
//
//        std::string monthName;
//
//        switch (month) {
//            case Year::January:   monthName = "January";   break;
//            case Year::February:  monthName = "February";  break;
//            case Year::March:     monthName = "March";     break;
//            case Year::April:     monthName = "April";     break;
//            case Year::May:       monthName = "May";       break;
//            case Year::June:      monthName = "June";      break;
//            case Year::July:      monthName = "July";      break;
//            case Year::August:    monthName = "August";    break;
//            case Year::September: monthName = "September"; break;
//            case Year::October:   monthName = "October";   break;
//            case Year::November:  monthName = "November";  break;
//            case Year::December:  monthName = "December";  break;
//        }
//
//        std::cout << "Month: " << monthName << std::endl;
//    } else {
//        std::cout << "Invalid month input" << std::endl;
//    }
//
//    return 0;
//}

#include <iostream>
#include <string>

#define MAX_NAME_LENGTH 50

struct AccountInfo {
    std::string name;
    int accountNumber;
    float balance;
};

union ACCOUNTDATA {
    AccountInfo account;
};

void deposit(ACCOUNTDATA &accountData, float amount) {
    accountData.account.balance += amount;
    std::cout << "Amount deposited successfully" << std::endl;
}

void withdraw(ACCOUNTDATA &accountData, float amount) {
    if (accountData.account.balance >= amount) {
        accountData.account.balance -= amount;
        std::cout << "Amount Withdrawn successfully" << std::endl;
    } else {
        std::cout << "Insufficient balance. Withdrawal failed." << std::endl;
    }
}

int main() {
    ACCOUNTDATA accountData;
    
    // Input
    std::cout << "Enter Account Holder's Name: ";
    std::getline(std::cin, accountData.account.name);
    
    std::cout << "Enter Account Number: ";
    std::cin >> accountData.account.accountNumber;
    
    std::cout << "Enter Initial Balance: ";
    std::cin >> accountData.account.balance;
    
    float depositAmount, withdrawAmount;
    
    std::cout << "Enter Amount to Deposit: ";
    std::cin >> depositAmount;
    
    std::cout << "Enter Amount to Withdraw: ";
    std::cin >> withdrawAmount;
    
    // Perform transactions
    deposit(accountData, depositAmount);
    withdraw(accountData, withdrawAmount);
    
    // Display account details
    std::cout << "Account Holder's Name: " << accountData.account.name << std::endl;
    std::cout << "Account Number: " << accountData.account.accountNumber << std::endl;
    std::cout << "Balance: " << accountData.account.balance << std::endl;
    
    return 0;
}



