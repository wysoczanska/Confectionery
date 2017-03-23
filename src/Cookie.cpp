#include"../include/Cookie.h"

Cookie::Cookie(string name, string description, float pricePerUnit, float amount)
{
        SetDescription(description);
        SetName(name);
        SetPrice(pricePerUnit);
        SetAmount(amount);
}
Cookie::Cookie()
{

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
    amount=m_amount;   //ctor
}

Cookie::~Cookie()
{
    //dtor
}
