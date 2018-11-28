//
// Created by armad on 11/27/2018.
//

#ifndef BANKC_CHECKINGACCOUNT_H
#define BANKC_CHECKINGACCOUNT_H


#include "../BankAccount.h"

class CheckingAccount: public BankAccount{
private:
    int transactionCount;
    static double TRANSACTIONFEE;
public:
    CheckingAccount(std::string name, double initialBalance);
    void deductFees();
    void deposit(double amount);
    void withdraw(double amount);


};


#endif //BANKC_CHECKINGACCOUNT_H
