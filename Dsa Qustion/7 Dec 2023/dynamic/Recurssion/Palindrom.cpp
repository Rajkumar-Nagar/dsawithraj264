#include <iostream>
using namespace std;


bool Plindrom(string Name,int i,int j){

if(i >=j){
    return true;
}


if(Name[i]==Name[j]){
     return Plindrom(Name, i + 1, j - 1);
}

else{
    return false;
}


}

int main()
{

    string Name="dabccbad";

    if(Plindrom(Name,0,Name.length())){
        cout<<"given string is a palindrom String";

    }
    else{
       cout<<"given string is not a palindrom";

    }
    
    return 0;
}
