#include <iostream>
using namespace std;
string position(int x, int y, int h);
main(){
    int h,x,y;
    string result;
    cout << "Enter the value of h: ";
    cin >> h;
    cout << "Enter the x coordinate: ";
    cin >> x;
    cout << "Enter the y coordinate: ";
    cin >> y;
    result=position(x,y,h);
    cout << result;
}
string position(int x, int y, int h){
    string result;
    
    if(((y>0 && y<(1*h)) && (x>0 && x<(3*h))) ||((y>(1*h) && y<(h*4)) && (x>(1*h) && x<(2*h)))){
        result="Inside";
    }
    else if((x==0 && (y>=0 && y<=(1*h))) || (y==(1*h) && (x>=0 && x<=(1*h))) || (x==(1*h) && (y>=(1*h) && y<=(4*h))) || (y==(1*h) && (x>=(1*h)&& x<=(2*h))) || (x==(2*h) && (y>=(1*h) && y<=(4*h)))|| (y==(1*h) && (x>=(2*h) && x<=(3*h))) || (x==(3*h) && (y>=0 && y<=(1*h))) || (y==0 && (x>=0 && x<=(3*h)))){
        result="Border";
    }
    else{
        result="Outside";
    }
    return result;
}