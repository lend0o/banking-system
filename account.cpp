#include "account.h"

Account::Account(double initialBalance) : balance(initialBalance) {}

double Account::getBalance() const {
    return balance;
}

void Account::deposit(double amount) {
    balance += amount;
}

void Account::withdraw(double amount) {
    balance -= amount;
}
