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

void Tests::CupcakeTest()
{
    Cupcake *cup=new Cupcake("salted carmel", "very sweet", 3.99, 10, false,"rose flavored whipped cream", false);
    cout<<*cup<<endl;
    Muffin *muff=cup;
    cout<<"Cupcake as Muffin: "<<endl;
    cout<<*muff<<endl;

    Product *prod=cup;
    cout<<"Cupcake as Product:\n"<<endl;
    cout<<*prod<<endl;

}
void Tests::ConfectioneryTest()
{
    Confectionery *confectionery=new Confectionery();
    confectionery->show();
    seed(confectionery);
    confectionery->show();

    //tworzymy koszyczek
    ProductsCart *cart=new ProductsCart();

    try
    {
        //dodajemy produkty do koszyczka
        //ten jest z bledem bo nie ma nic w wektorze muffinek pod tym indeksem (max3) -> wylapany wyjatek
        *cart=confectionery->addToCart(confectionery->muffins.at(4),1,*cart);

    }catch(exception& ex)
    {
        cerr<<ex.what()<<endl;
    }
    try
    {
        //te sa OK
        *cart=confectionery->addToCart(confectionery->cookies.at(2),1.5, *cart);
        *cart=confectionery->addToCart(confectionery->cupcakes.at(1),1,*cart);

    }catch(exception& ex)
    {
        cerr<<ex.what()<<endl;
    }
    cart->ShowCart();
    cout<<"\nExpected:\nraspberry white chocolate, very sweet \nsalted carmel, very sweet\nTotal Price: 13.005\n\n"<<endl;

    cart->glutenFreeProducts();
    cout<<"Expected: 2\n"<<endl;

}

void Tests::ProductsCartTest()
{
    Muffin *muffin1= new Muffin("english delight", "very sweet", 3.99, 20, false);
    ProductsCart *cart=new ProductsCart();
    cart->ShowCart();
    cout<<"\nExpected:\nEmpty :(\nTotal: 0\n"<<endl;

    //dodanie muffinki do koszyka
    *cart+muffin1;

    cart->ShowCart();

    cout<<"\nExpected:\nenglish delight, very sweet\nTotal Price: 79.8\n"<<endl;

}

void Tests::seed(Confectionery *&confectionery)
{
     cout<<"Seeding with some sample data..."<<endl;
        Muffin *muffin1= new Muffin("english delight", "very sweet", 3.99, 20, false);
        confectionery->muffinsCounter++;
        confectionery->muffins.push_back(*muffin1);
        Muffin *muffin2= new Muffin("blueberry heaven", "semi sweet", 2.99, 10, true);
        confectionery->muffinsCounter++;
        confectionery->muffins.push_back(*muffin2);
        Muffin *muffin3= new Muffin("chocolate choc", "semi sweet", 1.99, 15, true);
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

        Cupcake *cupcake1=new Cupcake("toffie fudge and crisps", "sweet", 4.99, 15, true,"coconut milk based with almonds", true);
        Cupcake *cupcake2=new Cupcake("salted carmel", "very sweet", 3.99, 10, false,"rose flavored whipped cream", false);
        confectionery->cupcakes.push_back(*cupcake1);
        confectionery->cupcakes.push_back(*cupcake2);


}

