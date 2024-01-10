#include <iostream>
#include "bank.h"

int main() {
    Bank bank;

    Customer customer1("John Doe");
    Customer customer2("Jane Smith");

    Account account1(1000);
    Account account2(500);

    customer1.addAccount(account1);
    customer2.addAccount(account2);

    bank.addCustomer(customer1);
    bank.addCustomer(customer2);

    Transaction transaction1(customer1, account1, TransactionType::WITHDRAWAL, 200);
    Transaction transaction2(customer2, account2, TransactionType::DEPOSIT, 300);

    bank.processTransaction(transaction1);
    bank.processTransaction(transaction2);

    std::cout << "Customer 1 Balance: " << account1.getBalance() << std::endl;
    std::cout << "Customer 2 Balance: " << account2.getBalance() << std::endl;

    return 0;
}
