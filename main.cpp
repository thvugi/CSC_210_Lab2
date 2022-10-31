#include "class.h"
#include <iostream>

using namespace std;

int main(){

    /// initialize the three classes
    Shirt shirt;
   
    Pants pants;
   
    Shoes shoe;
    
    ShoppingCart cart(shirt, pants, shoe); ///init the shopping cart with the three clothes classes

    ///initialize the loop variables and chooser variable for the menu

    bool end = false;
    bool purchase = true;
    int option;



    while(end == false){ ///this is the loop which determines whether the program runs or stops
        cout<<"Shopping"<<endl<<"Add Items: press 1"<<endl<<"Display Cart: press 2"<<endl<<"Display Total: press 3"<<end<<"Exit: press 4"<<endl;
        cin>>option;/// input menu
        switch(option){ ///switch to choose what menu item is chosen
            case(1): ///add items
                while(purchase == true){ ///in case the user wants to add more items
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
            case(2): ///shows the cart
                cart.showCart();
            case(3):
                cart.showPrice(); ///shows the price after deduction
            case(4):
                end = true; ///exits the program
                break;

        }
    }

}