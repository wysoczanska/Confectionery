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
    double input_pricePerKg=6.99;
    float input_amount=2.0;
    Cart<Muffin, Cookie> *cart = new Cart<Muffin, Cookie>();

    Cookie *cookie=new Cookie(input_name, input_description, input_pricePerKg, input_amount, false);
    cout<<"Showing cart.."<<endl;
    cart->show();

    cout<<"Buying 1.01 kg of cookies.."<<endl;
    cout<<""<<endl;
    Cookie *cookie2=new Cookie(*cookie,1.01);
    cout<<"Adding to cart"<<endl;
    *cart+*cookie2;
    cout<<"Showing cart..."<<endl;
    cart->show();
    cout<<"Checking out..."<<endl;
    cout<<""<<endl;
    cout<<"Checking the amount left: "<<cookie->GetAmount()<<endl;
    *cookie-*cookie2;
    if(cookie->GetAmount()==input_amount-cookie2->GetAmount()){cout<<"OK"<<endl;}


}
