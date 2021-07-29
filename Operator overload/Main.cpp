#include <iostream>
#include <vector>
#include <array>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include <bits/stdc++.h>
#include "header.h"






int main()
{
srand(time(0));
LivingBeing_C Human,Insect,hybrid;

Human.SET_AT_ONCE(19,"salman",173.123,2,true);
Insect.SET_AT_ONCE(7,"fly",0.132,36,false);

hybrid= Human + Insect;

std::cout << printRandomString(Insect.get_Name(),Human.get_Name()) << '\n';

hybrid.getinfo();
}
