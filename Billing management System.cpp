#include<iostream>
using namespace std;
int main()
{
	int choice,id,quantity,count,price_per_product,number_of_product,price_of_p1,price_of_p3,price_of_p4,total,i;
	string name;
	char repeat;
	float discount,net_amount;
	cout<<"======Customer Billing System======\n";
	cout<<"1.Add a new customer\n";
	cout<<"2.Calculate the total bill\n";
	cout<<"3.Display customer details\n";
	cout<<"4.Exit\n";
	cout<<"===================================\n";
	do
	{
	
	cout<<"\nEnter your choice: ";
	cin>>choice;
	
		if(choice==1)
		{
		cout<<"======Customer Billing System======\n";
    	cout<<"Enter customer name:";
    	cin>>name;
    	cout<<"Enter customer id:";
    	cin>>id;
    	cout<<"Enter quantity:";
    	cin>>quantity;
    	cout<<"Enter price per product:";
    	cin>>price_per_product;
    	cout<<"Customer "<<name;
    	cout<<" Added successfully\n";
    }
    do
    {
	cout<<"Do you wamt to continue (y/n)";
	cin>>repeat;
	cout<<"Enter your choice:";
	cin>>choice;
    if(choice==2)
    {
    	cout<<"======Customer Billing System======\n";
    	cout<<"Enter the number of product:\n";
    	cin>>number_of_product;
    	for(i=1;i<=number_of_product;i++)
    	{
    		cout<<"Enter the number of product price"<<i<<":\n";
    		cin>>count;
    		total=count+total;
		}
		cout<<"Total:\n"<<total;
		if(total<=2500)
		{
			discount=5;
		}
		else if(total<=3500)
		{
			discount=10;
		}
		else 
		{
			discount=15;
		}
		net_amount=total-(total*discount)/100;
      cout<<"\nNet Amount:"<<net_amount;
	}
	if(choice==3)
	{
		cout<<"\nName of Customer:"<<name;
		cout<<"\n Id of customer is:"<<id;
		cout<<"\n Quantity is:"<<quantity;
		cout<<"\nNumber of product is:"<<number_of_product;
		
	}
    if(choice==4)
    {
    	cout<<"Thank you for using our services\n";
    	cout<<"I hope to see you soon";
	}
}while(repeat=='y' || repeat=='Y');
		}while(choice!=4);
}
	
	
	
	

