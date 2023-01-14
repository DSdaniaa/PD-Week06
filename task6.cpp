#include <iostream>
using namespace std;
float Studio(string month, int stays);
float Apartment(string month, int stays);
main(){
    int stays;
    string month;
    float priceS, priceA;
    cout << "Enter the month of stay may, june, july, august, september or october: ";
    cin >> month;
    cout << "Enter number of days you stayed: ";
    cin >> stays;
    priceS=Studio(month, stays);
    priceA=Apartment(month,stays);
    cout << "Studio price: "<< priceS << "$"<<endl;
    cout << "Apartment price: "<< priceA << "$"<<endl;

}

float Studio(string month, int stays){
    float price, discount;
    if(month=="may" || month=="october"){
        price=50*stays;
        if(stays>7 && stays<14){
            discount=(5*price)/100;
            price= price-discount;
        }
        if(stays>14){
            discount=(30*price)/100;
            price= price-discount;
        }

    }
    else if(month=="june" || month=="september"){
        price=75.2*stays;
        if(stays>14){
            discount=(20*price)/100;
            price= price-discount;
        }
    }
    else if(month=="july" || month=="august"){
        price=76*stays;
    }
    return price;
}
float Apartment(string month, int stays){
    float price, discount;

    if(month=="may" || month=="october"){
        price=65*stays;
        if(stays>14){
            discount=(10*price)/100;
            price= price-discount;
        }

    }
    else if(month=="june" || month=="september"){
        price=68.7*stays;
        if(stays>14){
            discount=(10*price)/100;
            price= price-discount;
        }

    }
    else if(month=="july" || month=="august"){
        price=77*stays;
        if(stays>14){
            discount=(10*price)/100;
            price= price-discount;
        }

    }
    return price;
}
