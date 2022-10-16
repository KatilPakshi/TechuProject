#include <bits/stdc++.h>
using namespace std;

struct car 
{
	char model[20];
	int year;
	int ID;

}mycar, cars[100];

void printingCar(car varCar)
{
	cout<<varCar.ID<<endl;
	cout<<varCar.model<<endl;
	cout<<varCar.year<<endl;
	cout<<endl;

}

int main()
{
	strcpy(mycar.model,"Tesla"); 
	mycar.year = 2020;

	 cout<<mycar.model[0]<<mycar.model[1]<<mycar.model[2];
	 cout<<mycar.model[3];

	for(int i=1;i<=100;++i)
	{
		cars[i].ID = i;
		cars[i].year = 2020;
        strcpy(cars[i].model,"Tesla");
	}

	printingCar(cars[13]);
	printingCar(cars[37]); 

	return 0;
}


