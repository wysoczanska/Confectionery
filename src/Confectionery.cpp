#include <iostream>
#include <vector>
#include "../include/Confectionery.h"
//#define _DEBUG
#include "../include/Cart.h"
#include "../include/muffinTest.h"
#include"../include/CartTest.h"
#include"../include/ConfectioneryTest.h"

using namespace std;

Confectionery::Confectionery(vector<Muffin> muffins_m, vector<Cookie> cookies_m)
{
    #ifdef _DEBUG
    cout<<"Wywolany konstruktor klasy Confectionery"<<endl;
    cout<<""<<endl;
    #endif // DEBUG
    cookies=cookies_m;
    muffins=muffins_m;
}
void Confectionery::show()
{
    cout<<"Today we offer: "<<endl;
    cout<<""<<endl;
    showProducts(cookies);
    cout<<""<<endl;
    showProducts(muffins);
}


void Confectionery::glutenFreeProducts (ProductsCart cart)
{
//    cout<<"Gluten free options in your cart"<<endl;
//    int glutenFreeCounter=0;
//    for( std::vector<Cookie>::iterator it = cart.cookies.begin(); it!=cart.cookies.end(); ++it)
//    {
//        if(it->GetGluten()==true){
//            cout<< it->GetName()<<", "<<it->GetDescription()<<endl;
//            glutenFreeCounter++;
//        }
//    }
//    cout<<"Total: "<<glutenFreeCounter<<endl;
}
Confectionery::Confectionery()
{
    #ifdef _DEBUG
    cout<<"Wywolany konstruktor klasy Confectionery"<<endl;
    cout<<""<<endl;
    #endif // DEBUG;
    cookies=vector<Cookie>{};
    muffins=vector<Muffin>{};
}
int Confectionery::getCounter(string objectType)
{
    if(objectType=="cookie"){return cookiesCounter;}
    if(objectType=="muffin"){return muffinsCounter;}
    if(objectType=="cart"){return cartsCounter;}

}
int Confectionery::cookiesCounter=0;
int Confectionery::muffinsCounter=0;
int Confectionery::cartsCounter=0;

//ProductsCart Confectionery::addToCart(Product &productToCart, double amount, ProductsCart cart)
//{
//    //Product productToCart=Product(product,amount);//creating a new object of the given class by copy constructor - with the amount given
//    cart+productToCart; //adding an object to cart
//    productToCart-product;//updating the amount of the give product left in stock
//    return cart;
//}



Confectionery::~Confectionery()
{
    #ifdef _DEBUG
    cout<<"Wywolany destruktor klasy Confectionery"<<endl;
    cout<<""<<endl;
    #endif // DEBUG
    //dtor
}

