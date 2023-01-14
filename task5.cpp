#include <iostream>
using namespace std;
float calculateprice(string day, string fruit, float quantity);
main(){
    string day, fruit;
    float quantity;
    float price;
    cout << "Enter the name of the fruit: ";
    cin >> fruit;
    cout << "Enter the day: ";
    cin >> day;
    cout << "Enter the quantity: ";
    cin >> quantity;
    price = calculateprice(day, fruit, quantity);
    cout << "Total price: " << price;

}
float calculateprice(string day, string fruit, float quantity){
    float price;
    if(day=="monday"|| day=="tuesday" || day=="wednesday" || day=="thursday" || day=="friday"){
        if(fruit=="banana"){
            price=quantity*2.5;
        }
        if(fruit=="apple"){
            price=quantity*1.2;
        }
        if(fruit=="orange"){
            price=quantity*0.85;
        }
        if(fruit=="grapefruit"){
            price=quantity*1.45;
        }
        if(fruit=="kiwi"){
            price=quantity*2.7;
        }
        if(fruit=="pineapple"){
            price=quantity*5.5;
        }
        if(fruit=="grapes"){
            price=quantity*3.85;
        }

    }
    else if(day=="saturday" || day=="sunday"){
        if(fruit=="banana"){
            price=quantity*2.7;
        }
        if(fruit=="apple"){
            price=quantity*1.25;
        }
        if(fruit=="orange"){
            price=quantity*0.9;
        }
        if(fruit=="grapefruit"){
            price=quantity*1.6;
        }
        if(fruit=="kiwi"){
            price=quantity*3.0;
        }
        if(fruit=="pineapple"){
            price=quantity*5.6;
        }
        if(fruit=="grapes"){
            price=quantity*4.2;
        }
    }
    return price;
}