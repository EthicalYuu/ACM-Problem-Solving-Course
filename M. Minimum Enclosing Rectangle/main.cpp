#include <iostream>
using namespace std;

int main() {
    long double x, y, result;
    long double minX, minY, maxX, maxY;
    long int pts;

    cin >> pts;

    cin >> x >> y;
    minX = x;
    maxX = x;
    minY = y;
    maxY = y;

    for(int i = 1; i < pts ;i++){
        cin >> x >> y;

        if(x < minX){
            minX = x;
        }

        if(x > maxX){
            maxX = x;
        }

        if(y < minY){
            minY = y;
        }

        if(y > maxY){
            maxY = y;
        }

    }

    long double width = maxX - minX;
    long double height = maxY - minY;
    result = width * height;

    printf("%.6Lf", abs(result));

    return 0;
}
