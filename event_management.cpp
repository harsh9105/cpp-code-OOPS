/*#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Base Event class
class Event {
protected:
    string eventName;
    int eventID;
    int capacity;
public:
    Event(string name, int id, int cap) : eventName(name), eventID(id), capacity(cap) {}

    virtual void displayEventDetails() const = 0; // Pure virtual function

    string getName() const {
        return eventName;
    }

    int getID() const {
        return eventID;
    }

    int getCapacity() const {
        return capacity;
    }

    void bookEvent() {
        if (capacity > 0) {
            capacity--;
            cout << "Event booked successfully!" << endl;
        } else {
            cout << "Sorry, event is fully booked." << endl;
        }
    }

    void cancelBooking() {
        capacity++;
        cout << "Booking canceled successfully." << endl;
    }
};

// Concert subclass inheriting from Event
class Concert : public Event {
private:
    string artistName;
public:
    Concert(string name, int id, int cap, string artist) : Event(name, id, cap), artistName(artist) {}

    void displayEventDetails() const override {
        cout << "Concert Name: " << eventName << endl;
        cout << "Event ID: " << eventID << endl;
        cout << "Artist: " << artistName << endl;
        cout << "Capacity: " << capacity << endl;
    }
};

// Conference subclass inheriting from Event
class Conference : public Event {
private:
    string speakerName;
public:
    Conference(string name, int id, int cap, string speaker) : Event(name, id, cap), speakerName(speaker) {}

    void displayEventDetails() const override {
        cout << "Conference Name: " << eventName << endl;
        cout << "Event ID: " << eventID << endl;
        cout << "Speaker: " << speakerName << endl;
        cout << "Capacity: " << capacity << endl;
    }
};

// User class for authentication
class User {
private:
    string username;
    string password;
    vector<Event*> bookedEvents;
public:
    User(string uname, string pwd) : username(uname), password(pwd) {}

    bool authenticate(string uname, string pwd) const {
        return (username == uname && password == pwd);
    }

    void bookEvent(Event* event) {
        event->bookEvent();
        bookedEvents.push_back(event);
    }

    void cancelBooking(Event* event) {
        event->cancelBooking();
        // Remove event from bookedEvents vector
        auto it = find(bookedEvents.begin(), bookedEvents.end(), event);
        if (it != bookedEvents.end()) {
            bookedEvents.erase(it);
        }
    }

    void displayBookedEvents() const {
        if (bookedEvents.empty()) {
            cout << "No events booked yet." << endl;
        } else {
            cout << "Booked Events:" << endl;
            for (Event* event : bookedEvents) {
                event->displayEventDetails();
                cout << endl;
            }
        }
    }
};

int main() {
    // Sample usage of the Event Management System
    Concert c1("Rock Fest", 1, 100, "Linkin Park");
    Conference conf1("Tech Summit", 2, 50, "Elon Musk");

    // Creating a user
    User user("username", "password");

    // Authentication
    string uname, pwd;
    cout << "Enter username: ";
    cin >> uname;
    cout << "Enter password: ";
    cin >> pwd;

    if (user.authenticate(uname, pwd)) {
        cout << "Authentication successful!" << endl;
        bool isLoggedIn = true;

        while (isLoggedIn) {
            int choice;
            cout << "1. Book Event" << endl;
            cout << "2. View Booked Events" << endl;
            cout << "3. Cancel Booking" << endl;
            cout << "4. Logout" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    // Display available events and let user choose
                    c1.displayEventDetails(); // Displaying concert details as an example
                    user.bookEvent(&c1);
                    break;
                case 2:
                    user.displayBookedEvents();
                    break;
                case 3:
                    user.cancelBooking(&c1); // Cancelling booking of concert as an example
                    break;
                case 4:
                    isLoggedIn = false;
                    cout << "Logged out successfully." << endl;
                    break;
                default:
                    cout << "Invalid choice. Try again." << endl;
                    break;
            }
        }
    } else {
        cout << "Authentication failed. Invalid username or password." << endl;
    }

    return 0;
}
*/

// #include <iostream>
// #include <vector>
// #include <string>
// #include <map>

// using namespace std;

// class Event {
// public:
//     virtual void display() = 0;
//     virtual string getType() = 0;
//     string name;
//     int totalSeats;
//     int bookedSeats;

//     Event(string n, int seats) : name(n), totalSeats(seats), bookedSeats(0) {}
//     bool bookSeat() {
//         if (bookedSeats < totalSeats) {
//             bookedSeats++;
//             return true;
//         }
//         return false;
//     }
//     void cancelSeat() {
//         if (bookedSeats > 0) {
//             bookedSeats--;
//         }
//     }
// };

