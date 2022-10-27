#include<iostream>
using namespace std;

int fib(int i){
    if((i == 1) || (i == 0)){
        return i;
    }
    else{
        return(fib(i-1) + fib(i-2));
    }
}

int main(){
    int x,i=0 ;
    cout<<"Enter the number of terms of series : ";
    cin>>x;
    cout<<"\nFibonacci Series : ";

    while(i < x){
        cout << fib(i) << " ";
        i++;
    }

    cout<<endl;
    system("pause");
}
