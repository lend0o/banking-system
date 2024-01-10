#include "transaction.h"

Transaction::Transaction(const Customer& customer, const Account& account, TransactionType type, double amount)
    : customer(customer), account(account), type(type), amount(amount) {}

void Transaction::process() {
    switch (type) {
        case TransactionType::DEPOSIT:
            account.deposit(amount);
            break;
        case TransactionType::WITHDRAWAL:
            account.withdraw(amount);
            break;
    }
}
