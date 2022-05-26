//program to find total armstrong numbers i.e. sum of cube of each digit of number equal to original number
//or number of digit and each digit having power is number of digits in number is equal to original 
#include<iostream>
using namespace std;

int main()
{
    int n,start,end,i,sum=0,rem,rm=1;
    cout<<"enter the number: "<<endl;
    cin>>n;
    int temp = n;
    int count=0;

while(n>0)
{
    count++;
    n=n/10;
}
  cout<<endl<<"no of digits are: "<<count<<endl;
   while(n>0)       //153>0     15>0    1>0true 0>0 false
   {
       rem=n%10;    //153%10=3 15%10=5  1%10=1
      for(i=1;i<=count;i++)     //1<=3 2<=3 3<=3ture then 4<=3 false
      {
          rm=rm*rem;            //rm = 1*3=3; 3=3*3=9; 9=9*3=27
      }
      cout<<"cube are: "<<rm<<endl;
      sum=sum+rm;
      cout<<sum<<"\t";
      n=n/10;               //153/10=15 15/10=1  1/10=0.1 false
   }

   cout<<"temporary is: "<<temp<<"sum is"<<sum<<endl;
   if(temp==sum)
   {
       cout<<"yes, it's armstrong number: "<<temp;
   }  
   else
   {
       cout<<"No, its not armstrong numer: "<<temp;
   }

}