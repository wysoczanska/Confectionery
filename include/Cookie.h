#ifndef COOKIE_H
#define COOKIE_H
#include<string>
#include "../include/Product.h"

using namespace std;

class Cookie : public Product
{
        double pricePerKg;
        float amount;
        void SetPrice(double);
        void SetAmount(float);

    public:
        Cookie();
        ~Cookie();
        Cookie(string name, string description, double pricePerKg, float amount, bool glutenfree);
        Cookie(Cookie &cookie, float amount);
        const double GetPrice();
        const float GetAmount();
        void operator-(Cookie cookie);
        double GetTotalPrice();


};



#endif // COOKIE_H
