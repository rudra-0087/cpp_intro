#include<iostream>
using namespace std;

float circle(string choice,float radius){

    if(choice == "area"){
        return (3.14 *radius*radius);
    }
    else if(choice == "circumference"){
        return (2*3.14*radius);
    }
}

int main(){
    float radius ;

    cout<<"Enter radius the of Circle : ";
    cin>>radius;

    cout<<"Area of Circle : " << circle("area",radius);
    cout<<"\nCircumference of Circle : " << circle("circumference",radius);

    cout<<endl;
    system("pause");

}