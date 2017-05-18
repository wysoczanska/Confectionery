#include "../include/Product.h"

Product::Product(){}

Product::~Product(){}

void Product::SetName(string m_name)
{
    name=m_name;
}
void Product::SetDescription(string m_description)
{
    description=m_description;
}

string Product::GetName()
{
    return name;
}
string Product::GetDescription()
{
    return description;
}
const bool Product::GetGluten()
{
    return glutenFree;
}
