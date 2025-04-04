#include <iostream>
#include <vector>
#include <string>

using namespace std;

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
        isBooked = false;
    }
