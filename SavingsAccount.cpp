//
// Created by armad on 11/27/2018.
//

#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(std::string name, double initialBalance, double interestRate){
    this->balance=initialBalance;
    this->name=name;
    this->interestRate = interestRate;
}

void SavingsAccount::addInterest() {
    this->deposit(interestRate*getBalance()/100);
}
