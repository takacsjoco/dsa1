//
// Created by z on 2/26/25.
//

#include <math.h>
#include "utils.h"

bool isPrime(int number) //primszam teszt
{
    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for (int i = 0; i <= sqrt(number); i+=2)
    {
        if(number % i == 0)
        {
        return false;
        }
    }
    return true;
}


bool isPalindrome(int number) //tukorszam tesztelese
{
    
    return 0;
}
