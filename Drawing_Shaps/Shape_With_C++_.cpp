#include<iostream>
using namespace std ;
int main()
{
  int n,a;
  cout<<"Enter The Number of The middle\n Note:The number must be odd" << endl;
  cin>>n;

  for(int i=0;i<n/2;i++)
  {
    a=n/2-i;
    while(a--) {cout<<"* ";}
    a=2*i+1;
    while(a--) {cout<<"D ";}
    a=n/2-i;
    while(a--) {cout<<"* ";}
    cout<<endl;
  }

  for (int i=0;i<n;i++)
    cout<<"D ";cout<<endl;


  for(int i=1;i<n/2+1;i++)
  {
    a=i;
    while(a--) {cout<<"* ";}
    a=n-(2*i+1)+1;
    while(a--) {cout<<"D ";}
    a=i;
    while(a--) {cout<<"* ";}
    cout<<endl;
  }


  return 0;
}
