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
    vector<Product> cart;

    public:
        ProductsCart();
        double GetTotalPrice();
        virtual ~ProductsCart();
        void ShowCart();
        void operator+(Product);


};

#endif // PRODUCTSCART_H
