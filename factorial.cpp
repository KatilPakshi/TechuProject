#include<iostream>
using namespace std;

void fact(int x){
    int facto=1;
    for (int i=2;i<=x;i++){
        facto*=i;
    }
    cout << facto;
}
int main()
{
    int a;
    cin >> a;
    fact(a);
}