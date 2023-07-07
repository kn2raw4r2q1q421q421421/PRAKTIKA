#include <stdio.h>
int main() {
    int t1, t2, t3; //we indicate 3 variables of each person
    printf("Enter 3 values: "); //output the message
    scanf("%d %d %d", &t1, &t2, &t3); //enter 3 numbers and store in a variable
    int total_time = ((t1 + t2 + t3)/3); //we find the average time of eating 1 cake
    float total_time_hours = (float)total_time /3; //we find how much time it takes for 3 people to eat 1 cake
    printf("Time is needed to eat the pie: %.2f hours\n", total_time_hours); //we display the information of the previous line
    return 0; //end program
}