// ********** Without Referencing *****************

// #include<bits/stdc++.h>
// using namespace std;
// void fun(int *p)
// {
//     // *p=30;
//     p=NULL;

// }
// int main()
// {  
//   int val=10;
//   int *ptr=&val;
//   *ptr=20;
//    fun(ptr);
//     // cout<< "value of pointer :"<<*ptr<<endl;
//     cout<< "value of pointer :"<<ptr<<endl;
//   return 0;
// }

// **************** With Referencing ********************************

#include<bits/stdc++.h>
using namespace std;
void fun(int *&p)
{
    // *p=30;
    p=NULL;

}
int main()
{  
  int val=10;
  int *ptr=&val;
  *ptr=20;
   fun(ptr); //ptr & funtion pointer *&p holds same address that's why when we chhange in 
//    function it appears in main function pointer
// that is callled referencing
    
    cout<< "value of pointer :"<<ptr<<endl;
    // cout<< "value of pointer :"<<*ptr<<endl;
  return 0;
}