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
    int ori = temp;

while(n>0)
{
    count++;
    n=n/10;
}
  
   while(temp>0)       
   {
       rem=temp%10;    
      for(i=1;i<=count;i++)     
      {
          rm=rm*rem;            
      }
      
      sum=sum+rm;
      
      temp=temp/10;               
   }

  
   if(ori==sum)
   {
       cout<<"yes, it's armstrong number: "<<sum;
   }  
   else
   {
       cout<<"No, its not armstrong numer: "<<sum;
   }

}
