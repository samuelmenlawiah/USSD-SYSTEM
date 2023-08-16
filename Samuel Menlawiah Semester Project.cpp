#include <iostream>
#include <string>

using namespace std;

void displayMainMenu() {
    cout << "Welcome to USSD System!" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Recharge" << endl;
    cout << "3. Transfer Money" << endl;
    cout << "4. Exit" << endl;
}

void checkBalance() {
    cout << "Your current balance is $100." << endl;
}

void recharge() {
    cout << "Enter the amount to recharge: ";
    int amount;
    cin >> amount;
    cout << "Recharge successful! Your new balance is $" << 100 + amount << "." << endl;
}

void transferMoney() {
    cout << "Enter the recipient's phone number: ";
    string phoneNumber;
    cin >> phoneNumber;
    cout << "Enter the amount to transfer: ";
    int amount;
    cin >> amount;
    cout << "Transfer of $" << amount << " to " << phoneNumber << " successful!" << endl;
}

int main() {
    int choice;

    do {
        displayMainMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                recharge();
                break;
            case 3:
                transferMoney();
                break;
            case 4:
                cout << "Thank you for using USSD System. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
        
        cout << endl;

    } while (choice != 4);

    return 0;
}


