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

    for(int j = 0; j < number - 1; j++){
        for(int i = 0; i < number - 1; i++){
            if(numbers[i] > numbers[i+1]){
                int temp = numbers[i+1];
                numbers[i+1] = numbers[i];
                numbers[i] = temp;
            }
        }
    }

    for(int i = 0; i < number; i++){
        cout << numbers[i] << endl;
    }

    return 0;
}
