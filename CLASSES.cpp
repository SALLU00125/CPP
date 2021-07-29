#include <iostream>
#include <array>
#include <string>
#include <vector>

class User
{
private:
  std::string name;
  int age;

public:
  User ( std::string n,int  a)
      {
          name=n;
          age=a;
      }




  void getter()
  {
    std::cout << name <<" "<< age ;
  }


};



int main( )

{

std::cout << "salman" << '\n';

User abd("abdullah",17);

     abd.getter();
     std::cout <<"abcd" << '\n';

     std::cout << std::endl;
     std::cout << "abcde" << '\n';
     std::cout << "abdullah";




}
