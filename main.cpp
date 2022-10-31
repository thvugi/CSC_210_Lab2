#include "class.h"
#include <iostream>

using namespace std;

int main(){
    Shirt shirt;
   
    Pants pants;
   
    Shoes shoe;
    
    ShoppingCart cart(shirt, pants, shoe);

    bool end = false;
    bool purchase = true;
    int option;
    while(end == false){
        cout<<"Shopping"<<endl<<"Add Items: press 1"<<endl<<"Display Cart: press 2"<<endl<<"Display Total: press 3"<<end<<"Exit: press 4"<<endl;
        cin>>option;
        switch(option){
            case(1):
                while(purchase == true){
                    cout<<"Select a color for your shirt: "<<endl;
                    cout<<"1. "<<shirt.one.category<<endl<<"2. "<<shirt.two.category<<endl<<"3. "<<shirt.three.category<<endl;
                    cin>>option;
                    cout<<endl<<"How many would you like: ";
                    switch(option){
                        case(1):
                            cin>>shirt.one.amount;
                        case(2):
                            cin>>shirt.two.amount;
                        case(3):
                            cin>>shirt.three.amount;
                    }
                    cout<<endl<<"Enter 1 if you would like more and 0 to go next: ";
                    cin>>option;
                    if(option == 1){
                        purchase = true;
                    }
                    else{
                        purchase = false;
                    }
                }
                purchase = true;
                while(purchase == true){
                    cout<<"Select a texture for your pants: "<<endl;
                    cout<<"1. "<<pants.one.category<<endl<<"2. "<<pants.two.category<<endl<<"3. "<<pants.three.category<<endl;
                    cin>>option;
                    cout<<endl<<"How many would you like: ";
                    switch(option){
                        case(1):
                            cin>>pants.one.amount;
                        case(2):
                            cin>>pants.two.amount;
                        case(3):
                            cin>>pants.three.amount;
                    }
                    cout<<endl<<"Enter 1 if you would like more and 0 to go next: ";
                    cin>>option;
                    if(option == 1){
                        purchase = true;
                    }
                    else{
                        purchase = false;
                    }
                }
                purchase = true;
                while(purchase == true){
                    cout<<"Select a brand for your shoes: "<<endl;
                    cout<<"1. "<<shoe.one.category<<endl<<"2. "<<shoe.two.category<<endl<<"3. "<<shoe.three.category<<endl;
                    cin>>option;
                    cout<<endl<<"How many would you like: ";
                    switch(option){
                        case(1):
                            cin>>shoe.one.amount;
                        case(2):
                            cin>>shoe.two.amount;
                        case(3):
                            cin>>shoe.three.amount;
                    }
                    cout<<endl<<"Enter 1 if you would like more and 0 to go next: ";
                    cin>>option;
                    if(option == 1){
                        purchase = true;
                    }
                    else{
                        purchase = false;
                    }
                }
                option = 1;
            case(2):
                cart.showCart();
            case(3):
                cart.showPrice();
            case(4):
                end = true;
                break;

        }
    }

}