#pragma once
#ifndef CLASS_H// include guard
#define CLASS_H

#include <string>
#include <iostream>


using namespace std;

struct Item{
    string category;
    int amount;
    float price;
};

class Clothes{
public:
    int quantity;
    float cost;
    float discount;
    int criteria; 
    float total;
    Item one;
    Item two;
    Item three;
    Clothes();
    void howMany();
    float showPrice();
    virtual void discountCriteria(float dchange, int crit) =0;
    virtual float discountApply() =0;
    float getTotal();

};

class Shirt: public Clothes{
public: 
    Shirt();
    void discountCriteria(float dchange, int crit);
    float discountApply();
};
class Pants: public Clothes{
public: 
    Pants();
    void discountCriteria(float dchange, int crit);
    float discountApply();
};
class Shoes: public Clothes{
public: 
    Shoes();
    void discountCriteria(float dchange, int crit);
    float discountApply();
};

class ShoppingCart{
public:
    Shirt a;
    Pants b;
    Shoes c;
    ShoppingCart(Shirt x, Pants y, Shoes z);
    void showCart();
    void showPrice();
};



#endif