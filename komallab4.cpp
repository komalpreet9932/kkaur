#include <iostream>
#include <string>
#include <sstream>
// Include the library that will allow you to convert from string to integer

int main() 
{
  int i,j,k,l;
  /*-------------------------------
  PART 1 - Reading multiple integers
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 1         =" << std::endl;
  std::cout <<              "=========================" << std::endl;
  
   std::cout <<"Enter any three values:" <<std::endl;
  // Ask the user for 3 integers as input

   std::cin >>i>>j>>k;// The user should enter all integers on the same line, pressing enter only once

    l=i*j*k;

  // Multiply the three integers
  
   std::cout <<"Result of the multipilcation= "<<l<< std::endl;

  // Output the result of the multiplication










  /*-------------------------------
  PART 2 - Reading strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 2         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  // Ask the user for three strings and output a haiku poem
  // http://examples.yourdictionary.com/examples-of-haiku-poems.html

  using std::cout;
  using std::cin;
  using std::endl;


  std::string village;
  std::string snow;
  std::string water;
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');



  cout<<"The name of village : ";
  std::getline(cin,village);
  cout<<"The name of snow : ";
  std::getline(cin,snow);
  cout<<"The name of water : ";
  std::getline(cin,water);
  cout<<"       "<<endl;



  cout<<"A mountain "<<village<<" "<<endl;
  cout<<"under the piled-up "<<snow<<" "<<endl;
  cout<<"the sound of "<<water<<" " <<endl;
  









  /*-------------------------------
  PART 3 - Converting strings
  --------------------------------*/
  std::cout << std::endl << "=========================" << std::endl;
  std::cout <<              "=        PART 3         =" << std::endl;
  std::cout <<              "=========================" << std::endl;

  std::string myNumber = "1234"; // Convert this string to an integer 
  int t;
  std::stringstream(myNumber)>>t;
  std::cout <<" "<<t<<":is an integer"; //Insert the integer before the text of this output

  return 0;

}