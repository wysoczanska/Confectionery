#include "../include/ProductsCart.h"

ProductsCart::ProductsCart()
{
    totalPrice=0;
}

ProductsCart::~ProductsCart()
{
    //dtor
}
//void ProductsCart::operator+(Product product)
//{
//    cart.push_back(product);
//    totalPrice=totalPrice+product.GetTotalPrice();
//}

double ProductsCart::GetTotalPrice()
{
    return totalPrice;
}

void ProductsCart::ShowCart()
{
    cout<<"\nProducts in cart: \n"<<endl;
    for(std::vector<Product*>::iterator it = cart.begin(); it!=cart.end(); ++it)
    {
        std::cout<<(*it)->GetName()<<", "<<(*it)->GetDescription()<<endl;
    }
    if (cart.begin()==cart.end())
    {
        cout<<"Empty :("<<endl;
    }
    cout<<"Total Price: "<<GetTotalPrice()<<endl;

};
void ProductsCart::glutenFreeProducts ()
{
    cout<<"Gluten free options in your cart"<<endl;
    int glutenFreeCounter=0;
    for(std::vector<Product*>::iterator it = cart.begin(); it!=cart.end(); ++it)
    {
        if((*it)->GetGluten()==1){
            cout<< (*it)->GetName()<<", "<<(*it)->GetDescription()<<endl;
            glutenFreeCounter++;
        }
    }
    cout<<"Total: "<<glutenFreeCounter<<endl;
}
