#ifndef CONFECTIONERY_H
#define CONFECTIONERY_H
#include "Muffin.h"
#include "Cookie.h"
#include "Cupcake.h"
#include "Cart.h"
#include "ProductsCart.h"
#include <typeinfo>
#include <iostream>


using namespace std;


class Confectionery {
public:
    vector <Muffin> muffins;
    vector <Cookie> cookies;
    vector <Cupcake> cupcakes;
    static int cookiesCounter;
    static int muffinsCounter;
    static int cartsCounter;
    Confectionery();
    ~Confectionery();

   // template function - adding products (muffins /cookies) to cart
    template<class T>
    ProductsCart addToCart(T &productToCart, double amount, ProductsCart cart1)
    {
        try{
         T* cartPart = new T(productToCart, amount); //creating a new object of the given class by copy constructor - with the amount given
        cart1+cartPart; //adding an object to cart
        productToCart-*cartPart; //updating the amount of the given product left in stock
        return cart1;
        }catch(exception& ex)
        {
            cout<<"We can't satisfy your sweet tooth. There is only: "<<productToCart.GetAmount()<<" left"<<endl;
            return this->addToCart(productToCart, productToCart.GetAmount(),cart1);

        }

    }
    static int getCounter(string objectName);
    void show();
    friend void showProducts();
    void Checkout(ProductsCart &cart);
    void Sale();

};




#endif // CONFECTIONERY_H
