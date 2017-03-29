#ifndef COOKIE_H
#define COOKIE_H
#include<string>

using namespace std;

class Cookie
{
    public:
        Cookie();
        ~Cookie();
        Cookie(string name, string description, float pricePerKg, float amount=0);
        Cookie(Cookie &cookie, float amount);
        string name;
        string description;
        float pricePerKg;
        float amount;
        void SetDescription(string);
        void SetName(string);
        void SetPrice(float);
        void SetAmount(float);
        void operator-(float amount_m);
    protected:
    private:

};

#endif // COOKIE_H
