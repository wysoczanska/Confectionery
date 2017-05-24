#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>
#include <iostream>

using namespace std;

class Product
{
    public:
        virtual ~Product();
        virtual string GetDescription()=0;
        virtual string GetName()=0;
        virtual bool GetGluten()=0;
        virtual double GetTotalPrice()=0;
        friend ostream& operator<<(ostream& os, Product& prod)
        {
            return os<<"\nState of this object:\n"<<"Name: "<<prod.GetName()<<"\nDescription: "<<prod.GetDescription()<<"\n is gluten free?: "<<prod.GetGluten()<<"\n"<<endl;
        }


    protected:
        void SetGluten(bool);
        void SetDescription(string);
        void SetName(string);
        Product();
        string name;
        string description;
        bool glutenFree;

};



#endif // PRODUCT_H
