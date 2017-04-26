#include "../include/Muffin.h"
#include <string>
//#define _DEBUG
#include <iostream>

using namespace std;



Muffin::Muffin(string name, string description, float pricePerUnit, int amount)
{
    #ifdef _DEBUG
    cout<<"Wywolany konstruktor klasy Muffin z parametrami:"<<name<<", "<<description<<", "<<pricePerUnit<< ", "<<amount<<endl;
    cout<<""<<endl;
    #endif // DEBUG
        SetDescription(description);
        SetName(name);
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
void Muffin::SetName(string m_name)
{
    name=m_name;
}
void Muffin::SetDescription(string m_description)
{
    description=m_description;
}
void Muffin::SetPrice(float price)
{
    pricePerUnit=price;
}
void Muffin::SetAmount(int m_quanity)
{
    amount=m_quanity;
}


Muffin::~Muffin()
{
    #ifdef _DEBUG
    cout<<"Wywolany destruktor klasy Muffin"<<endl;
    cout<<""<<endl;
    #endif // DEBUG

}
string Muffin::GetName()
{
    return name;
}
string Muffin::GetDescription()
{
    return description;
}
double Muffin::GetPrice()
{
    return pricePerUnit;
}
int Muffin::GetAmount()
{
    return amount;
}

