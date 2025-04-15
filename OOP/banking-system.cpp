#include <iostream>

using namespace std;

class BankAccount
{
protected:
    double accountNumber, balance;
    string accountHolderName;

public:
    BankAccount()
    {
        this->accountHolderName = "";
        this->accountNumber = 0;
        this->balance = 0;
    }

    void createAccount()
    {
        cin.ignore();

        cout << "Enter Account Holder Name: ";
        getline(cin, this->accountHolderName);

        cout << "Enter Account Number: ";
        cin >> this->accountNumber;

        cout << "\n---------------------------\n";
        cout << "Account Created Succesfully" << endl;
        cout << "Account Holder: " << this->accountHolderName << endl;
        cout << "Account Number: " << this->accountNumber << endl;
        cout << "Current Balance: " << this->balance;
        cout << "\n---------------------------\n";
    }

    double getAccountNumber()
    {
        return this->accountNumber;
    }

    void deposit()
    {
        double amount;

        cout << "Enter amount to deposit: ";
        cin >> amount;

        this->balance += amount;

        cout << "\n---------------------------\n";
        cout << "Amount Deposited Successfully." << endl;
        cout << "New Balance: " << this->balance;
        cout << "\n---------------------------\n";
    }

    void withdraw()
    {
        double amount;

        cout << "Enter amount to withdraw: ";
        cin >> amount;

        this->balance -= amount;

        cout << "\n---------------------------\n";
        cout << "Amount Withdrawn Successfully." << endl;
        cout << "New Balance: " << this->balance;
        cout << "\n---------------------------\n";
    }

    void getAccountInfo()
    {
        cout << "\n---------------------------\n";
        cout << "Account Holder: " << this->accountHolderName << endl;
        cout << "Account Number: " << this->accountNumber << endl;
        cout << "Current Balance: " << this->balance;
        cout << "\n---------------------------\n";
    }
};

class SavingsAccount : public BankAccount
{
private:
    int interestRate = 5;

public:
    double calculateInterest()
    {
        double interestAmt;
        int time;

        cout << "Enter time period(years): ";
        cin >> time;

        interestAmt = ((this->balance * interestRate * time) / 100);

        return interestAmt;
    }
};

class CurrentAccount : public BankAccount
{
private:
    double overdraftLimit = 250000;

public:
    bool checkOverdraft(double amount)
    {
        return (amount > overdraftLimit);
    }
};


int main()
{
    int choice;

    SavingsAccount savingsAccount[3];
    CurrentAccount currentAccount[3];

    do
    {
        cout << "1. Create Savings Account" << endl;
        cout << "2. Create Current Account" << endl;
        cout << "3. Create FD" << endl;
        cout << "4. View Account Details" << endl;
        cout << "5. Deposit Money" << endl;
        cout << "6. Withdraw Money" << endl;
        cout << "7. Calculate Interest" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice(1-8): ";

        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int i = 0;

            savingsAccount[i].createAccount();
            i++;

            break;
        }
        case 2:
        {
            int i = 0;

            currentAccount[i].createAccount();
            i++;

            break;
        }
        case 3:
        {

            break;
        }
        case 4:
        {
            double accountNumber;
            bool accountFound;
            string accountType;

            cout << "Enter account number: ";
            cin >> accountNumber;

            for (int i = 0; i < 3; i++)
            {
                if ((savingsAccount->getAccountNumber()) == accountNumber)
                {
                    accountType = "savingsAccount";
                    accountFound = true;
                }
                else if (currentAccount->getAccountNumber() == accountNumber)
                {
                    accountType = "currentAccount";
                    accountFound = true;
                }
            }

            if (accountType == "savingsAccount")
            {
                savingsAccount->getAccountInfo();
            }
            else if (accountType == "currentAccount")
            {
                currentAccount->getAccountInfo();
            }

            if (!accountFound)
            {
                cout << "No account found." << endl;
            }

            break;
        }
        case 5:
        {
            double accountNumber;
            bool accountFound;
            string accountType;

            cout << "Enter account number: ";
            cin >> accountNumber;

            for (int i = 0; i < 3; i++)
            {
                if ((savingsAccount->getAccountNumber()) == accountNumber)
                {
                    accountType = "savingsAccount";
                    accountFound = true;
                }
                else if (currentAccount->getAccountNumber() == accountNumber)
                {
                    accountType = "currentAccount";
                    accountFound = true;
                }
            }

            if (accountType == "savingsAccount")
            {
                savingsAccount->deposit();
            }
            else if (accountType == "currentAccount")
            {
                currentAccount->deposit();
            }

            if (!accountFound)
            {
                cout << "No account found." << endl;
            }

            break;
        }
        case 6:
        {
            double accountNumber;
            bool accountFound;
            string accountType;

            cout << "Enter account number: ";
            cin >> accountNumber;

            for (int i = 0; i < 3; i++)
            {
                if ((savingsAccount->getAccountNumber()) == accountNumber)
                {
                    accountType = "savingsAccount";
                    accountFound = true;
                }
                else if (currentAccount->getAccountNumber() == accountNumber)
                {
                    accountType = "currentAccount";
                    accountFound = true;
                }
            }

            if (accountType == "savingsAccount")
            {
                savingsAccount->withdraw();
            }
            else if (accountType == "currentAccount")
            {

                // if (currentAccount->checkOverdraft())

            }

            if (!accountFound)
            {
                cout << "No account found." << endl;
            }

            break;
        }
        case 7:
        {
            double interest = savingsAccount->calculateInterest();

            cout << "\n---------------------------\n";
            cout << "Interest Amount: " << interest;
            cout << "\n---------------------------\n";

            break;
        }
        }

    } while (choice != 8);

    return 0;
}