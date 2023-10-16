//2. Write a C++ program to print the pattern
A
BC
DEF
GHIJ

#include <iostream>
using namespace std;
 
int main()
{
  int i,j;
  char c;
  int n=5;
 
  c='A';
  for(i=0;i<n;i++)
   {
   for(j=0;j<=i;j++)
   {
      if(c=='Z')
      break;
 
      cout<<c;
      c++;
   }
 
    cout<<endl;
    }
return 0;
 
}