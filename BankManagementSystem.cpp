#include <iostream>
#include <vector>
#include<string>

class BankAccount 
{
    private:
        std::string accountHolder {};
        int accountNumber {};
        double balance {};

    public:
        BankAccount(std::string name, int accNum, double initialBalance) 
        {
            accountHolder = name;
            accountNumber = accNum;
            balance = initialBalance;
        }

    void deposit(double amount) 
    {
        if (amount > 0) 
        {
            balance += amount;
            std::cout << " $" << amount << " deposited successfully.\n" << std::endl;
        } 
        
        else 
        {
            std::cout << "Invalid deposit amount!\n" << std::endl;
        }
    }

    void withdraw(double amount) 
    {
        if (amount > 0 && amount <= balance) 
        {
            balance -= amount;
            std::cout << " ₹" << amount << " withdrawn successfully.\n" << std::endl;
        } 
        
        else 
        {
            std::cout << "Insufficient balance or invalid amount!\n" << std::endl;
        }
    }

    void displayAccount() 
    {
        std::cout << "\nAccount Holder: " << accountHolder << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: ₹" << balance << std::endl;
    }

    
    int getAccountNumber() 
    {
        return accountNumber;
    }
};

int main() 
{
    std::vector<BankAccount> accounts;
    int choice {};

    while (true) 
    {
        std::cout << "\n=== Bank Management System ===\n" << std::endl;
        std::cout << "1. Create Account\n" << std::endl;
        std::cout << "2. Deposit Money\n" << std::endl;
        std::cout << "3. Withdraw Money\n" << std::endl;
        std::cout << "4. Display Account Details\n" << std::endl;
        std::cout << "5. Exit\n" << std::endl;
        std::cout << "Enter your choice: " << std::endl;
        std::cin >> choice;

        switch(choice)
        {
            case 1:
            {
                if (choice == 1) 
                {
                    std::string name {};
                    std::cout << "Enter Account Holder Name: " << std::endl;
                    std::cin.ignore();
                    std::getline(std::cin >> std::ws, name);

                    int accNum {};
                    std::cout << "Enter Account Number: " << std::endl;
                    std::cin >> accNum;

                    double initialBalance {};
                    std::cout << "Enter Initial Balance: " << std::endl;
                    std::cin >> initialBalance;

                    accounts.push_back(BankAccount(name, accNum, initialBalance));
                    std::cout << "Account created successfully!\n" << std::endl;
                }
                break;
            }
            
            case 2:
            {
                if (choice == 2) 
                {
                    int accNum {};
                    std::cout << "Enter Account Number: " << std::endl;
                    std::cin >> accNum;

                    double amount {};
                    bool found = false;

                    for (auto &acc : accounts) 
                    {
                        if (acc.getAccountNumber() == accNum) 
                        {
                            std::cout << "Enter Deposit Amount: " << std::endl;
                            std::cin >> amount;
                            acc.deposit(amount);
                            found = true;
                            break;
                        }
                    }

                    if (!found) 
                    {
                        std::cout << "Account not found!\n" << std::endl;
                    }
                }
                break;
            }

            case 3:
            {
                if (choice == 3) 
                {
                    int accNum {};

                    std::cout << "Enter Account Number: " << std::endl;
                    std::cin >> accNum;

                    double amount {};
                    bool found = false;

                    for (auto &acc : accounts) 
                    {
                        if (acc.getAccountNumber() == accNum) 
                        {
                            std::cout << "Enter Withdrawal Amount: " << std::endl;
                            std::cin >> amount;
                            acc.withdraw(amount);
                            found = true;
                            break;
                        }
                    }

                    if (!found) 
                    {
                        std::cout << "Account not found!\n" << std::endl;
                    }
                }
                break;
            }

            case 4:
            {
                if (choice == 4) 
                {
                    int accNum {};
                    std::cout << "Enter Account Number: " << std::endl;
                    std::cin >> accNum;
                    bool found = false;

                    for (auto &acc : accounts) 
                    {
                        if (acc.getAccountNumber() == accNum) 
                        {
                            acc.displayAccount();
                            found = true;
                            break;
                        }
                    }

                    if(!found) 
                    {
                        std::cout << "Account not found!\n" << std::endl;
                    }
                }
                break;
            }

            case 5:
            {
                if (choice == 5) 
                {
                    std::cout << "Exiting the system. Thank you!\n" << std::endl;
                    break;
                } 
            }

            default: 
            {
                std::cout << "Invalid choice! Please try again.\n" << std::endl;
            }
        }
    }
    return 0;
}