#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    int arr[x][x];
    long long int mul, ans = 0;

    for(int i = 0; i < x ;i++){
        for(int j = 0; j < x ;j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < x ;i++){
        if(i != (x-1-i)){
            mul = arr[i][i] * arr[i][x-1-i];
            ans += mul;
        }
    }

    cout << ans;

    return 0;
}
