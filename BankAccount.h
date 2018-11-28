//
// Created by armad on 11/25/2018.
//

#ifndef BANK_BANKACCOUNT_H
#define BANK_BANKACCOUNT_H


#include <iostream>
#include <string>
class BankAccount {
protected:
    std::string name;
    double balance;
public:
    BankAccount();
    BankAccount(std::string name, double initialBalance);
    double getBalance();
    std::string getName();
    void deposit(double amount);
    void withdraw(double amount);
    std::string toString();
};


#endif //BANKC_BANKACCOUNT_H
