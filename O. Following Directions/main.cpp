#include <iostream>
#include <utility>
using namespace std;

int main() {
    int sSize, iterations;
    bool noPass;
    string sDirections;

    pair<int, int> currentLocation;

    cin >> iterations;

    for(int i = 0; i<iterations ;i++){
        noPass = true;
        currentLocation.first = 0;
        currentLocation.second = 0;

        cin >> sSize;
        cin >> sDirections;

        for(int i = 0; i < sSize ;i++){
            if(sDirections[i] == 'U'){
                currentLocation.second += 1;
            } else if (sDirections[i] == 'D'){
                currentLocation.second -= 1;
            } else if (sDirections[i] == 'R'){
                currentLocation.first += 1;
            } else {
                currentLocation.first -= 1;
            }

            if(currentLocation.first == 1 && currentLocation.second == 1){
                noPass = false;
                cout << "Yes" << endl;
            }
        }
        if(noPass){
            cout << "No" << endl;
        }
    }

    return 0;
}
