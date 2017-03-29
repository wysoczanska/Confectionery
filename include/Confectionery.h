#ifndef CONFECTIONERY_H
#define CONFECTIONERY_H
#include "Muffin.h"
#include "Cookie.h"
#include "Cart.h"


using namespace std;


class Confectionery
{
public:
    vector <Muffin> muffins;
    vector <Cookie> cookies;
    static int cookiesCounter;
    static int muffinsCounter;
    static int cartsCounter;
        Confectionery(vector<Muffin> muffins, vector<Cookie> cookies);
   Confectionery();
        ~Confectionery();
        Cart sale();
        Cart addToCart(Muffin muffinToCart, Cart& cart);
        Cart addToCart(Cookie cookieToCart, Cart& cart);
        static int getCounter(string objectName);
        void show();
    protected:
    private:

};



#endif // CONFECTIONERY_H
