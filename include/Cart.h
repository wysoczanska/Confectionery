#ifndef CART_H
#define CART_H
#include <vector>
#include "../include/Muffin.h"
#include "../include/Cookie.h"
#include <iostream>

using namespace std;

template<class T1, class T2>
class Cart
{
    public:
        Cart<T1, T2>();
        ~Cart<T1, T2>();
        float totalPrice;
        vector <T1> muffins;
        vector <T2> cookies;
        void operator+(T1 muffin_s);
        void operator+(T2 cookie_s);
        void show();


    protected:

    private:
};

template <class T1, class T2>
Cart<T1, T2>::Cart()
{
    vector<T1> muffins;
    vector<T2> cookies;
    float totalPrice=0;
}

template <class T1, class T2>
void Cart<T1, T2>::operator+(T2 cookie_s)
{
    cookies.push_back(cookie_s);
    totalPrice=totalPrice+cookie_s.GetPrice()*cookie_s.GetAmount();
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
    cout<<"Cookies:"<<endl;
    for(std::vector<Cookie>::iterator it = cookies.begin(); it!=cookies.end(); ++it)
    {
        cout<<it->GetName()<<", "<<it->GetAmount()<<endl;
    }
    cout<<"Muffins:"<<endl;
    for(std::vector<Muffin>::iterator it = muffins.begin(); it!=muffins.end(); ++it)
    {
        //cout<<it->GetName()<<", "<<it->quantity<<endl;
    }

    cout<<"Total: "<<totalPrice<<endl;
}
template <class T1, class T2>
Cart<T1,T2>::~Cart(){}

#endif // CART_H
