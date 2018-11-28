//
// Created by armad on 11/25/2018.
//

#include "BankAccount.h"


BankAccount::BankAccount(){}
BankAccount::BankAccount(std::string name, double initialBalance){
        this->balance=initialBalance;
        this->name=name;
    }

double BankAccount::getBalance(){
        return balance;
    }

    std::string BankAccount::getName(){
        return name;
    }

    void BankAccount::deposit(double amount){
        this->balance+=amount;
    }

    void BankAccount::withdraw(double amount){
        this->balance-=amount;
    }


    std::string BankAccount::toString(){
        return  "Name: " + getName() + ", balance " + std::to_string(getBalance());
    }


