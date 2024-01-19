#include <iostream>
#include <map>

using namespace std; // Avoid using this in larger codebases

int main() {
    // Declare a map with int keys and string values
    map<int, string> myMap;

    // Insert key-value pairs into the map
    myMap[1] = "One";
    myMap[2] = "Two";
    myMap[3] = "Three";
    myMap[4] = "Four";

    // Access values using keys
    cout << "Value at key 2: " << myMap[2] << endl;

    // Check if a key exists in the map
    if (myMap.find(3) != myMap.end()) {
        cout << "Key 3 exists in the map" << endl;
    }
    else{
        cout<< "Key 3 does not exists in the map" << endl;
    }

    // Iterate through the map
    for (const auto& pair : myMap) {
        cout << "Key: " << pair.first << ", Value: " << pair.second << endl;
    }

    return 0;
}
