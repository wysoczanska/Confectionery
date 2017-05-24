#include "../include/Cupcake.h"
#include <string>


using namespace std;

Cupcake::Cupcake()
{
    //ctor
}
Cupcake::Cupcake(string name, string description, double pricePerUnit, int quantity, bool glutenFree,string cream_m, bool lactoseFree_m)
{
    SetName(name);
    SetDescription(description);
    SetPrice(pricePerUnit);
    SetAmount(quantity);
    SetGluten(glutenFree);
    cream=cream_m;
    lactoseFree=lactoseFree_m;
}
Cupcake::Cupcake(Cupcake &cup, int quantity_m)
{
    #ifdef _DEBUG
    cout<< "Wywolany konstruktor kopiujacy klasy Muffin" <<endl;
    cout<<""<<endl;
    #endif // DEBUG
    description=cup.description;
    name=cup.name;
    pricePerUnit=cup.pricePerUnit;
    amount=quantity_m;
    cream=cup.cream;
    lactoseFree=cup.lactoseFree;
}

Cupcake::~Cupcake()
{
    //dtor
}

string Cupcake::GetCream()
{
    return cream;
}

bool Cupcake::GetLactose()
{
    return lactoseFree;
}
