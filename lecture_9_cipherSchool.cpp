#include<iostream>
using namespace std;

int compare(int a, int b)
{
//     int c;
//      if (a>b)
//      {
//            c=a;
//      }
//      else
//      {
//         c=b;
//      }
//   return c;

if(a>b)
{
    return a;
}
else {
    return b;
}
 
}


int main()
{
        int c= compare(20,30);
        cout<<c;
}