#include <iostream>
#include <vector>
#include <array>
#include <string>
#include "source.h"





int main()
{
    // Constructor called
    User_C ali(11,"ali"),salman(12,"salman"),haris(13,"haris"),xyz(121,"salman");


    std::vector<User_C> userlist;

    userlist.push_back(ali);
    userlist.push_back(salman);
    userlist.push_back(haris);
    userlist.push_back(xyz);

    int index = ADD_user_if_notEXISTS(userlist,xyz);
    std::cout << index << '\n';

}
