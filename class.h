#pragma once
#ifndef CLASS_H// include guard
#define CLASS_H

#include <string>
#include <iostream>


using namespace std;

/* This struct holds information necessary for 
each clothing item. Price, quantity and what it is*/

struct Item{
    string category;
    int amount;
    float price;
};

/* This is the base class for the derived classes*/

class Clothes{
public:
    int quantity; ///number of items
    float total;/// total cost of the items
    float discount; ///how much discount for the item
    int criteria; ///criteria for discount
  
    /*these are the structs that houses the 3 different clothing item
    for each type of clothe*/

    Item one; 
    Item two;
    Item three;


    Clothes(); //constructor
    void howMany(); //returns how many of each clothing item there is
    float showPrice(); //returns the price of all goods selected
    void discountCriteria(float dchange, int crit); //method to change criteria methods 
    virtual float discountApply() =0; //method to apply the discount to the selected goods this is also pure virtual function
    float getTotal();//a method to get the total cost before discount

};

class Shirt: public Clothes{//derived shirt class 
public: 
    Shirt(); //constructor

    float discountApply();//required discount application method
};
class Pants: public Clothes{ //derived pants class
public: 
    Pants(); //constructor
   
    float discountApply(); //required discount application method
};
class Shoes: public Clothes{ //derived shoes class
public: 
    Shoes(); //constructor
   
    float discountApply();//required method
};

class ShoppingCart{ //composition class to show the information of the other classes.
public:
    Shirt a; //shirt class
    Pants b; //pants class
    Shoes c; //shoes class
    ShoppingCart(Shirt x, Pants y, Shoes z); //constructor with the three clothes type
    void showCart(); //this method shows the number of items in the
    void showPrice(); //this method applied the discount to the clothing items.
};



#endif