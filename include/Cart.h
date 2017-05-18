#ifndef CART_H
#define CART_H
#include <vector>
#include "../include/Muffin.h"
#include "../include/Cookie.h"
#include <iostream>
#include <typeinfo>
#include <algorithm>


using namespace std;

template<class T1, class T2>
class Cart
{
    public:
        Cart<T1, T2>();
        ~Cart<T1, T2>();
        double totalPrice;
        vector <T1> muffins;
        vector <T2> cookies;
        void operator+(T1 muffin_s);
        void operator+(T2 cookie_s);
        void operator-(T1 muffin_s);
        void operator-(T2 cookie_s);
        void show();
        friend void showProducts();
};

template <class T1, class T2>
Cart<T1, T2>::Cart()
{
    vector<T1> muffins;
    vector<T2> cookies;
    double totalPrice=0;
}

template <class T1, class T2>
void Cart<T1, T2>::operator+(T2 cookie_s)
{
    cookies.push_back(cookie_s);
    totalPrice=totalPrice+cookie_s.totalPrice;
}


template <class T1, class T2>
void Cart<T1, T2>::operator+(T1 muffin_s)
{
    muffins.push_back(muffin_s);
    totalPrice=totalPrice+muffin_s.GetPrice()*muffin_s.GetAmount();
}

template <class T1, class T2>
void Cart<T1, T2>::show()
{
    cout<<"Products in cart:"<<endl;
    cout<<""<<endl;
    showProducts(cookies);
    showProducts(muffins);
    cout<<"Total: "<<totalPrice<<endl;
}

template <class T1, class T2>
Cart<T1,T2>::~Cart(){}

template<class T>
void showProducts (vector<T> products)
{
    cout<<typeid(T).name()<<"s: "<<endl;

    for(typename std::vector<T>::iterator it = products.begin(); it!=products.end(); ++it)
    {
        std::cout<<it->GetName()<<", "<<it->GetDescription()<<", "<<it->GetAmount()<<endl;
    }
    if (products.begin()==products.end())
    {
        cout<<"Empty :("<<endl;
    }
}


#endif // CART_H
