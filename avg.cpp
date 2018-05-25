#include<iostream>  
using namespace std;
int main() 
{ 
      int sum,n,i; 
      float avg;
      cout<<"\nEnter the Value of N:"; 
      cin>>n; 
      sum=0; 
for(i=1;i<=n;i++)
{
sum+= i ; 
}
          cout<<"\n Sum is: "<<sum; 
     avg=sum/n; 
     cout<<"\n Average is :"<<avg; 
} 
