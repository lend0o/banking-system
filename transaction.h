#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "customer.h"
#include "account.h"

enum class TransactionType {
    DEPOSIT,
    WITHDRAWAL
};

class Transaction {
public:
    Transaction(const Customer& customer, const Account& account, TransactionType type, double amount);

    void process();

private:
    const Customer& customer;
    const Account& account;
    TransactionType type;
    double amount;
};

#endif // TRANSACTION_H
