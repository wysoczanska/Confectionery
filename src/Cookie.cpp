#include"../include/Cookie.h"
//#define _DEBUG
#include <iostream>

Cookie::Cookie(string name, string description, double pricePerKg, float amount, bool glutenFree_m)
{
    #ifdef _DEBUG
    cout<< "Wywolany konstruktor klasy Cookie" <<endl;
    cout<<""<<endl;
    #endif // DEBUG
        SetDescription(description);
        SetName(name);
        SetPrice(pricePerKg);
        SetAmount(amount);
        glutenFree=glutenFree_m;
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
void Cookie::operator-(Cookie cookie)
{
    if(cookie.amount<=amount)
    {
        int temp=amount;
        amount=temp-cookie.amount;
    }else //wjen there's not enough amount of this product left in stock
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

string Cookie::GetName()
{
    return name;
}
string Cookie::GetDescription()
{
    return description;
}
const double Cookie::GetPrice()
{
    return pricePerKg;
}
const float Cookie::GetAmount()
{
    return amount;
}
const bool Cookie::GetGluten()
{
    return glutenFree;
}
