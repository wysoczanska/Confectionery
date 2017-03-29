#include "../include/Cart.h"
#include <vector>
#include<iostream>


Cart::Cart()
{
    vector<Muffin> muffins;
    vector<Cookie> cookies;
    float totalPrice=0;
}

void Cart::operator+(Cookie cookie_s)
{
    cookies.push_back(cookie_s);
    totalPrice=totalPrice+cookie_s.pricePerKg*cookie_s.amount;
}


void Cart::operator+(Muffin muffin_s)
{
    muffins.push_back(muffin_s);
    totalPrice=totalPrice+muffin_s.pricePerUnit*muffin_s.quantity;
}


void Cart::show()
{
    cout<<"Products in cart:"<<endl;
    cout<<""<<endl;
    cout<<"Cookies:"<<endl;
    for(std::vector<Cookie>::iterator it = cookies.begin(); it!=cookies.end(); ++it)
    {
        cout<<it->name<<", "<<it->amount<<endl;
    }
    cout<<"Muffins:"<<endl;
    for(std::vector<Muffin>::iterator it = muffins.begin(); it!=muffins.end(); ++it)
    {
        cout<<it->name<<", "<<it->quantity<<endl;
    }

    cout<<"Total: "<<totalPrice<<endl;
}

Cart::~Cart(){}

