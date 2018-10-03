#include <iostream>
using namespace std;

void showMenu(){
    cout << "1. Search" << endl;
    cout << "2. View Record" << endl;
    cout << "3. Quit" << endl;
    cout << "Enter Selection" << endl;
}

void processSelection(){
    int input;
    cin >> input;

    switch (input){
        case 1:
            cout << "Searching..." << endl;
            break;
        case 2:
            cout << "Viewing..." << endl;
            break;
        case 3:
            cout << "Quiting..." << endl;
            break;
        default:
            cout << "Please select an item from the menu" << endl;
    }
}

int main() {

    showMenu();
    processSelection();

    return 0;
}