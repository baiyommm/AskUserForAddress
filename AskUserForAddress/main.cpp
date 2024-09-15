#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string street, city, state, zip;
    
    // Ask the user for their address information
    cout << "What is the name of your street: " << endl;
    getline(cin, street);
    
    cout << "What is your city: " << endl;
    getline(cin, city);
    
    cout << "What state do you live in: " << endl;
    getline(cin, state);
    
    cout << "What is your zip code: " << endl;
    cin >> zip;
    
    // Print the formatted address
    cout << street << endl;
    cout << city << ", " << state << ", " << zip << endl;
    
    return 0;
}
