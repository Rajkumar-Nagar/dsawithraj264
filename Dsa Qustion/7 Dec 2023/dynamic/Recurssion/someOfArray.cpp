#include <iostream>
using namespace std;

int SomeOfArray(int arr[],int size){



if(size==0){
    return 0;
}

int sum= SomeOfArray(arr+1,size-1)+arr[0];
return sum;
}

int main()
{
    int arr[5]={2,5,7,16,20};
    
    cout<<"some of that Array is "<<SomeOfArray(arr,5);

    return 0;
}
