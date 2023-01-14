#include <iostream>
using namespace std;
float calculate(char code, int min);
main(){
    char service;
    int minutes;
    float result;
    cout << "Enter service code r or R for regular service and p or P for premium service: ";
    cin >> service;
    cout << "number of minutes service was used: ";
    cin >> minutes;
    result= calculate(service, minutes);
    if(service=='r'|| service=='R'){
        cout<< "service: Regular"<<endl;
    }
    else if(service=='p'|| service=='P'){
        cout<< "service: Premium"<< endl;
    }
    cout << "number of minutes service was used: "<< minutes<<endl;
    cout << "The charges are: "<< result << "$";
}

float calculate(char code,int min){
    float charges;
    char time;
    if(code=='r'|| code =='R'){
        if(min<=50){
            charges=10;
        }
        if(min>50){
            min=min-50;
            charges=10+(min*0.2);
        }

    }
    else if(code=='p'|| code=='P'){
        cout << "Enter d or D for day and n or N for the night: ";
        cin >>time;
        if(time=='d'||time=='D'){
            if(min<=75){
                charges=25;
            }
            if(min>75){
                min=min-75;
                charges=25+(min*0.1);
            }
        }
        else if(time=='n'||time=='N'){
            if(min<=100){
                charges=25;
            }
            if(min>100){
                min=min-100;
                charges=25+(min*0.05);
            }
        }

    }
    return charges;
}