// class Concert : public Event {
// public:
//     Concert(string n, int seats) : Event(n, seats) {}
//     void display() override {
//         cout << "Concert: " << name << ", Seats available: " << (totalSeats - bookedSeats) << endl;
//     }
//     string getType() override {
//         return "Concert";
//     }
// };

// class Conference : public Event {
// public:
//     Conference(string n, int seats) : Event(n, seats) {}
//     void display() override {
//         cout << "Conference: " << name << ", Seats available: " << (totalSeats - bookedSeats) << endl;
//     }
//     string getType() override {
//         return "Conference";
//     }
// };

// class User {
// public:
//     string username;
//     string password;
//     vector<Event*> bookedEvents;

//     User(string u, string p) : username(u), password(p) {}
// };

// class EventManagementSystem {
// private:
//     map<string, User*> users;
//     User* currentUser;
//     vector<Event*> events;

// public:
//     EventManagementSystem() : currentUser(nullptr) {
//         // Adding some default events
//         events.push_back(new Concert("Rock Concert", 100));
//         events.push_back(new Conference("Tech Conference", 200));
//     }

//     void registerUser(string username, string password) {
//         if (users.find(username) == users.end()) {
//             users[username] = new User(username, password);
//             cout << "User registered successfully.\n";
//         } else {
//             cout << "Username already exists.\n";
//         }
//     }

//     bool loginUser(string username, string password) {
//         if (users.find(username) != users.end() && users[username]->password == password) {
//             currentUser = users[username];
//             cout << "Login successful.\n";
//             return true;
//         } else {
//             cout << "Invalid credentials.\n";
//             return false;
//         }
//     }

//     void logoutUser() {
//         currentUser = nullptr;
//         cout << "Logged out successfully.\n";
//     }

//     void bookEvent(int eventIndex) {
//         if (currentUser && eventIndex >= 0 && eventIndex < events.size()) {
//             if (events[eventIndex]->bookSeat()) {
//                 currentUser->bookedEvents.push_back(events[eventIndex]);
//                 cout << "Event booked successfully.\n";
//             } else {
//                 cout << "No seats available.\n";
//             }
//         } else {
//             cout << "Invalid event index or user not logged in.\n";
//         }
//     }

//     void viewBookedEvents() {
//         if (currentUser) {
//             cout << "Booked Events for " << currentUser->username << ":\n";
//             for (Event* e : currentUser->bookedEvents) {
//                 e->display();
//             }
//         } else {
//             cout << "User not logged in.\n";
//         }
//     }

//     void cancelBooking(int eventIndex) {
//         if (currentUser && eventIndex >= 0 && eventIndex < currentUser->bookedEvents.size()) {
//             currentUser->bookedEvents[eventIndex]->cancelSeat();
//             currentUser->bookedEvents.erase(currentUser->bookedEvents.begin() + eventIndex);
//             cout << "Booking cancelled.\n";
//         } else {
//             cout << "Invalid event index or user not logged in.\n";
//         }
//     }

//     void displayEvents() {
//         cout << "Available Events:\n";
//         for (int i = 0; i < events.size(); i++) {
//             cout << i << ". ";
//             events[i]->display();
//         }
//     }
// };

// int main() {
//     EventManagementSystem system;
//     int choice;

//     while (true) {
//         if (system.loginUser("admin", "admin")) {
//             break;
//         }
//         cout << "Please log in to continue:\n1. Register\n2. Login\n3. Exit\n";
//         cin >> choice;
//         if (choice == 1) {
//             string username, password;
//             cout << "Enter username: ";
//             cin >> username;
//             cout << "Enter password: ";
//             cin >> password;
//             system.registerUser(username, password);
//         } else if (choice == 2) {
//             string username, password;
//             cout << "Enter username: ";
//             cin >> username;
//             cout << "Enter password: ";
//             cin >> password;
//             system.loginUser(username, password);
//         } else if (choice == 3) {
//             break;
//         }
//     }

//     while (true) {
//         cout << "1. Book Event\n2. View Booked Events\n3. Cancel Booking\n4. Logout\n5. Exit\n";
//         cin >> choice;
//         if (choice == 1) {
//             system.displayEvents();
//             int eventIndex;
//             cout << "Enter event index to book: ";
//             cin >> eventIndex;
//             system.bookEvent(eventIndex);
//         } else if (choice == 2) {
//             system.viewBookedEvents();
//         } else if (choice == 3) {
//             system.viewBookedEvents();
//             int eventIndex;
//             cout << "Enter booked event index to cancel: ";
//             cin >> eventIndex;
//             system.cancelBooking(eventIndex);
//         } else if (choice == 4) {
//             system.logoutUser();
//             break;
//         } else if (choice == 5) {
//             break;
//         }
//     }

//     return 0;
// }
