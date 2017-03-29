#include"../include/Cookie.h"
#define _DEBUG
#include <iostream>

Cookie::Cookie(string name, string description, float pricePerKg, float amount)
{
    #ifdef _DEBUG
    cout<< "Wywolany konstruktor klasy Cookie" <<endl;
    cout<<""<<endl;
    #endif // DEBUG
        SetDescription(description);
        SetName(name);
        SetPrice(pricePerKg);
        SetAmount(amount);
}
Cookie::Cookie()
{
}
Cookie::Cookie(Cookie &cookie, float quantity_m)
{
    #ifdef _DEBUG
    cout<< "Wywolany konstruktor kopiujacy klasy Cookie" <<endl;
    cout<<""<<endl;
    #endif // DEBUG
    description=cookie.description;
    name=cookie.name;
    pricePerKg=cookie.pricePerKg;
    amount=quantity_m;

}
void Cookie::operator-(float quantity_m)
{
    if(quantity_m<=amount)
    {
        int temp=amount;
        amount=temp-quantity_m;
    }else
    {
        cerr<<"Unfortunatelty, we can't satisfy your sweet tooth! We only have: "<<amount<<"kg of cookies left."<<endl;
    }

}
void Cookie::SetName(string m_name)
{
    name=m_name;
}
void Cookie::SetDescription(string m_description)
{
    description=m_description;
}
void Cookie::SetPrice(float price)
{
    pricePerKg=price;
}
void Cookie::SetAmount(float m_amount)
{
    amount=m_amount;
}

Cookie::~Cookie()
{
     #ifdef _DEBUG
    cout<<"Wywolany destruktor klasy Cookie"<<endl;
    cout<<""<<endl;
    #endif // DEBUG
}
