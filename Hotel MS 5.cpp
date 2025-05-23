#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Class ya Room
class Room {
public:
    int roomNumber;
    string roomType;
    float price;
    bool isBooked;

    Room(int number, string type, float cost) {
        roomNumber = number;
        roomType = type;
        price = cost;
        isBooked = false; // Chumba si booked mwanzoni
    }

    void displayRoom() {
        cout << "Room Number: " << roomNumber
             << ", Type: " << roomType
             << ", Price: $" << price
             << ", Status: " << (isBooked ? "Booked" : "Available") << endl;
    }
};
// Class ya HotelManagement
class HotelManagement {
private:
    vector<Room> rooms;

public:
    // Create: Ongeza chumba kipya
    void addRoom(int number, string type, float cost) {
        Room newRoom(number, type, cost);
        rooms.push_back(newRoom);
        cout << "Room " << number << " has been added successfully." << endl;
    }


    // Read: Onyesha vyumba vyote
    void displayRooms() {
        if (rooms.empty()) {
            cout << "No rooms available in the system." << endl;
            return;
        }

        for (const auto &room : rooms) {
            room.displayRoom();
        }
    }

