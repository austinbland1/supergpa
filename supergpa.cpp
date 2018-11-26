#include <iostream>
using namespace std;

int grade1, grade2, grade3;
int sum;
int finalgrade;
int combinedgrade;
int combinedfailgrade;
int bombaclassgrade;

int main()
{
    cout << "Enter your first grade here: ";
    cin >> grade1;

    cout << "Enter your second grade here: ";
    cin >> grade2;

    cout << "Enter your third grade here: ";
    cin >> grade3;

    sum = grade1 + grade2 + grade3;
    finalgrade = sum / 3;

    cout << "This is your final grade: ";
    cout << finalgrade  << endl;

    combinedgrade = finalgrade * 3;

    cout << "This is all points combined: ";
    cout << combinedgrade  << endl;

    combinedfailgrade = combinedgrade - 100;
    bombaclassgrade = combinedfailgrade / 3;

    cout << "This is your grade if you bomb a class: ";
    cout << bombaclassgrade << endl;
}