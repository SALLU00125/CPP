
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
