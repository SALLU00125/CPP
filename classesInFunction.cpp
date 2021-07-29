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

    int getage()
    {
        return age;
    }

    std::string  getname()
    {
        return Name;
    }
};


int ADD_user_if_notEXISTS (std::vector<User_C> &Userlist, User_C SingleUser)
{                                // here userlist is passed as reference so we can change it

    for (int i = 0; i < Userlist.size(); i++)
    {
      if( (Userlist[i].getname() == SingleUser.getname()) && (Userlist[i].getage() == SingleUser.getage()) )
        {
            std::cout << "User already exists in vector" << '\n';
            return i;

        }
    }

    Userlist.push_back(SingleUser);
    std::cout << "User has been added at last index in vector" << '\n';
    return ( Userlist.size()-1  );


}





int main()
{
    // Constructor called
    User_C ali(11,"ali"),salman(12,"salman"),haris(13,"haris"),xyz(12,"sallman");


    std::vector<User_C> userlist;

    userlist.push_back(ali);
    userlist.push_back(salman);
    userlist.push_back(haris);
    userlist.push_back(xyz);

    int index = ADD_user_if_notEXISTS(userlist,xyz);
    std::cout << index << '\n';

}
