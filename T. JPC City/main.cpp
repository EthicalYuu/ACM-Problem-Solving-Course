#include <iostream>
using namespace std;

int main() {
    long long int buildings, b, maxB = 0;
    cin >> buildings;

    for(int i = 0; i<buildings;i++){
        cin >> b;
        if(b > maxB){
            maxB = b;
        }
    }

    cout << maxB << endl;
    return 0;
}
