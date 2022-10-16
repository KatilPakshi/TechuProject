#include <bits/stdc++.h>
using namespace std;

struct Product
{
	double price;
	char name[20];

	Product()
	{
		price = 0;
		memset(name,0,sizeof(name));
	}

	Product(double newPrice)
	{
		price = newPrice;
	}

	Product(double newPrice,char newName[])
	{
		price = newPrice;
		memset(name,0,sizeof(name));
		strcpy(name,newName);
	}
};

int main()
{
	Product p1;
	p1.price = 40;
    
    Product p2(5.25);
    cout<<p2.price<<endl;

    Product p3(69.69,"Kandom");
    cout<<p3.price<<" "<<p3.name<<endl;

	return 0;
}
