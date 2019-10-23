#include<iostream>
using namespace std;

int main()
{
  int a,b,i,j,first[10][10],second[10][10],sum[10][10];
  cout<<"Enter the number of row and column of 1st matrix: "<<endl;
  cin>>a>>b;
  cout<<"Enter elements: "<<endl;
  for(i=0;i<a;i++)
   for(j=0;j<b;j++)
     cin>>first[i][j];
  
  cout<<"Enter the number of row and column of 2nd matrix: "<<endl;
  cin>>a>>b;
  
  cout<<"Enter elements: "<<endl;
  for(i=0;i<a;i++)
   for(j=0;j<b;j++)
     cin>>second[i][j];
     
   for(i=0;i<a;i++)
    for(j=0;j<b;j++)
     sum[i][j]=first[i][j]+second[i][j];
     
  cout<<"Sum of entered matrix is: "<<endl;
  for(i=0;i<a;i++)
   {
	   for(j=0;j<b;j++)
        cout<<sum[i][j]<<"\t";
        cout<<endl;
   }
  return 0;
}   
     
  
   
