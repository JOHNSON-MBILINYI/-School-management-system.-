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
