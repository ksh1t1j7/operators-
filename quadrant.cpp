//kshitij yadav 23070123075
#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the value of x and y"<<endl;
    cin>>x>>y;
    if(x>0 && y>0){
        cout<<"The point is in the first quadrant"<<endl;
    }
    else if(x<0 && y>0){
        cout<<"The point is in the second quadrant"<<endl;
    }
    else if(x<0 && y<0){
        cout<<"The point is in the third quadrant"<<endl;
        }
        else if(x>0 && y<0){
        cout<<"The point is in the fourth quadrant"<<endl;

        }
        else{
        cout<<"The point is on the origin"<<endl;
        }
        return 0;
}
 
/*output:Enter the value of x and y
5 6
The point is in the first quadrant*/
