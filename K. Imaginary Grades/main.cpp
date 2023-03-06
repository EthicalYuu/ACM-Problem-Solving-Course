#include <iostream>
using namespace std;

int main() {
    int exams, biggestDiffIndex;
    long long int biggestDiff, sum = 0;
    cin >> exams;
    int grades[exams];
    int fullGrade[exams];

    for(int i = 0; i < exams ;i++){
        cin >> grades[i];
    }

    for(int i = 0; i < exams ;i++){
        cin >> fullGrade[i];
    }

    for(int i = 0; i < exams ;i++){
        if(fullGrade[i]-grades[i] > biggestDiff){
            biggestDiff = fullGrade[i]-grades[i];
            biggestDiffIndex = i;
        }
    }

    for(int i = 0; i < exams ;i++){
        if(i != biggestDiffIndex){
            sum += (fullGrade[i]-grades[i]);
        }
    }

    cout << sum;
    return 0;
}
