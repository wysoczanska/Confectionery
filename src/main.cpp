#include "../include/ConfectioneryTest.h"
#include "../include/Muffin.h"
#include"../include/Confectionery.h"
#include "../include/Cart.h"
#include "../include/Cookie.h"
#include "../include/Tests.h"
#include <iostream>
#include <vector>

int main()
{
    Tests tests;
    tests.ConfectioneryTest();

    tests.ProductsCartTest();

    tests.CupcakeTest();

    Confectionery *conf=new Confectionery();
    tests.seed(conf);
    conf->Sale();


    return 0;
}

