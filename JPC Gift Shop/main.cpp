#include <iostream>
using namespace std;

int main() {

    int gifts, cash, cashTemp, p;
    int counter, arrIndex = 0;
    int arr[gifts];
    cin >> gifts >> cash;

    cashTemp = cash;
    for(int i = 0; i < gifts ;i++){
        cin >> p;
        if(cashTemp >= p){
            cashTemp -= p;
            counter++;
        } else {
            if(counter != 0){
                arr[arrIndex] = counter;
            }
            cashTemp = cash;
            counter = 0;
        }
    }

    for(int i = 0; i < gifts ;i++){
        cout << arr[i];
    }

    return 0;
}
