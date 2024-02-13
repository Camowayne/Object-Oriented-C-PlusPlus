/*
This program is meant to be an example for the loop example of Lab 3's questions
*/

#include <iostream>
#include <cstdlib>

int main() {
    int x = 0;
    int y = 5;

    while(x < y) {
        printf("%i\n",x);
        x++;
    }
    printf("Looped through 5 times\n");
}