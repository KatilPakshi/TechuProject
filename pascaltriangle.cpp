#include<iostream>
using namespace std;

int fact(int x){
    int facto=1;
    for (int i=2;i<=x;i++){
        facto*=i;
    }
    return facto;
}
void combination(int y, int z){
    int m=y-z;
    cout << fact(y)/(fact(m)*fact(z));
    }
int main()
{
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            combination(i,j);   
        }
        cout << endl;
    }
}