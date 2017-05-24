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
void Product::SetGluten(bool m_glutenFree)
{
    glutenFree=m_glutenFree;
}
//double Product::GetTotalPrice()
//{
//    return 0;
//}
string Product::GetName()
{
    return name;
}
string Product::GetDescription()
{
    return description;
}
bool Product::GetGluten()
{
    return glutenFree;
}
