#ifndef COOKIE_H
#define COOKIE_H

#include <string>

using namespace std;


class Cookie
{
    public:
        Cookie();
        ~Cookie();
        string name;
        string description;
        float pricePerKg;
        float amount;
        Cookie(string name, string description, float pricePerKg, float amount=0);
        void SetDescription(string);
        void SetName(string);
        void SetPrice(float);
        void SetAmount(float);
    protected:
    private:

};

#endif // COOKIE_H
