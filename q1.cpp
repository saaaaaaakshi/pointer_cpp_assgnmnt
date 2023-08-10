/*
Write a program to find the product of two numbers using pointers.
*/
#include<iostream>
using namespace std;
int product(int *n1,int *n2){
    int p=(*n1)*(*n2);
    return p;
}
int main(){
    int a,b;
    cin>>a>>b;
    int *p1=&a;
    int *p2=&b;
    int p=product(p1,p2);
    cout<<p;
}