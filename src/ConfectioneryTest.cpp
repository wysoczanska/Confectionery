#include "../include/ConfectioneryTest.h"
#include "../include/Muffin.h"
#include"../include/Confectionery.h"
#include "../include/Cart.h"
#include "../include/Cookie.h"
#include <iostream>
#include <vector>

using namespace std;

ConfectioneryTest::ConfectioneryTest()
{
    //ctor
}

ConfectioneryTest::~ConfectioneryTest()
{
    //dtor
}

void ConfectioneryTest::run()
{
    Confectionery confectionery=Confectionery();
    confectionery.show();
    cout<<"No cookies, no muffins"<<endl;
    cout<<""<<endl;
    cout<<"Delivery!"<<endl;
    Muffin *muffin1= new Muffin("english delight", "very sweet", 3.99, 20);
    confectionery.muffinsCounter++;
    confectionery.muffins.push_back(*muffin1);
    Muffin *muffin2= new Muffin("blueberry heaven", "semi sweet", 2.99, 10);
    confectionery.muffinsCounter++;
    confectionery.muffins.push_back(*muffin2);
    Muffin *muffin3= new Muffin("chocolate choc", "semi sweet", 1.99, 15);
    confectionery.muffinsCounter++;
    confectionery.muffins.push_back(*muffin3);

    int muffinsCnt=confectionery.getCounter("muffin");

    cout<<"Objects of class Muffin created: "<<muffinsCnt<<endl;

    Cookie *cookie1= new Cookie("blueberry", "very sweet", 6.99, 20.9);
    confectionery.cookiesCounter++;
    confectionery.cookies.push_back(*cookie1);
    Cookie *cookie2= new Cookie("triple chocolate chip", "very sweet", 3.99, 15.2);
    confectionery.cookiesCounter++;
    confectionery.cookies.push_back(*cookie2);
    Cookie *cookie3= new Cookie("raspberry white chocolate", "very sweet", 6.01, 20);
    confectionery.cookiesCounter++;
    confectionery.cookies.push_back(*cookie3);
    Cookie *cookie4= new Cookie("chunky nut", "very sweet", 6.20, 11.1);
    confectionery.cookiesCounter++;
    confectionery.cookies.push_back(*cookie4);
    int cookiesCnt=confectionery.getCounter("cookie");
    cout<<"Objects of class Cookies created: "<<cookiesCnt<<endl;
    cout<<""<<endl;
    cout<<"Today we offer: "<<endl;
    confectionery.show();


cout<<"Sale: "<<endl;
    Cart cart=Cart();
    cart.show();
    cout<<""<<endl;
    cout<<"Adding blueberry cookie to cart: "<<endl;
    Cookie cookie11=Cookie(*cookie1,1.11);
    confectionery.addToCart(cookie11,cart);
    *cookie1-cookie11.amount;
    cart.show();

    cout<<""<<endl;
    cout<<"Adding chocolate choc muffin to cart: "<<endl;
    Muffin muffinToCart=Muffin(*muffin3,15);
    confectionery.addToCart(muffinToCart,cart);
    *muffin3-muffinToCart.quantity;
    cart.show();
    cout<<""<<endl;
    cout<<"Checkout: "<<cart.totalPrice<<endl;




}
