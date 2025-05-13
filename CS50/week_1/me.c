#import <cs50.h>
#import <stdio.h>

int main(void) {
    string yourName = get_string("What's your name? \n");
    printf("hello, %s\n", yourName);
}
