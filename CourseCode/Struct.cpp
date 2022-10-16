#include <bits/stdc++.h>
using namespace std;

/*
Struct [Structure tagged]
{
    member defination;
    member defination;0
    ..
    member defination;
}[one or more structure variables](optional);
*/

struct Books{
    char Title[100];
    char Author[20];
    int ID;
    float price;

}book1;

void printingBooks(Books variableBook){

    cout<<"Book Title is: "<<variableBook.Title<<" "<<"\n";
    cout<<"Book Author is: "<<variableBook.Author<<"\n";
    cout<<"Book price is: "<<variableBook.price<<"\n";
    cout<<"Book ID is: "<<variableBook.ID<<"\n";
} 

int main()
{
    book1.ID = 10;
    book1.price = 45.89; 

    strcpy(book1.Title,"Shit just got real!!");
    strcpy(book1.Author,"Ur Mom");
    


    // printingBooks(book1);

    cout<<"Book 1 Title: "<<book1.Title<<"\n";
    cout<<"Book 1 Author: "<<book1.Author<<"\n";
    cout<<"Book 1 price: "<<book1.price<<"\n";
    cout<<"Book 1 ID: "<<book1.ID<<"\n";

    Books book2;
    book2.ID = 110;
    book2.price = 653.54;
    strcpy(book2.Title,"Fuck ITTT!!");
    strcpy(book2.Author,"Ur Sis");

    cout<<"Book 2 Title: "<<book2.Title<<"\n";
    cout<<"Book 2 Author: "<<book2.Author<<"\n";
    cout<<"Book 2 price: "<<book2.price<<"\n";
    cout<<"Book 2 ID: "<<book2.ID<<"\n";

    return 0;
}