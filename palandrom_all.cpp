#include<iostream>
using namespace std;

int lower(char s){
    if(s>='a'&&s<='z'){
        return s;
    }
    else{
        return s-'A'+'a';
    }
}

int palandrom(char str[],int n){
    int s=0;
    int e=n-1;
       while (s <= e) {
        // Skip non-alphabetic characters from the start
        if (!(lower(str[s]) >= 'a' && lower(str[s]) <= 'z')) {
            s++;
            continue;
        }

        // Skip non-alphabetic characters from the end
        if (!(lower(str[e]) >= 'a' && lower(str[e]) <= 'z')) {
            e--;
            continue;
        }

        // Compare characters at s and e
        if (lower(str[s]) != lower(str[e])) {
            return 0;  // Not a palindrome
        }
        else{
        // Move inward
        s++;
        e--;
        }

    }

    return 1;  // Palindrome
}


