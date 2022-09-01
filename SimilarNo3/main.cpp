#include<iostream>
using namespace std;

 int main()
 {
     int i,arr[10], ar[10],j,no, arno;


  cout<<"Enter Size of array: ";
  cin>>no >> arno;

     cout<<"Enter any "<<no<<" num in array: ";
      for(i=0;i<no;i++)
  {
        cin>>arr[i];
  }

      cout<<"Enter any "<<arno<<" num in array: ";
       for(j=0;j<arno;j++)
  {
   cin>>ar[j];
  }


  cout<<"Dublicate Values are: ";
  for(i=0; i<no; i++)
   {
    for(j=0;j<arno;j++)
    {
    if(arr[i]==ar[j])
    {
    cout<<"\n"<<arr[i] << endl;
    }
   }
   }
  return 0;
 }
