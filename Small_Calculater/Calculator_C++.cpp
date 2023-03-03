#include<iostream>
using namespace std ;

// creating addition function
double addition(double x , double y ){

    return x + y ;

};

// creating Subtraction Function
double Subtraction(double x , double y){

    return x - y ;

}
// Creating multiplication fuction
double Multiplication(double x , double y){

    return x * y ;

}
// Creating Division Function
double Division(double x , double y){

    return x / y ;

}

int main(){

    // initialize x and y variable

    double x , y ;

    // initialize op variable
    char op ;

    cout<<" Enter your numbers " <<endl;

    cin>> x >> y ;

    cout<<"Enter Your operation + - * /"<<endl;

    cin >> op ;

    // choosing the operation
    if (op == '+'){
          cout<<addition(x,y) ;
    }
    else if(op == '-'){
          cout<<Subtraction(x,y);
    }
    else if(op == '*'){
          cout<<Multiplication(x,y);
    }
    else if(op == '/'){
         if (y != 0){
             cout<<Division(x,y);
         }
     cout<<"operation is invalid"<<endl;
    }

}
