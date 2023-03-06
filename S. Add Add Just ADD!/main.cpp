#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long int N, A, B;
    long double i, j;

    cin >> N >> A >> B;

    i = (A + N - 2 * B)/3;
    j = (B + N - 2 * A)/3;


//    cout << j << endl;
//    cout << i << endl;

    if(j < 0 || i < 0){
        cout << "NO";
        return 0;
    }

    if(A + i + 2 * j == N && B + 2 * i + j == N ){
        cout << "YES";
    } else {
        cout << "NO";
    }

//    cout << checker_1;

//    if(checker_1 == 0 && checker_2 == 0){
//        cout << "NO";
//        return 0;
//    }

//    if(int(checker_1) % 3 == 0 && floor(checker_1) == ceil(checker_1) && checker_1 >= 0){
//        if(int(checker_2) % 3 == 0 && floor(checker_2) == ceil(checker_2) && checker_2 >= 0){
//            cout << "YES";
//        } else {
//            cout << "NO";
//        }
//    } else {
//        cout << "NO";
//    }

    return 0;
}
