//
//  main.cpp
//  switch program using menue
//
//  Created by Nisha Ramprasath on 27/10/23.
//

#include <iostream>
using namespace std;

int main() {
    cout << "menu\n";
    cout << "1. add\n2. sub\n3. mul\n4. div\n";

    int option;
    cout << "Enter your choice: ";
    cin >> option;
    
    int a, b, c;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch (option) {
        case 1:
            c = a + b;
            break;
        case 2:
            c = a - b;
            break;
        case 3:
            c = a * b;
            break;
        case 4:
            if (b != 0) {
                c = a / b;
            } else {
                cout << "Error: Division by zero" << endl;
                return 1;  // Exit with an error code
            }
            break;
        default:
            cout << "Invalid option" << endl;
            return 1;  // Exit with an error code for an invalid option
    }

    cout << "Result is " << c << endl;
    
    return 0;
}

