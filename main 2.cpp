#include <iostream>
#include <limits>

using namespace std;

int calculator_plus (); // проотипы

int calculator_minus ();

int calculator_multiply ();

int calculator_divide ();


bool isNumberValid();

int main () {
	int choice;
	cout << "Choose with you want to do. Please enter a number" << endl;
	cout << "1 - plus, 2 - minus, 3 - multiply, 4 - divide" << endl;
	cin >> choice;
	switch (choice) {
		case 1:
			cout << "Result: " << calculator_plus() << endl;
			break;
		case 2:
			cout << "Result: " << calculator_minus() << endl;
			break;
		case 3:
			cout << "Result: " << calculator_multiply() << endl;
			break;
		case 4:
			cout << "Result: " << calculator_divide() << endl;
			break;
	
	}
	return 0;
}


int calculator_plus() {
    int a, b;
    cout << "Enter a number for variable a: " << endl;
    cin >> a;
    if (!isNumberValid()) {
        cout << "Invalid input for a!" << endl;
        return 0;
    }
    cout << "Enter a number for variable b: " << endl;
    cin >> b;
    if (!isNumberValid()) {
        cout << "Invalid input for b!" << endl;
        return 0;
    }
    return a + b;
}

int calculator_minus() {
    int a, b;
    cout << "Enter a number for variable a: " << endl;
    cin >> a;
    if (!isNumberValid()) {
        cout << "Invalid input for a!" << endl;
        return 0;
    }
    cout << "Enter a number for variable b: " << endl;
    cin >> b;
    if (!isNumberValid()) {
        cout << "Invalid input for b!" << endl;
        return 0;
    }
    return a - b;
}

int calculator_multiply() {
    int a, b;
    cout << "Enter a number for variable a: " << endl;
    cin >> a;
    if (!isNumberValid()) {
        cout << "Invalid input for a!" << endl;
        return 0;
    }
    cout << "Enter a number for variable b: " << endl;
    cin >> b;
    if (!isNumberValid()) {
        cout << "Invalid input for b!" << endl;
        return 0;
    }
    return a * b;
}

int calculator_divide() {
    int a, b;
    cout << "Enter a number for variable a: " << endl;
    cin >> a;
    if (!isNumberValid()) {
        cout << "Invalid input for a!" << endl;
        return 0;
    }
    cout << "Enter a number for variable b: " << endl;
    cin >> b;
    if (!isNumberValid()) {
        cout << "Invalid input for b!" << endl;
        return 0;
    }
    if (b != 0) {
        return a / b;
    } else {
        cout << "Error: Division by zero is not allowed." << endl;
        return 0;
    }
}

bool isNumberValid() {
    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return false;
    }
    return true;
}
