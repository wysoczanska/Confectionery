#include "../include/ProductsCart.h"
#include "../include/Confectionery.h"
#include "../include/Tests.h"
#include <vector>
#include <iostream>

using namespace std;


Tests::Tests()
{
}

Tests::~Tests()
{
}

void Tests::ProductsCartTest()
{
    Confectionery *confectionery=new Confectionery();
    confectionery->show();
    seed(confectionery);
    confectionery->show();
    ProductsCart *cart=new ProductsCart();
    cout<<confectionery->muffins.at(2).GetName()<<endl;
    *cart=confectionery->addToCart(confectionery->muffins.at(2),1,*cart);

    try
    {
        confectionery->addToCart(confectionery->muffins.at(2),1,*cart);

    }catch(exception ex)
    {

    }

    cart->ShowCart();




}

void Tests::seed(Confectionery *&confectionery)
{
     cout<<"Seeding with some sample data..."<<endl;
        Muffin *muffin1= new Muffin("english delight", "very sweet", 3.99, 20);
        confectionery->muffinsCounter++;
        confectionery->muffins.push_back(*muffin1);
        Muffin *muffin2= new Muffin("blueberry heaven", "semi sweet", 2.99, 10);
        confectionery->muffinsCounter++;
        confectionery->muffins.push_back(*muffin2);
        Muffin *muffin3= new Muffin("chocolate choc", "semi sweet", 1.99, 15);
        confectionery->muffinsCounter++;
        confectionery->muffins.push_back(*muffin3);

        int muffinsCnt=confectionery->getCounter("muffin");

        cout<<"Objects of class Muffin created: "<<muffinsCnt<<", Expected: 3"<<endl;

        Cookie *cookie1= new Cookie("blueberry", "very sweet", 6.99, 20.9, false);
        confectionery->cookiesCounter++;
        confectionery->cookies.push_back(*cookie1);
        Cookie *cookie2= new Cookie("triple chocolate chip", "very sweet", 3.99, 15.2, false);
        confectionery->cookiesCounter++;
        confectionery->cookies.push_back(*cookie2);
        Cookie *cookie3= new Cookie("raspberry white chocolate", "very sweet", 6.01, 20, false);
        confectionery->cookiesCounter++;
        confectionery->cookies.push_back(*cookie3);
        Cookie *cookie4= new Cookie("chunky nut", "very sweet", 6.20, 11.1, true);
        confectionery->cookiesCounter++;
        confectionery->cookies.push_back(*cookie4);
        int cookiesCnt=confectionery->getCounter("cookie");
        cout<<"Objects of class Cookies created: "<<cookiesCnt<<", Expected: 4"<<endl;
        cout<<""<<endl;


}

