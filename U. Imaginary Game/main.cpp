#include <iostream>
using namespace std;

int main() {
    long long int counter;
    long long int cases, num;

    cin >> cases;

    for(int i = 0; i<cases ;i++){

        counter = 0;
        cin >> num;

        while(true){
            if(num % 2 == 0){
                num /= 2;
                counter++;
            } else if (num % 3 == 0){
                num /= 3;
                counter++;
            } else {
                string winner = (counter % 2 == 0)? "Second" : "First";
                cout << winner << endl;
                break;
            }
        }
    }
    return 0;
}
