#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
public:
    Account(double initialBalance);

    double getBalance() const;
    void deposit(double amount);
    void withdraw(double amount);

private:
    double balance;
};

#endif // ACCOUNT_H
