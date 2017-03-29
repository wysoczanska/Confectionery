#include "../include/Muffin.h"
#include <string>
#define _DEBUG
#include <iostream>

using namespace std;



Muffin::Muffin(string name, string description, float pricePerUnit, int quantity)
{
    #ifdef _DEBUG
    cout<<"Wywolany konstruktor klasy Muffin z parametrami:"<<name<<", "<<description<<", "<<pricePerUnit<< ", "<<quantity<<endl;
    cout<<""<<endl;
    #endif // DEBUG
        SetDescription(description);
        SetName(name);
        SetPrice(pricePerUnit);
        SetQuantity(quantity);
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
    quantity=quantity_m;

}
void Muffin::operator-(int quantity_m)
{
    if(quantity_m<=quantity)
    {
        int temp=quantity;
        quantity=temp-quantity_m;
    }else
    {
        cerr<<"Unfortunately, we can't satisfy your sweet tooth! We only have: "<<quantity<<" muffins left."<<endl;
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
void Muffin::SetQuantity(int m_quanity)
{
    quantity=m_quanity;
}


Muffin::~Muffin()
{
    #ifdef _DEBUG
    cout<<"Wywolany destruktor klasy Muffin"<<endl;
    cout<<""<<endl;
    #endif // DEBUG

}

