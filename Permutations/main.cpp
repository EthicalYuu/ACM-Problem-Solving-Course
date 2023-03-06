#include <iostream>
using namespace std;

int main() {
    int n;
    bool exitOuter = false;
    int arr[n];
    cin >> n;
    for(int i = 0; i < n ;i++){
        cin >> arr[i];
    }
    for(int i = 1; i <= n && !exitOuter;i++){
        for(int j = 0; j < n ;j++){
            if(arr[j] == i){
                break;
            }

            if(j == n - 1 && arr[j] != i){
                cout << "No";
                exitOuter = true;
                break;
            }
        }
    }

    if(!exitOuter){
        cout << "Yes";
    }

    return 0;
}