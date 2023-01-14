#include <iostream>
using namespace std;
string zodiac(int date, string month);
main(){
    int date;
    string month, sign;
    cout << "Enter your Date of birth: ";
    cin >> date;
    cout << "Enter your Month of birth: ";
    cin >> month;
    sign= zodiac(date,month);
    cout << sign ;

}
string zodiac(int date, string month){
    string result;
    if((month=="march"&& date>=21) || (month=="april" && date<=19)){
        result ="Aries";
    }
    if((month=="april"&& date>=20) || (month=="may" && date<=20)){
        result ="Taurus";
    }
    if((month=="may"&& date>=21) || (month=="june" && date<=20)){
        result ="Gemini";
    }
    if((month=="june"&& date>=21) || (month=="july" && date<=22)){
        result ="Cancer";
    }
    if((month=="july"&& date>=23) || (month=="august" && date<=22)){
        result ="Leo";
    }
    if((month=="august"&& date>=23) || (month=="september" && date<=22)){
        result ="Virgo";
    }
    if((month=="september"&& date>=23) || (month=="october" && date<=22)){
        result ="Libra";
    }
    if((month=="october"&& date>=23) || (month=="november" && date<=21)){
        result ="Scorpio";
    }
    if((month=="november"&& date>=22) || (month=="december" && date<=21)){
        result ="Sagittarius";
    }
    if((month=="december"&& date>=22) || (month=="january" && date<=19)){
        result ="Capricorn";
    }
    if((month=="january"&& date>=20) || (month=="february" && date<=18)){
        result ="Aquarius";
    }
    if((month=="february"&& date>=19) || (month=="march" && date<=20)){
        result ="Pisces";
    }
    return result;
    
}