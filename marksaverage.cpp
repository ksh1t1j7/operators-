//kshitij yadav 23070123075
#include <iostream>
using namespace std;

int main() {
    int m1, m2, m3, m4;
    float avg;

    cout << "Marks Average" << endl;
    cout << "Enter Marks of Subjects" << endl;
    cin >> m1 >> m2 >> m3 >> m4;

    avg = (m1 + m2 + m3 + m4) / 4.0;  // Use 4.0 to ensure floating-point division
    cout << "Your Average is " << avg << endl;

    if (avg >= 90) {
        cout << "Your grade is A" << endl;
    } else if (avg >= 80) {
        cout << "Your grade is B" << endl;
    } else {
        cout << "Your grade is C" << endl;
    }

    return 0;
}
//output:
//Marks Average
//Enter Marks of Subjects
//99
//99
//97
//20
//Your Average is 78
//Your grade is B
