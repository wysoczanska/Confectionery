#ifndef COOKIE_H
#define COOKIE_H
#include<string>

using namespace std;

class Cookie
{
        string name;
        string description;
        double pricePerKg;
        float amount;
        bool glutenFree;
        void SetDescription(string);
        void SetName(string);
        void SetPrice(float);
        void SetAmount(float);
    public:
        Cookie();
        ~Cookie();
        Cookie(string name, string description, double pricePerKg, float amount=0);
        Cookie(Cookie &cookie, float amount);
        string GetDescription();
        string GetName();
        double GetPrice();
        float GetAmount();
        void operator-(float amount_m);

};

#endif // COOKIE_H
