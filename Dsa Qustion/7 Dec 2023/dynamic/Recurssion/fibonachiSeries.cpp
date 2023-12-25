#include <iostream>
using namespace std;


int  fibonachi(int n){

    if(n==1){
        return 0;
    }

    else if(n==2){
        return 1;
    }

    return fibonachi(n-1)+fibonachi(n-2);

}

int main()
{

    int n;
    cout << "enter the number til there you want fibonachi number";
    cin >> n;

    cout<<"fibonachi Number is "<<fibonachi(n);
    return 0;
}
