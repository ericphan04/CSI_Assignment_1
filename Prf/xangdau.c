#include<stdio.h>
    float fuel_efficiency(float gasoline, int minutes, float speed) {
    float hour = minutes / 60.0;
    float distance = hour * speed;
    float fuel_efficiency = gasoline / distance;
    return ((int)(fuel_efficiency * 100 + 0.5)) / 100.0; //*100 + 0.5))/100;return ((int)(fuel_efficiency * 100 + 0.5)) / 100.0;
    }
    float number_of_mile(float radius, int revolutions){
        float distance =  2 * 3.141592 * radius * revolutions / 63360.0;
        return ((int)( distance * 100 + 0.5)) / 100.0;
    }
    
        float fuel_efficiency2(float radius, int revolutions, float gasoline) {
    float distance = number_of_mile(radius, revolutions);
    float fuel_efficiency = distance / gasoline;
    return ((int)(fuel_efficiency * 100 + 0.5)) / 100.0;
    
    }
int main(){
    int opt;
    float radius;
    int revolutions ;
    float speed;
    float gasoline;
    int minutes;
    printf("  Menu\n");
    printf("1. Calculating Fuel Economy\n");
    printf("2. Calculating Distance Traveled\n");
    printf("3. Revised Fuel Economy Calculation \n");
    printf(" Your choice:  ");
    scanf("%d",&opt);
switch(opt){
    case 1: 
    printf("Input the number of minutes the car has traveled: ");
    scanf("%d",&minutes);
    printf("Input the speed of the car: ");
    scanf("%f",&speed);
    printf("Input the gasoline consumed: ");
    scanf("%f",&gasoline);
    printf(" The fuel efficiency in miles per gallon: %.2f mile per gallon",fuel_efficiency(gasoline, minutes, speed));
    break;
    case 2:
    printf("Input the radius of the tires: ");
    scanf("%f",&radius);
    printf("Input the number of revolutions of the tires:  ");
    scanf("%d",&revolutions);
    printf("The number of miles the car: %.2f miles ",number_of_mile(radius,revolutions));
    break;
    case 3:
    printf("Input the radius of the car's tires: ");
    scanf("%f",&radius);
    printf("Input the number of revolutions of the tires:  ");
    scanf("%d",&revolutions);
    printf("Input the gasoline consumed: ");
    scanf("%f",&gasoline);
    printf(" The fuel efficiency in miles per gallon: %.2f mile per gallon",fuel_efficiency2(radius, revolutions, gasoline));
    break;
    default:
    printf("Try again!");
    break;

    
}
return 0;



}