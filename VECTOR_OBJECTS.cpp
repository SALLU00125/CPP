#include <iostream>
#include <vector>
#include <array>
#include <string>


class User_C
{

private:
    int age;
    std::string Name;

public:
    // Parameterized Constructor
    User_C(int age1, std::string Name1)
    {
        age = age1;
        Name = Name1;
    }

    void getXY()
    {
        std::cout<< age <<"   "<<Name<<'\n';
    }

};

int main()
{
    // Constructor called
    User_C ali(11,"ali"),salman(12,"salman"),haris(13,"haris");


    std::vector<User_C> userlist; //class vector

    userlist.push_back(ali); //pushing objects into vectors
    userlist.push_back(salman);
    userlist.push_back(haris);

    userlist[0].getXY(); // accesing first object then its function
    userlist[1].getXY();
    //userlist[3].getXY();
}
