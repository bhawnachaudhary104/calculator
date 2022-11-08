#include<iostream>
using namespace std;
void addition();
void substraction();
void multiplication();
void division();
void exponent();
void factorial();
void trignosin();
void trignocos();
void trignotan();
void sin_inverse();
void start();

int main(){
start();
int choice;
cout<<"press 1 to restart and 0 to exit"<<endl;
cin>>choice;
if(choice == 1){
  start();
}
else if(choice == 0)
cout<<"thank you feel free to use me again"<<endl;
else
cout<<"invalid input"<<endl;

    return 0;
}

void addition(){
    int x ;float sum = 0;float number;
    cout<<"you want to add how many numbers"<<endl;
    cin>>x;//here x is to know how many times loop will run.
    cout<<"enter numbers one by one"<<endl;
    for(int i =0;i<x;i++){
        cin>>number;
        sum = sum +number;
    }
cout<<"sum of numbers you entered is :-"<<sum<<endl;
}

void substraction(){
    float p,q;
    cout<<"enter  first number"<<endl;
    cin>>p;
    cout<<"enter second number"<<endl;
    cin>>q;
    cout<<"difference between the numbers is :-"<<(p-q)<<endl;}

    void multiplication(){
    int r ;float product = 1;float num;
    cout<<"you want to multiply how many numbers"<<endl;
    cin>>r;//here r is to know how many times loop will run.
    cout<<"enter numbers one by one"<<endl;
    for(int i =0;i<r;i++){
        cin>>num;
       product = product*num;
    }
cout<<"product of numbers you entered is :-"<<product<<endl;
}

void division(){
    float s,t;
    cout<<"enter  first number"<<endl;
    cin>>s;
    cout<<"enter second number"<<endl;
    cin>>t;
    float quotient =  s/t;
    cout<<"result  :-"<<quotient<<endl;}
     
     void exponent(){
       float b;int p;float exp = 1;
       cout<<"enter base"<<endl;
       cin>>b;
       cout<<"enter power"<<endl;
       cin>>p;
       for(int i = 0;i<p;i++){
     exp = exp*b;
       }
       cout<<"desired result is :- "<<exp<<endl;
     }

     void factorial(){
  int n;int fact = 1;
  cout<<"enter number whose factorial you need to calculate"<<endl;
  cin>>n;
  for(int i = 1;i<=n;i++){
  fact =  fact*i;
  }
cout<<"factorial of number you enterd is :-  "<<fact<<endl;
     }
  
  void trignosin(){float a;
  float r;// a is in degrees
  cout<<"enter the angle in degrees"<<endl;
  cin>>a;
a = (a*3.142);
r = a/180;//r is angle in radians
    cout<<"sin(a) is "<<(r-r*r*r/6+r*r*r*r*r/120 -r*r*r*r*r*r*r/5040)<<endl;
  }
    void trignocos(){float a;
  float r;// a is in degrees
  cout<<"enter the angle in degrees"<<endl;
  cin>>a;
a = (a*3.142);
r = a/180;//r is angle in radians
    cout<<"cos(a) is "<<(1-r*r/2+r*r*r*r/24-r*r*r*r*r*r/720)<<endl;
  }
      void trignotan(){float a;
  float r;// a is in degrees
  cout<<"enter the angle in degrees"<<endl;
  cin>>a;
a = (a*3.142);
r = a/180;//r is angle in radians
    cout<<"tan(a) is "<<(r+r*r*r/5+2*r*r*r*r*r/15)<<endl;
  }
  
  void sin_inverse(){
    float r;float a;
    cout<<"enter the angle in degrees"<<endl;
      cin>>a;
a = (a*3.142);
r = a/180;//r is angle in radians
cout<<"sin^-1(a) is "<<(r+r*r*r/6+3*r*r*r*r*r/40+5*r*r*r*r*r*r*r/112+35*r*r*r*r*r*r*r*r*r/1152)<<endl;
    
  }
  void start(){
    int op;
    cout<<"HEY! I am your mini calculator"<<endl;
cout<<"you can choose any  operation from the following:- "<<endl;
cout<<" 1.Addition"<<endl;
cout<<" 2. substraction"<<endl;
cout<<" 3. Multiplication"<<endl;
cout<<" 4. Division"<<endl;
cout<<" 5. exponentiation"<<endl;
cout<<" 6. factorial"<<endl;
cout<<" 7. sin "<<endl;
cout<<" 8.cos "<<endl;
cout<<" 9.tan "<<endl;
cout<<" 10. inverse_sin"<<endl;
cout<<"which operation you want to choose"<<endl;
cin>>op;
switch(op){
    case 1:
    addition();
    break;
    case 2:
    substraction();
    break;
    case 3:
    multiplication();
    break;
    case 4:
    division();
    break;
    case 5:
    exponent();
    break;
    case 6 :
    factorial();
    case 7 :
    trignosin();
    break;
    case 8:
    trignocos();
    break;
    case 9:
    trignotan();
    break;
    case 10:
    sin_inverse();
    break;
  
    default:
    cout<<"invalid choice"<<endl;
  } }