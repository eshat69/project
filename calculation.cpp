#include<iostream>
using namespace std ;
int main () {
    int num1 , num2 ;
    cout<< "enter two numbers :" ;
    cin>> num1 >> num2 ;

    int sum , sub , mul , div ;
    sum = num1 + num2 ;
    sub = num1 - num2 ;
    mul = num1 * num2 ;
    div = num1 / num2 ;
    cout << "Sum is " << sum << ", Subtraction is " << sub << ", Multiplication is " << mul << ", Division is " << div << endl;
    return 0 ;
}
