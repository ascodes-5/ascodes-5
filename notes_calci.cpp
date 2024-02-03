// 24. Write a  CPP program to count total number of notes in given amount

#include <iostream>
using namespace std;

int main(){
    int amount,a,b,c,d,e,f,g,h;
   cout<<"Enter the Amount $ :"<<endl;
   
do{
 cin>>amount;
    if(amount>=0){
    cout<<"Notes of 2000 rupees = "<<amount/2000<<endl;
    a=amount%2000;
    cout<<"Notes of 500 rupees = "<<a/500<<endl;
    b=a%500;
    cout<<"Notes of 200 rupees = "<<b/200<<endl;
    c=b%200;
    cout<<"Notes of 100 rupees = "<<c/100<<endl;
    d=c%100;
    cout<<"Notes of 50 rupees = "<<d/50<<endl;
    e=d%50;
    cout<<"Notes of 20 rupees = "<<e/20<<endl;
    f=e%20;
    cout<<"Notes of 10 rupees = "<<f/10<<endl;
    g=f%10;
    cout<<"Notes of 5 rupees = "<<g/5<<endl;
    h=g%5;
    cout<<"Coins of 2 rupees = "<<h/2<<endl;
    if(h%2==1){
    cout<<"Coins of 1 rupees = "<<1<<endl;}
    else{
        cout<<"Coins of 1 rupees = "<<0<<endl;
    }
    break;
    }

else {
    cout<<"Amount can not be Negative! Enter A Positive Value :"<<endl;}
    }
    while (true);
   
    return 0;
}

 
