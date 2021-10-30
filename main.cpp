//Unit 1 Making Decisions Assignment: Kareem Mahmoud, Teacher: Dr_T
// Physics Calculator 
#include "functions.h" 
#include <iostream>
#include <cstdlib> 
#include <string>



int main() 
{
  string option = ""; //the option local to int main()
  string color = "\x1b[" + to_string(32) + ";1m";
  string reset = "\x1b[0m";

 cout << "Hello! , please choose a letter:"<<endl;
  cout<<" v for velocity"<<endl; 
  cout<<" a for acceleration"<<endl;
  cout<<" m for motion  n for newtons second law "<<endl;
  cout<< " w for weight "<<endl;
  cout<< " p for momentum "<<endl;
  cout<<" X to clear the screen "<<endl;
char input;
cin >> input;
switch (input)

{
case 'v':
{
//velocity(double ds,double dt) function
double ds = 0.0;
double dt =0.0;
cout <<"Enter ds and dt values\t";
ds=validateDouble(ds);
dt= validateDouble(dt);
double v = ds/dt;
cout<<"velocity is:"<<v;
break;

}
case 'a':
{
//acceleration(double dt,double dv) function
double dt=0.0;
double dv=0.0;
cout <<"Enter dv and dt values\t";
dv= validateDouble(dv);
dt= validateDouble(dt);
double a = dv/dt;
cout<<"acceleration is:"<<a;
break;
}

case 'm': // motion function 
{ int num=0.0;
cout<<"Enter:1 for v"<<endl; 
cout<< "Enter 2 for s"<<endl;
cout<< "Enter 3 for v square"<< endl;
cout<<" 4 for v bar"<< endl;
num= validateInt(num); 
switch(num){
case 1:
{
double v0= 0.0;
double a= 0.0;
double t= 0.0;
double v= 0.0; 
cout<<"enter v0, a and t \n";
v0= validateDouble(v0);
a= validateDouble(a);
t= validateDouble(t);
v= validateDouble(v);
v=v0+(a*t);
cout<<"v is equal to"<<v;
break;
}
case 2:
{
double s= 0.0;
double s0= 0.0;
double v0= 0.0;
double t= 0.0;
double a= 0.0;
cout<<"enter s0, v0 , t and a values";
s=validateDouble(s);
s0=validateDouble(s0);
v0= validateDouble(v0);
t= validateDouble(t);
a= validateDouble(a);
s = s0+(v0*t)+(1/2)*(a*t*t);
cout<<"values of s is:"<<s;
}
case 3:
{
double v=0.0;
double v2= 0.0;
double v0= 0.0;
double a= 0.0;
double s0= 0.0;
double s =0.0;
cout<<"enter v0,a,s and s0 values";
v0=validateDouble(v0);
a=validateDouble(a);
s0= validateDouble(s0);
s=validateDouble(s);
v=((v0*v0)+((2*a)*(s-s0)));
v2=v*v;
cout<<"v2 values is : "<<v2;
break;
}
case 4:
{
double v_bar;
double v0= 0.0;
double v= 0.0;
cout<<"enter the values v and v0";
v=validateDouble(v);
v0= validateDouble(v0);
v_bar=((1/2)*(v+v0));
cout<<"v bar is equal to"<<v_bar;
break;
}
default:
cout<<"Please check the input you entered";
break;


}
}
case'n': //newtons second law
{
 double m=0.0;
 double a=0.0;
cout <<"Enter m and a values\t";
m=validateDouble(m);
a=validateDouble(a); 
double N = m*a;
cout<<"The answer is "<<N;
break;

}
case'w': // weight
{
 double m =0.0;
 double g =0.0;
cout <<"Enter m and g values\t";
m=validateDouble(m);
g= validateDouble(g); 
double W = m*g;
cout<<"The weight is "<< W;
break;
}
case'p': // momentum
{
double m =0.0;
 double v =0.0;
cout <<"Enter m and v values\t";
cin>>m>>v; 
double P = m*v;
cout<<"The momentum is "<< P;
break;
}
default:
// operator doesn't match any case constant 

cout << "Error! plese check the values you entered";
break;
}

do
  {
    showMenu(); //call a menu void function here
    cout << "Hello, please choose a letter: ";
      cout << color; //change text to green 
     //cin >> option; //getline(cin,option); //get the entire line
    option = validateString(option); 
    cout << reset; //reset back to standard
    handleOption(option); //call handleOption and pass the user option as an argument
    
  }while(option != "X" && option != "X"); //DeMorgan's Law!!! 
  cout << "\nGoodbye" << endl;
  return 0; 
}






 
  
   
