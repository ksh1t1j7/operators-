/*kshitij yadav
23070123075*/
#include <iostream>
using namespace std;
int main() {
     int prn,num;
     cout << "Enter The Number" << endl;
     cin >> prn;
     
     while(prn > 0){
         num = prn % 10;
         prn = prn / 10;
         cout << num;
     }
     return 0;
}
    // output:
    //Enter The Number
//420840
//048024
