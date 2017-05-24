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

void Confectionery::Checkout(ProductsCart &cart)
{
    cout<<"Total: "<<cart.GetTotalPrice()<<endl;
    cart.~ProductsCart();

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
    else if(objectType=="muffin"){return muffinsCounter;}
    else if(objectType=="cart"){return cartsCounter;}
    else return 0;


}
int Confectionery::cookiesCounter=0;
int Confectionery::muffinsCounter=0;
int Confectionery::cartsCounter=0;




Confectionery::~Confectionery()
{
    #ifdef _DEBUG
    cout<<"Wywolany destruktor klasy Confectionery"<<endl;
    cout<<""<<endl;
    #endif // DEBUG
    //dtor
}

