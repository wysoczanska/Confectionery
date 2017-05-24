#ifndef PRODUCTSCART_H
#define PRODUCTSCART_H
#include <vector>
#include <iostream>
#include <typeinfo>
#include <algorithm>
#include "../include/Product.h"

using namespace std;

class ProductsCart
{
    double totalPrice;

    public:
        vector<Product*> cart;
        ProductsCart();
        double GetTotalPrice();
        virtual ~ProductsCart();
        void ShowCart();
        //void operator+(Product);
        void glutenFreeProducts();
        template <class T1>
        void operator+(T1 *product)
        {
            cart.push_back(product);
            totalPrice=totalPrice+product->GetTotalPrice();
        }
};

#endif // PRODUCTSCART_H
