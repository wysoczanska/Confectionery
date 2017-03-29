#include <iostream>
#include <vector>
#include "../include/Confectionery.h"
#define _DEBUG
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
    cout<<"Products in cart:"<<endl;
    cout<<""<<endl;
    cout<<"Cookies:"<<endl;
    for(std::vector<Cookie>::iterator it = cookies.begin(); it!=cookies.end(); ++it)
    {
        cout<<it->name<<", "<<it->amount<<endl;
    }
    cout<<"Muffins:"<<endl;
    for(std::vector<Muffin>::iterator it = muffins.begin(); it!=muffins.end(); ++it)
    {
        cout<<it->name<<", "<<it->quantity<<endl;
    }

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

Cart Confectionery::sale()
{
    Cart *cart=new Cart();
    cartsCounter++;
    #ifdef _DEBUG
    cout<<"Object of class Cart created automatically"<<endl;
    cout<<""<<endl;
    int cnt=getCounter("cart");
    cout<<"carts objects counter: "<<cnt<<endl;
    cout<<""<<cnt<<endl;
    #endif // DEBUG
    return *cart;



}
Cart Confectionery::addToCart(Cookie cookieToCart, Cart& cart1)
{
    cart1+cookieToCart;
    return cart1;
}
Cart Confectionery::addToCart(Muffin muffinToCart, Cart& cart1)
{
    cart1+muffinToCart;
    return cart1;
}

Confectionery::~Confectionery()
{
    #ifdef _DEBUG
    cout<<"Wywolany destruktor klasy Confectionery"<<endl;
    cout<<""<<endl;
    #endif // DEBUG
    //dtor
}
int main()
{
    muffinTest test1;
    test1.run();
    CartTest cartTest;
    cartTest.run();
    ConfectioneryTest test3;
    test3.run();


    return 0;

}
