#include <iostream>
using namespace std;

void doPrint(){
    cout << "In doPrint()" << endl;
}

void printValue(int x){
    cout << x << endl;
}

int add(int x, int y){
    return x + y;
}

int multiply(int x, int y){
    return x * y;
}

int main() {
    cout << "Hello, World!\n" << endl; // This is a comment
    /* Here  is a first comment
     * Here is a second line comment
     * This is a multi line comment
     */
    int x;
    int y;
    int z;
    int a;
    y = 4;
    y = 2 + 5;
    x = y;
    x = x;
    x = x + 1;
    cout << x << ":" << y << endl;
    cout << "Enter a number: ";
    cin >> z;
    cout << "You entered " << z << endl;
    cout << "Starting main()" << endl;
    doPrint(); //Interrupts main() by making a function call to doPrint(). main() is the caller.
    printValue(6);
    cout << add(2, 3) << endl;
    cout << multiply(2, 5) << endl;
    cout << add(1, add(2, 3)) << endl;
    cout << "Ending main()" << endl;
    for (int i = 1; i < 20; i++){
        for (int s = 20; s > i; s--){
            cout << " ";
        }
        for (int j = 1; j <= i; j++){
            cout << " $";
        }
        for (int g = 1; g < i; g++){
            cout << "$";
        }
        cout << endl;
    }
    return 0;
}