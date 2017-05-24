#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>

using namespace std;

class Product
{
    public:
        virtual ~Product();
        virtual string GetDescription();
        virtual string GetName();
        virtual bool GetGluten();
        virtual double GetTotalPrice()=0;
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
