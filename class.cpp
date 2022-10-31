#include "class.h"
#include <cmath>  

using namespace std;

Clothes::Clothes(){
    Item one;
    Item two;
    Item three;
    ///initializes the structs
}
Shirt::Shirt(){
    Shirt::one.category = "Red Shirt";
    Shirt::one.price = 25;
    Shirt::two.category = "Green Shirt";
    Shirt::two.price = 2;
    Shirt::three.category = "Blue Shirt";
    Shirt::three.price = 2;
    Shirt::one.amount = 0;
    Shirt::two.amount = 0;
    Shirt::three.amount = 0;
    Shirt::discountCriteria(.15,2);

    ///the default criterias for the class
}
Pants::Pants(){
    Pants::one.category = "Silk Pants";
    Pants::one.price = 20;
    Pants::two.category = "Cotton Pants";
    Pants::two.price = 10;
    Pants::three.category = "Denim Pants";
    Pants::three.price = 30;
    Pants::one.amount = 0;
    Pants::two.amount = 0;
    Pants::three.amount = 0;
    Pants::discountCriteria(.15,2);

     ///the default criterias for the class
}
Shoes::Shoes(){
    Shoes::one.category = "Nike";
    Shoes::one.price = 60;
    Shoes::two.category = "Adidas";
    Shoes::two.price = 60;
    Shoes::three.category = "Crocs";
    Shoes::three.price = 40;
    Shoes::one.amount = 0;
    Shoes::two.amount = 0;
    Shoes::three.amount = 0;
    Shoes::discountCriteria(0,2);

     ///the default criterias for the class
}

void Clothes:: discountCriteria(float dchange, int crit){
    Clothes::discount = dchange;
    Clothes::criteria = crit;

    //discount criteria setting
}

float Shirt::discountApply(){
        int sum = one.amount+two.amount+three.amount;
        float pricesum;
        pricesum = one.amount*one.price + two.amount*two.price + three.amount*three.price;
       total = pricesum;
        if(sum > Shirt::criteria){
            
            return Shirt::discount*pricesum;
        }
        else{
            return pricesum;
        }

        //these methods are pure virtual because each function may be slightly different 
}
float Pants::discountApply(){
        int sum = one.amount+two.amount+three.amount;
        float pricesum;
        pricesum = one.amount*one.price + two.amount*two.price + three.amount*three.price;
       total = pricesum;
        if(sum > Pants::criteria){
            
            return Pants::discount*pricesum;
        }
        else{
            return pricesum;
        }
        //these methods are pure virtual because each function may be slightly different 
}
float Shoes::discountApply(){
        int sum = one.amount+two.amount+three.amount;
        float pricesum;
        pricesum = one.amount*one.price + two.amount*two.price + three.amount*three.price;
        total = pricesum;
        float savings;
        int count = Shoes::criteria;
     
            savings = one.amount%count*one.price + two.amount%count*two.price + three.amount%count*three.price;
            pricesum = pricesum - savings;
    return pricesum;
       /*these methods are pure virtual because each function may be slightly different 
       as seen this is buy 2 get one free and the others is buy more than 2 */
}

void Clothes::howMany(){

    // a loop that shows each item of each item type
    for(int i = 1; i < 4; i++){
        if(i == 1){
            if(one.amount == 0){
                continue;
            }
            else{
                cout<<one.amount<<" "<<one.category<<": $"<<one.amount*one.price<<endl;
            }
        }
        else if(i == 2){
            if(two.amount == 0){
                continue;
            }
            else{
                cout<<two.amount<<" "<<two.category<<": "<<two.amount*two.price<<endl;
            }
        }
        else{
            if(three.amount == 0){
                continue;
            }
            else{
                cout<<three.amount<<" "<<three.category<<": "<<three.amount*three.price<<endl;
            }
        }
    }
}



ShoppingCart::ShoppingCart(Shirt x, Pants y, Shoes z){
    Shirt a = x;
    Pants b = y;
    Shoes c = z; 

    ///uses composition to set the three classes to the shopping cart class.
}

void ShoppingCart::showCart(){

    a.howMany();
    b.howMany();
    c.howMany();

    ///shows how many of each item there are for the shopping cart
}

float Clothes::getTotal(){
    return Clothes::total;

    ///returns the total number of items which will be inherited to the other derived classes.
}

void ShoppingCart::showPrice(){

    /*this class uses a loop and a switch to show the price of the item after a discount has been deducted from 
    the pirce. This goes through case by case for each of the class. */
    
    cout<<"Total"<<endl;


    for(int i = 0; i<3; i++){
        switch(i){
            case(0):
                if(a.getTotal()>a.discountApply()){
                    cout<<"Shirt Discount: $"<<a.getTotal()-a.discountApply()<<endl;
                }
                else{
                    cout<<"No shirt discount."<<endl;
                }
            case(1):
                if(b.getTotal()>b.discountApply()){
                    cout<<"Pants Discount: $"<<b.getTotal()-b.discountApply()<<endl;
                }
                else{
                    cout<<"No pants discount."<<endl;
                }
            case(2):
                if(c.getTotal()>c.discountApply()){
                    cout<<"Pants Discount: $"<<c.getTotal()-c.discountApply()<<endl;
                }
                else{
                    cout<<"No shoe discount."<<endl;
                }

        }
    }
    
    
}


