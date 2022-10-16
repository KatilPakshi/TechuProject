#include <bits/stdc++.h>
using namespace std;

struct Student
{

  int ID,year;
  char name[20];

  Student()
  {
  	ID = 0; year = 0;
  	memset(name,0,sizeof(name));
  }

}student1;
	
int main(void)
{
  cout<<student1.ID<<" "<<student1.name<<" "<<student1.year<<endl;

  Student student2;
  cout<<student2.ID;		
  
}
