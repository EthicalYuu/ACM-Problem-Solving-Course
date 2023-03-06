#include <iostream>
using namespace std;

int main() {
    int n, m, counter = 2;

    cin >> n >> m;

    for(int i = 1; i<=n ;i++){
        for(int j = 1; j<=m ;j++){
            cout << (i+j)*(i+j) << " ";
        }
        cout << endl;
    }


    return 0;
}
