#include<iostream>
#include<math.h>
using namespace std;

int main()
{


    int num, originalNum, remainder, n = 0;
   float result = 0.0;

   cout<<"enter number: "<<endl;
   cin>>num;

   originalNum = num;

   // store the number of digits of num in n
   for (originalNum = num; originalNum != 0; ++n) {
       originalNum /= 10;
   }

   for (originalNum = num; originalNum != 0; originalNum /= 10) {
       remainder = originalNum % 10;

      // store the sum of the power of individual digits in result
      result += pow(remainder, n);
   }
   if ((int)result == num)
    cout<<" is an Armstrong number."<< num;
   else
   cout<<"is not an Armstrong number."<<num;
   return 0;
}