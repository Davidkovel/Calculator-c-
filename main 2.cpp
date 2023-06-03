#include <iostream>
#include <limits>

using namespace std;

int calculator_plus (); // прототипы

int calculator_minus ();

int calculator_multiply ();

int calculator_divide ();

enum operations {Plus=1, Minus, Multiply, Divide};
bool isNumberValid();

int main () {
	int choice;
	cout << "Choose with you want to do. Please enter a operation" << endl;
    cout << "1. Plus\n2. Minus\n3. Multiply\n4. Divide" << endl;
	cin >> choice;
	switch (choice) {
		case Plus:
			cout << "Result: " << calculator_plus() << endl;
			break;
		case Minus:
			cout << "Result: " << calculator_minus() << endl;
			break;
		case Multiply:
			cout << "Result: " << calculator_multiply() << endl;
			break;
		case Divide:
			cout << "Result: " << calculator_divide() << endl;
			break;
		default:
           	cout << "Invalid choice!" << endl;
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
