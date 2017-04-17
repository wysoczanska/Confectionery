#include "../include/CartTest.h"
#include"../include/Cart.h"
#include "../include/Cookie.h"
#include <vector>
#include <iostream>

using namespace std;

CartTest::CartTest()
{
    //ctor
}

CartTest::~CartTest()
{
    //dtor
}
void CartTest::run()
{
    cout<<"Running cartTest..."<<endl;
    cout<<""<<endl;

    string input_name="blueberry triple chocolate chip";
    string input_description="Very sweet!";
    float input_pricePerKg=6.99;
    int input_amount=2;
    Cart<Muffin, Cookie> * cart = new Cart<Muffin, Cookie>();

    Cookie *cookie=new Cookie(input_name, input_description, input_pricePerKg, input_amount);
    cout<<"Dynamic object of class Cookie created"<<endl;
    cout<<""<<endl;
    cout<<"Showing cart.."<<endl;
    cart->show();

    cout<<"Buying 1.01 kg of cookies.."<<endl;
    cout<<"Creating an object cookie2 by copy constructor.."<<endl;
    cout<<""<<endl;
    Cookie cookie2=Cookie(*cookie,1.01);
    *cart+cookie2;
    cout<<"Adding to cart"<<endl;
    cout<<"Showing cart..."<<endl;
    cart->show();
    cout<<"Checking out..."<<endl;
    cout<<""<<endl;
    *cookie-cookie2.amount;

    cout<<"Checking the amount left: "<<cookie->amount<<endl;
    if(cookie->amount==input_amount-cookie2.amount){cout<<"OK"<<endl;}


}
