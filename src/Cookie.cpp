#include"../include/Cookie.h"
//#define _DEBUG
#include <iostream>

Cookie::Cookie(string name, string description, double pricePerKg, float amount=0, bool glutenFree_m=false)
{
    #ifdef _DEBUG
    cout<< "Wywolany konstruktor klasy Cookie" <<endl;
    cout<<""<<endl;
    #endif // DEBUG
        SetDescription(description);
        SetName(name);
        SetPrice(pricePerKg);
        SetAmount(amount);
        SetGluten(glutenFree_m);
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
string Cookie::GetName()
{
    return name;
}
string Cookie::GetDescription()
{
    return description;
}
bool Cookie::GetGluten()
{
    return glutenFree;
}
//void Cookie::operator<<()
//{
//    cout<< "Stan obiektu\n"<<endl;
//    cout<<"Name: "<<GetName()<<endl;
//    cout<<"\nDescription: "<<GetDescription()<<endl;
//    cout<<"\nAmount: "<<GetAmount()<<endl;
//    cout<<"\nPrice per 1 kg: "<<GetPrice()<<endl;
//    cout<<"\nTotalPrice: "<<GetTotalPrice()<<endl;
//    cout<<"\n is gluten free?: "<<GetGluten()<<endl;
//}

void Cookie::operator-(Cookie cookie)
{
    int temp=amount;
    amount=temp-cookie.amount;

}
double Cookie::GetTotalPrice()
{
    return amount*pricePerKg;
}

void Cookie::SetPrice(double price)
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


const double Cookie::GetPrice()
{
    return pricePerKg;
}
const float Cookie::GetAmount()
{
    return amount;
}
