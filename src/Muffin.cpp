#include "../include/Muffin.h"
#include <string>
//#define _DEBUG
#include <iostream>

using namespace std;



Muffin::Muffin(string name, string description,double pricePerUnit, int amount, bool glutenFree_m)
{
    #ifdef _DEBUG
    cout<<"Wywolany konstruktor klasy Muffin z parametrami:"<<name<<", "<<description<<", "<<pricePerUnit<< ", "<<amount<<endl;
    cout<<""<<endl;
    #endif // DEBUG
        SetDescription(description);
        SetName(name);
        SetGluten(glutenFree_m);
        SetPrice(pricePerUnit);
        SetAmount(amount);

}

Muffin::Muffin(Muffin &muffin, int quantity_m)
{
    #ifdef _DEBUG
    cout<< "Wywolany konstruktor kopiujacy klasy Muffin" <<endl;
    cout<<""<<endl;
    #endif // DEBUG
    description=muffin.description;
    name=muffin.name;
    pricePerUnit=muffin.pricePerUnit;
    amount=quantity_m;
    //totalPrice=amount*pricePerUnit;

}
void Muffin::operator-(Muffin muffin)
{
    if(muffin.amount<=amount)
    {
        int temp=amount;
        amount=temp-muffin.amount;
    }else
    {
        cerr<<"Unfortunately, we can't satisfy your sweet tooth! We only have: "<<amount<<" muffins left."<<endl;
    }
}
Muffin::Muffin()
{

}

void Muffin::SetPrice(double price)
{
    pricePerUnit=price;
}
void Muffin::SetAmount(int m_quanity)
{
    amount=m_quanity;
}
 double Muffin::GetTotalPrice()
{
    return amount*pricePerUnit;
}


Muffin::~Muffin()
{
    #ifdef _DEBUG
    cout<<"Wywolany destruktor klasy Muffin"<<endl;
    cout<<""<<endl;
    #endif // DEBUG

}
//string Muffin::GetName()
//{
//    return name;
//}
//string Muffin::GetDescription()
//{
//    return description;
//}
double Muffin::GetPrice()
{
    return pricePerUnit;
}
int Muffin::GetAmount()
{
    return amount;
}

