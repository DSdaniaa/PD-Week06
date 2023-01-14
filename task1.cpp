#include <iostream>
using namespace std;
string activity(string temp, string humidity);
main(){
    string temp, humidity, print;
    cout << "Enter if Temperature is warm or cold: ";
    cin >> temp;
    cout << "Enter weather its dry or humid: ";
    cin >> humidity;
    print = activity(temp,humidity);
    cout << print;

}
string activity(string temp, string humidity){
    string print;
    if(temp=="warm" && humidity=="dry"){
        print="Play tennis";
    }
    if(temp=="warm" && humidity=="humid"){
        print="Swim";
    }
    if(temp=="cold" && humidity=="dry"){
        print="Play basketball";
    }
    if(temp=="cold" && humidity=="humid"){
        print="Watch TV";
    }
    return print;
}