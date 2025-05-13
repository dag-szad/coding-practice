#include <ctype.h>
#include <cs50.h>
#include <stdio.h>

int main(void){

    int weeks = get_int("Number of weeks taking CS50: ");

    int weekHours[] = {};

    int i;
    for (i = 0; i <= weeks; i++) {
        int hours = get_int("Week %d HW Hours:", i);
        weekHours[i] = hours;
        printf("%d\n", weekHours[i]);
    }

}
