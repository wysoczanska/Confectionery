#include "../include/ProductsCart.h"

ProductsCart::ProductsCart()
{
    totalPrice=0;
}

ProductsCart::~ProductsCart()
{
    //dtor
}
void ProductsCart::operator+(Product product)
{
    cart.push_back(product);
    totalPrice=totalPrice+product.totalPrice;
}

double ProductsCart::GetTotalPrice()
{
    return totalPrice;
}

void ProductsCart::ShowCart()
{
    for(typename std::vector<Product>::iterator it = cart.begin(); it!=cart.end(); ++it)
    {
        std::cout<<it->GetName()<<", "<<it->GetDescription()<<endl;
    }
    if (cart.begin()==cart.end())
    {
        cout<<"Empty :("<<endl;
    }
    cout<<"Total Price: "<<GetTotalPrice()<<endl;

};
