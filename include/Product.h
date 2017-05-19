#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>

using namespace std;

class Product
{
    public:
        string name;
        string description;
        double totalPrice;
        bool glutenFree;
        void SetDescription(string);
        void SetName(string);
        Product();
        ~Product();
        //Product(string name, string description, double pricePerKg, float amount, bool glutenfree);
        string GetDescription();
        string GetName();
        const bool GetGluten();

};


#endif // PRODUCT_H
