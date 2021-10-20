//Unit 1 Making Decisions Assignment: Kareem Mahmoud, Teacher: Dr_T
// Physics Calculator 
#include "functions.h" //reference the header file 

int main() 
{
  string option = ""; //the option local to int main()
  string color = "\x1b[" + to_string(32) + ";1m";
  string reset = "\x1b[0m";
  //loop until the user provides "e" or (&&) "E" as exit condition
  
  do
  {
    showMenu(); //call a menu void function here
    cout << "\nPlease enter an option: ";
      cout << color; //change text to green 
     //cin >> option; //getline(cin,option); //get the entire line
    option = validateString(option); 
    cout << reset; //reset back to standard
    handleOption(option); //call handleOption and pass the user option as an argument
    
  
  }while(option != "e" && option != "E"); //DeMorgan's Law!!! 
  cout << "\nGoodbye. Hasta luego." << endl;
  return 0; 
}