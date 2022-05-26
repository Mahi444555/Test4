//program to find total armstrong numbers i.e. sum of cube of each digit of number equal to original number
//or number of digit and each digit having power is number of digits in number is equal to original 
#include<iostream>
using namespace std;

int main()
{
    int n,i,sum=0,rem;
    cout<<"enter the number: ";
    cin>>n;
    
    int temp = n;
    while(n>0)
    {
        rem= n%10;  //153%10=3
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(sum==temp)
        {
        cout<<"Yes, it's aramstrong number: "<<sum;
        }
    else
        {
        cout<<"Not, armstrong number: "<<sum;
        }
}