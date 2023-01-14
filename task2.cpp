#include <iostream>
using namespace std;
string grade(float percentage);
float percent(float total);
main(){
    string name;
    string grading;
    float percentage, marks1,marks2,marks3,marks4,marks5,total;
    
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter English marks: ";
    cin >> marks1;
    cout << "Enter Maths marks: ";
    cin >> marks2;
    cout << "Enter Chemistry marks: ";
    cin >> marks3;
    cout << "Enter Social Science marks: ";
    cin >> marks4;
    cout << "Enter Biology marks: ";
    cin >> marks5;
    total= marks1+marks2+marks3+marks4+marks5;
    percentage=percent(total);
    grading= grade(percentage);
    cout << "Student name is: "<< name<<endl;
    cout << "Total marks are: "<< total << endl;
    cout << "percentage is: "<< percentage <<"%"<<endl;
    cout << "Grade is: "<< grading <<endl;


}
float percent(float total){
    float result;
    result=(total/500)*100;
    return result;
}
string grade(float percent){
    string grading;
    if(percent<40){
        grading="F";
    }
    if(percent>=40 && percent<50){
        grading="D";
    }
    if(percent>=50 && percent<60){
        grading="C";
    }
    if(percent>=60 && percent<70){
        grading="B";
    }
    if(percent>=70 && percent<80){
        grading="B+";
    }
    if(percent>=80 && percent<90){
        grading="A";
    }
    if(percent>=90 && percent<=100){
        grading="A+";
    }
    return grading;
}