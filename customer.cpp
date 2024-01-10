#include "customer.h"

Customer::Customer(const std::string& name) : name(name) {}

void Customer::addAccount(const Account& account) {
    accounts.push_back(account);
}

const std::vector<Account>& Customer::getAccounts() const {
    return accounts;
}
