#include <iostream>
using namespace std;
void checkiflate(int hour, int min,int hour1, int min1);
main(){
    int hours, minutes, arivalhours, arivalminutes;
    cout << "Enter the exam starting time hours: ";
    cin >> hours;
    cout <<"Enter the exam starting time minutes: ";
    cin >> minutes;
    cout << "Enter the student Arival time hours: ";
    cin >> arivalhours;
    cout <<"Enter the student Arival time minutes: ";
    cin >> arivalminutes;
    checkiflate(hours, minutes,arivalhours,arivalminutes);

}
void checkiflate(int hours, int minutes, int arivalhours,int arivalminutes){
    int arival;
    int time;
    int difference;
    time=(hours*60)+minutes;
    arival=(arivalhours*60)+ arivalminutes;
    difference=time-arival;
    if((time>arival) && (difference>0 && difference<=30)){
        cout<< "On Time"<< endl;
        cout<< difference << "minutes before exam";
    }
    else if(time==arival){
        cout << "On Time";
    }
    else if((time>arival) && difference>30){
        cout <<"Early" << endl;
        hours=difference/60;
        minutes=difference%60;
        if(hours==0){
            cout << minutes<< " minutes before the start";
        }
        else {
        cout << hours<< ":"<< minutes <<" hours before the start";
        }


    }
    else if(time<arival){
        difference=arival-time;
        cout << "Late"<<endl;
        hours=difference/60;
        minutes=difference%60;
        if(hours==0){
            cout << minutes<< " minutes after the start";
        }
        else{
        cout << hours<< ":"<< minutes <<" hours after the start";
        }

    }

}
