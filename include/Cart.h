#ifndef CART_H
#define CART_H
#include <vector>
#include "../include/Muffin.h"
#include "../include/Cookie.h"


class Cart
{
    public:
        Cart();
        ~Cart();
        float totalPrice;
        vector <Muffin> muffins;
        vector <Cookie> cookies;
        void operator+(Muffin muffin_s);
        void operator+(Cookie cookie_s);
        void show();


    protected:

    private:
};


#endif // CART_H
