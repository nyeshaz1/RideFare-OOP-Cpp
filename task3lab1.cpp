#include<iostream>
#include<string>
using namespace std;
class product{
	int id;
	string name;
	float price;
	int quantity;
	public:
		//default contructor
		product(){
		id=1;
		name="hi";
		price=0;
		quantity=0;	
		}
		//parametrized contructor
		product(int idd,string nam,float pp, int qq){
		id=idd;
		name=nam;
		price=pp;
		quantity=qq;	
		}
		//calculate total price with discount
		float bill(){
			float bill=price*quantity;
		   if(quantity>5){
		   	bill*=.9;
		   }
		   return bill;
		}
		void display(){
			cout<<"Product ID : "<<id
			<<"\nName : "<<name
			<<"\nPrice per Unit : "<<price
			<<"\nQuantity : "<<quantity
			<<"\nTotal Bill : "<<bill()<<endl;
		}
	    
	};
		

	
int main(){
    product p1(101,"laptop",1000,1);
    product p2 (102,"headphones",50,6);
    product p3 (103,"mouse",20,10);
    //display order and cal bill
	cout<<"Displaying all orders \n";

	p1.display();
    p2.display();
    p3.display();
    

	
	return 0;
}