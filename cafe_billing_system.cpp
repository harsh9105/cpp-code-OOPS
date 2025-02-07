#include <iostream>
using namespace std;

int main() {
    int choice, quantity;
    float total = 0.0;

    cout << "************************************" << endl;
    cout << "*                                  *" << endl;
    cout << "*       WELCOME TO OUR CAFE!       *" << endl;
    cout << "*                                  *" << endl;
    cout << "************************************" << endl;
    cout << "          Enjoy Your Meal!          " << endl;
    cout << endl;

    cout << "Here is the menu ! select of foods" << endl;
    cout << "1. Pizza        - Rs 200.00" << endl;
    cout << "2. Burger       - Rs 100.00" << endl;
    cout << "3. Momos        - Rs 80.00" << endl;
    cout << "4. French Fries - Rs 60.00" << endl;
    cout << "5. Dosa         - Rs 150.00" << endl;
    cout << "6. Noodles      - Rs 120.00" << endl;
    cout << "7. Sweets       - Rs 50.00" << endl;
    cout << "8. Coffee       - Rs 40.00" << endl;
    cout << "9. Chai         - Rs 20.00" << endl;

    while (true) {
        cout << "\nEnter the item number to order (or 0 to finish): ";
        cin >> choice;

        if (choice == 0) {
            break; 
        }

        cout << "Enter quantity: ";
        cin >> quantity;

        switch (choice) {
            case 1:
                total += quantity * 200.0;
                cout << "Added " << quantity << " x Pizza to your order.\n";
                break;
            case 2:
                total += quantity * 100.0;
                cout << "Added " << quantity << " x Burger to your order.\n";
                break;
            case 3:
                total += quantity * 80.0;
                cout << "Added " << quantity << " x Momos to your order.\n";
                break;
            case 4:
                total += quantity * 60.0;
                cout << "Added " << quantity << " x French Fries to your order.\n";
                break;
            case 5:
                total += quantity * 150.0;
                cout << "Added " << quantity << " x Dosa to your order.\n";
                break;
            case 6:
                total += quantity * 120.0;
                cout << "Added " << quantity << " x Noodles to your order.\n";
                break;
            case 7:
                total += quantity * 50.0;
                cout << "Added " << quantity << " x Sweets to your order.\n";
                break;
            case 8:
                total += quantity * 40.0;
                cout << "Added " << quantity << " x Coffee to your order.\n";
                break;
            case 9:
                total += quantity * 20.0;
                cout << "Added " << quantity << " x Chai to your order.\n";
                break;
            default:
                cout << "Invalid choice, please try again.\n";
                break;
        }
    }

    cout << "----- Your Bill -----" << endl;
    int rupees = total / 1;
    int paise = (total - rupees) * 100;   
    cout << "Total: Rs" << rupees << "." << paise << endl;

    cout << "Thank you for dining with us! Have a great day!\n";

    return 0;
}