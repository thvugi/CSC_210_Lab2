#include "class.h"
#include <cmath>  

using namespace std;

Clothes::Clothes(){
    Item one;
    Item two;
    Item three;
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
}

void Shirt:: discountCriteria(float dchange, int crit){
    Shirt::discount = dchange;
    Shirt::criteria = crit;
}
void Pants:: discountCriteria(float dchange, int crit){
    Pants::discount = dchange;
    Pants::criteria = crit;
}
void Shoes:: discountCriteria(float dchange, int crit){
    Shoes::discount = dchange;
    Shoes::criteria = crit;
}
float Shirt::discountApply(){
        int sum = one.amount+two.amount+three.amount;
        float pricesum;
        pricesum = one.amount*one.price + two.amount*two.price + three.amount*three.price;
       total = pricesum;
        if(sum > 2){
            
            return Shirt::discount*pricesum;
        }
        else{
            return pricesum;
        }
}
float Pants::discountApply(){
        int sum = one.amount+two.amount+three.amount;
        float pricesum;
        pricesum = one.amount*one.price + two.amount*two.price + three.amount*three.price;
       total = pricesum;
        if(sum > 2){
            
            return Pants::discount*pricesum;
        }
        else{
            return pricesum;
        }
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
       
}

void Clothes::howMany(){
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

float Clothes::showPrice(){
   
    }


ShoppingCart::ShoppingCart(Shirt x, Pants y, Shoes z){
    Shirt a = x;
    Pants b = y;
    Shoes c = z;
}

void ShoppingCart::showCart(){

    a.howMany();
    b.howMany();
    c.howMany();
}

float Clothes::getTotal(){
    return Clothes::total;
}

void ShoppingCart::showPrice(){
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


