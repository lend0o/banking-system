#ifndef BANK_H
#define BANK_H

#include <vector>
#include "customer.h"
#include "transaction.h"

class Bank {
public:
    void addCustomer(const Customer& customer);
    void processTransaction(const Transaction& transaction);

private:
    std::vector<Customer> customers;
};

#endif // BANK_H
