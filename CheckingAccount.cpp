//
// Created by armad on 11/27/2018.
//

#include "CheckingAccount.h"
double CheckingAccount::TRANSACTIONFEE = 3.0;

CheckingAccount::CheckingAccount(std::string name, double initialBalance){
    this->balance=initialBalance;
    this->name=name;
}

void CheckingAccount::deductFees() {
    this->withdraw(transactionCount*TRANSACTIONFEE);
    transactionCount = 0;
}

void CheckingAccount::deposit(double amount){
    this->balance+=amount;
    this->transactionCount++;
}

void CheckingAccount::withdraw(double amount){
    this->balance-=amount;
    this->transactionCount++;
}