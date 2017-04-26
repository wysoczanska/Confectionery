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
    cout<<"Seeding with some sample data..."<<endl;
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

    cout<<"Objects of class Muffin created: "<<muffinsCnt<<", Expected: 3"<<endl;

    Cookie *cookie1= new Cookie("blueberry", "very sweet", 6.99, 20.9, false);
    confectionery.cookiesCounter++;
    confectionery.cookies.push_back(*cookie1);
    Cookie *cookie2= new Cookie("triple chocolate chip", "very sweet", 3.99, 15.2, false);
    confectionery.cookiesCounter++;
    confectionery.cookies.push_back(*cookie2);
    Cookie *cookie3= new Cookie("raspberry white chocolate", "very sweet", 6.01, 20, false);
    confectionery.cookiesCounter++;
    confectionery.cookies.push_back(*cookie3);
    Cookie *cookie4= new Cookie("chunky nut", "very sweet", 6.20, 11.1, true);
    confectionery.cookiesCounter++;
    confectionery.cookies.push_back(*cookie4);
    int cookiesCnt=confectionery.getCounter("cookie");
    cout<<"Objects of class Cookies created: "<<cookiesCnt<<", Expected: 4"<<endl;
    cout<<""<<endl;
    confectionery.show();

    //Functionality tests
    Cart<Muffin, Cookie> *cart=new Cart<Muffin, Cookie>();
    cart->show(); //checking an empty instatiated cart
    cout << "Expected: " << 0.0<< endl;
    cout<<""<<endl;
    cout<<"Adding blueberry cookie to cart: "<<endl;
    *cart=confectionery.addToCart(*cookie4,1.11,*cart);
    cart->show();
    cout << "Total price of this cart expected: " << 6.882 << endl;

    *cart=confectionery.addToCart(*cookie1,0.5,*cart);
    cart->show();
    cout << "Total price of this cart expected: " << 10.377 << endl;
    cout<<""<<endl;
    cout<<"Adding chocolate choc muffin to cart: "<<endl;
    *cart=confectionery.addToCart(*muffin3,15,*cart);
    cart->show();
    cout << "Expected: " << 40.227 << endl;
    cout<<""<<endl;
    cout<<"Checkout: "<<cart->totalPrice<<endl;
    cout << "Expected: " << 40.227 << endl;

    confectionery.glutenFreeProducts(*cart);
    cout<<"Expected: 1 gluten free option"<<endl;
}
