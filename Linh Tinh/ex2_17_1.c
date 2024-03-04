/*During the past decade ocean levels have been rising faster than in the past, an average of approximately 3.1 millimeters per year. 
Write a program that computes the ocean levels  expected to rise in the next 20 years if they continue rising at this rate.
 Display the result in both centimeters and inches measures. */
#include<stdio.h>
int main(){
    double average_of_approximately = 3.1;
    double ocean_level_20years;
        ocean_level_20years = average_of_approximately * 20;
    double centimeters = ocean_level_20years / 10;
    double inches = ocean_level_20years / 2.54;
    printf("he ocean levels expected to rise in the next 20 years: %.2f centimeters & %.2f inches", centimeters, inches);
    return 0;   
}