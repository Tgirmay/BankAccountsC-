//
// Created by armad on 11/27/2018.
//

#ifndef BANKC_SAVINGSACCOUNT_H
#define BANKC_SAVINGSACCOUNT_H


#include "../BankAccount.h"

class SavingsAccount: public BankAccount {
private:
    double interestRate;
public:
    void addInterest();
    SavingsAccount(std::string name, double initialBalance, double interestRate);
};


#endif //BANKC_SAVINGSACCOUNT_H
