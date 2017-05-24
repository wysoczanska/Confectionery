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
        string GetDescription();
        string GetName();
        bool GetGluten();
        friend ostream& operator<<(ostream& os, Cookie& muff)
        {
            return os<<"\nState of this object:\n"<<
            "Name: "<<muff.GetName()<<"\nDescription: "<<muff.GetDescription()
            <<"\n is gluten free?: "<<muff.GetGluten()<<"\nQuantity: "<<muff.GetAmount()<<"\nPrice per 1 kg: "<<muff.GetPrice()<<"\n"<<endl;
        }


};



#endif // COOKIE_H
