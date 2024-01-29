#include <iostream>
using namespace std;

int main() {
    string name;
    int age;
    char gender;
    float weight;

    
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your gender (M/F): ";
    cin >> gender;

    cout << "Enter your weight: ";
    cin >> weight;
    
    cout << endl << "Output" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Gender: " << gender << endl;
    cout << "Weight: " << weight << endl;

    return 0;
}
