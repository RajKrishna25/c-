#include <iostream>
using namespace std;

int main() {
    // Declare variables to store user input
    string name;
    int age;
    char gender;
    float weight;

    // Take input from the user
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your gender (M/F): ";
    cin >> gender;

    cout << "Enter your weight: ";
    cin >> weight;

    // Display the output
    cout << endl << "User Information:" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Gender: " << gender << endl;
    cout << "Weight: " << weight << endl;

    return 0;
}
