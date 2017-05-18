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
        ProductsCart();
        GetTotalPrice();
        virtual ~ProductsCart();
        vector<Product> cart;


};

#endif // PRODUCTSCART_H
