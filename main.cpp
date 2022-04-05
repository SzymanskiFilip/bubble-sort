#include <iostream>
#include <string>


using namespace std;

int main() {

    int number;

    cout << "Welcome to the bubble sort algorithm!" << endl;
    cout << "Input how many numbers you want to sort: " << endl;
    cin >> number;

    int numbers[number];

    for(int i = 0; i < number; i++){
        cout << "Input nr: " << i + 1 << " = ";
        cin >> numbers[i];
    }



    return 0;
}
