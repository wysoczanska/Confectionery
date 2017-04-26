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
        Cookie(string name, string description, double pricePerKg, float amount, bool glutenfree);
        Cookie(Cookie &cookie, float amount);
        string GetDescription();
        string GetName();
        const double GetPrice();
        const float GetAmount();
        const bool GetGluten();
        void operator-(Cookie cookie);

};



#endif // COOKIE_H
