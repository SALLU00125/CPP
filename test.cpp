#include <iostream>#include <vector>
#include <array>
#include <string>


int main( )

{

std::vector<int> vect;
vect={1,2,3,4,5,6};

for (int i = 0; i < +vect.size(); i++)
{

    std::cout << vect[i] << '\n';

}

}
