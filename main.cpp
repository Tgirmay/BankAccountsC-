#include <iostream>
#include "cmake-build-debug/BankAccount.h"
#include "cmake-build-debug/CMakeFiles/SavingsAccount.h"
#include "cmake-build-debug/CMakeFiles/CheckingAccount.h"


int main() {
    std::cout << "Hello, World!" << std::endl;
    BankAccount starter("starter", 0);
    BankAccount advanced("advanced", 500);
    starter.deposit(1000);
    advanced.withdraw(100);
    starter.withdraw(200);
    advanced.deposit(200);
    std::cout <<starter.toString()<< std::endl;
    std::cout <<advanced.toString()<< std::endl;

    SavingsAccount savings("savings", 0, 1);
    CheckingAccount checking("checking",500 );
    savings.deposit(1000);
    checking.withdraw(100);
    savings.withdraw(200);
    checking.deposit(200);

    std::cout <<savings.toString()<< std::endl;
    std::cout <<checking.toString()<< std::endl;

    savings.addInterest();
    checking.deductFees();

    std::cout <<savings.toString()<< std::endl;
    std::cout <<checking.toString()<< std::endl;
    return 0;
}