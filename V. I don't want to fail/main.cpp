#include <iostream>
using namespace std;

int main() {

    long long int min, max, secondMax, iterations, currentVal;

    cin >> iterations;
    cin >> currentVal;

    max = currentVal;
    secondMax = currentVal;
    min = currentVal;


    for(int i = 1; i<iterations ;i++){
        cin >> currentVal;

        if(currentVal >= max){
            secondMax = max;
            max = currentVal;
        } else if (currentVal < min) {
            min = currentVal;
        }

    }

    cout << min << endl << max << endl << secondMax << endl;

    if((secondMax - min)%2 == 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
