//
// Created by z on 3/10/25.
//

#include <string.h>
#include "function.h"

int balancedStringSplit(char *s) {
        int balance=0;
        int count=0;
        for(int i=0;i<strlen(s);i++){
            if(s[i]=='R'){
                balance++;
            }
            else if(s[i]=='L'){
                balance--;
            }
            if(balance==0)
                count++;
        }
        return count;
    }

