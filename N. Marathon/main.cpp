#include <iostream>
using namespace std;

int main() {
    long long int t, a, b, c, d;
    int faster;

    cin >> t;

    for(int i = 0; i<t ;i++){
        faster = 0;
        cin >> a >> b >> c >> d;
        if(b > a){
            faster++;
        }
        if(c > a){
            faster++;
        }
        if(d > a){
            faster++;
        }
        cout << faster << endl;
    }
    return 0;
}
