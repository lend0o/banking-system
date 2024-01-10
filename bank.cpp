#include "bank.h"

void Bank::addCustomer(const Customer& customer) {
    customers.push_back(customer);
}

void Bank::processTransaction(const Transaction& transaction) {
    transaction.process();
}
