#ifndef CONFECTIONERY_H
#define CONFECTIONERY_H
#include "Muffin.h"
#include "Cookie.h"
#include "Cart.h"
#include <typeinfo>
#include <iostream>


using namespace std;


class Confectionery {
public:
    vector <Muffin> muffins;
    vector <Cookie> cookies;
    static int cookiesCounter;
    static int muffinsCounter;
    static int cartsCounter;
    Confectionery(vector<Muffin> muffins, vector<Cookie> cookies);
    Confectionery();
    ~Confectionery();

    template<class T>
    Cart<Muffin, Cookie> addToCart(T toCart, Cart<Muffin, Cookie>& cart1)
    {
        cart1+toCart;
        return cart1;
    }
//
//    template<class T>
//    void showProducts (vector<T> products)
//    {
//        cout<<typeid(T).name()<<endl;
//
//        for(typename std::vector<T>::iterator it = products.begin(); it!=products.end(); ++it)
//        {
//            std::cout<<it->GetName()<<", "<<it->GetDescription()<<", "<<it->GetAmount()<<endl;
//        }
//    }

    static int getCounter(string objectName);
    void show();
    friend void showProducts();

};



#endif // CONFECTIONERY_H
