#include <iostream>
using namespace std;


int Factorail(int n){
    
    if(n==0)
    return 1;


return n*Factorail(n-1);

}


int Power (int n,int m){

    if(m==0)
    return 1;

    return n*Power(n,m-1);
}


int main()
{
   
   int n,m;
   cout<<"enter the number "<<endl;
   cin>>n;
   cout<<"enter the Power of That number";
   cin>>m;
   
   

   cout<<"factorial of that number is "<<Factorail(n);
   cout<<"Power of  of that number is "<<Power(n,m);

    return 0;
}
