#ifndef HEADERFILE_H
#define HEADERFILE_H
// some declarations in
// the header file.

std::string printRandomString(std::string Name1 , std::string Name2);
double findMod(double a, double b);


class LivingBeing_C
{

private:
    int age;
    std::string Name;
    float height;
    int NoOfLegs;
    bool bones;

public:
    // Parameterized Constructor
    SET_AT_ONCE(int age, std::string Name,float height,int NoOfLegs,bool legs)
    {
        this->age = age;
        this->Name=Name;
        this->height=height;
        this->NoOfLegs=NoOfLegs;
        this->bones=bones;
    }



        std::string  get_Name()
        {
            return Name;
        }

        int   get_age()
        {
            return age;
        }

        float  get_height()
        {
            return height;
        }

        int  get_NOL()
        {
            return NoOfLegs;
        }

        bool  get_Bones()
        {
            return bones;
        }


    void  set_Name(std::string Name)
    {
      this->Name=Name;
    }

    void   set_age(int age)
    {
        this->age = age;;
    }

    void  set_height(float height)
    {
        this->height=height;
    }

    void  set_NOL(int NoOfLegs)
    {
        this->NoOfLegs=NoOfLegs;
    }

    void  set_Bones(bool bones)
    {
        this->bones=bones;
    }

    void getinfo()
    {
        std::cout << "AGE:" <<age<<" Name:" <<Name<<" height:" <<height<<" NoOfLegs:" <<NoOfLegs<<" Have_bones:"<<bones;
    }



};



LivingBeing_C operator+  (LivingBeing_C &Specimen1 , LivingBeing_C &Specimen2)
{

  LivingBeing_C Prototype;

  Prototype.set_age((rand()%100)+Specimen1.get_age()+ Specimen2.get_age()+ (Specimen1.get_age()% Specimen2.get_age()) );


  Prototype.set_NOL(  rand()%Specimen1.get_NOL()+Specimen2.get_NOL()  );

  Prototype.set_Name ( printRandomString(Specimen2.get_Name(),Specimen2.get_Name()) );

  Prototype.set_height(float(Specimen1.get_height()+ Specimen2.get_height()+
                      findMod(double (Specimen1.get_height()), double (Specimen2.get_height())) ) );

  Prototype.set_Bones(Specimen1.get_Bones()+Specimen2.get_Bones());

  return Prototype;
}





std::string printRandomString(std::string Name1 , std::string Name2)
{
    std::string S1= Name1+Name2, res="" ;
    bool s1lengthnotprime=true;

    while (s1lengthnotprime)
    {
    if(S1.length()< 5)
      {
        S1+= S1+ Name1[rand() % 5+1];
      }
    if(S1.length()>= 5) s1lengthnotprime=false;

    }

    for (int i = 0; i < S1.length(); i++)
      res = res + S1[rand() % 10];

    return res;
}

double findMod(double a, double b)
{
    double mod;
    // Handling negative values
    if (a < 0)
        mod = -a;
    else
        mod =  a;
    if (b < 0)
        b = -b;

    // Finding mod by repeated subtraction

    while (mod >= b)
        mod = mod - b;

    // Sign of result typically depends
    // on sign of a.
    if (a < 0)
        return -mod;

    return mod;
}





#endif
