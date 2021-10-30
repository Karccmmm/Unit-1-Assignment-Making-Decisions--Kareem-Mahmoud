/* A header file to hold the 
main defintions of the program
Student: Kareem Mahmoud 
Teacher: Dr_T
*/
 
 #define FUNCTIONS_H

 //libraries:
 #include <iostream>
 #include <string>
 #include "Input_Validation_Extended.h" 
 using namespace std;

//prototypes:
void handleOption(string); //function prototype 
void showMenu(); 
void printMulti(int,char);
string evenOddChecker(int); 
int numberReverse(int); 
void getMinMax(double,double,double);  
int validateInt(int &);
double validateDouble(double &);
char validateChar(char &);
string validateString(string &); 

//definitions:
void handleOption(string userOption);
double ds; 
string dtUnits;
double dt;
string dsUnits;

void showMenu()
{
  cout << "Hello! , please choose a letter:"<<endl;
  cout<<" v for velocity"<<endl; 
  cout<<" a for acceleration"<<endl;
  cout<<" m for motion  n for newtons second law "<<endl;
  cout<< " w for weight "<<endl;
  cout<< " p for momentum "<<endl;
  cout<<" X to clear the screen "<<endl;
}


