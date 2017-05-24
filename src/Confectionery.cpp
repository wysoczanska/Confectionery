#include <iostream>
#include <vector>
#include "../include/Confectionery.h"
//#define _DEBUG
#include "../include/Cart.h"
#include "../include/muffinTest.h"
#include"../include/CartTest.h"
#include"../include/ConfectioneryTest.h"

using namespace std;

void Confectionery::show()
{
    cout<<"Today we offer: "<<endl;
    cout<<""<<endl;
    showProducts(cookies);
    cout<<""<<endl;
    showProducts(muffins);
    cout<<""<<endl;
    showProducts(cupcakes);
}

void Confectionery::Sale()
{
    ProductsCart *productsCart=new ProductsCart();
    this->show();
    int input=1;
    while (input!=0){
            cout<<"Type -> 0 to checkout\nFor Cookies type -> 1\nFor Muffins type -> 2\nFor Cupcakes type ->3\nTo see what's already in your sweet cart type ->4\n"<<endl;
            cin>>input;
        int prodInd;
        switch(input)
        {

        case 1:

            cout<<"type product index: ";
            cin>>prodInd;
            double quant;
            cout<<"type quantity: "<<endl;
            cin>>quant;

            *productsCart=this->addToCart(cookies.at(prodInd-1),quant, *productsCart);
            cout<<"\nAdded: "<<cookies.at(prodInd)<<endl;

        case 2:

            cout<<"type product index: ";
            cin>>prodInd;
            int amount;
            cout<<"type quantity: "<<endl;
            cin>>amount;

            *productsCart=this->addToCart(muffins.at(prodInd-1),amount, *productsCart);
            cout<<"\nAdded: "<<cookies.at(prodInd)<<endl;

        case 3:

            cout<<"type product index: ";
            cin>>prodInd;
            int amnt;
            cout<<"type quantity: "<<endl;
            cin>>amnt;

            *productsCart=this->addToCart(muffins.at(prodInd-1),amnt, *productsCart);
            cout<<"\nAdded: "<<cupcakes.at(prodInd)<<endl;

        case 4:
            productsCart->ShowCart();

        case 0:
            cout<<"Checkout\n"<<endl;
            this->Checkout(*productsCart);
        }

    }

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

