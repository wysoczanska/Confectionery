#include "../include/Muffin.h"
#include <string>

using namespace std;

Muffin::Muffin(string name, string description, float pricePerUnit, int quantity)
{
        SetDescription(description);
        SetName(name);
        SetPrice(pricePerUnit);
        SetQuantity(quantity);
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
}

