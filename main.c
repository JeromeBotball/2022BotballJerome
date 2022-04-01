#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    motor(0,40);
    motor(3,40);
    msleep(4000);
    
    motor(0,0);
    motor(3,47);
    msleep(3000);
    
    motor(0,68);
    motor(3,68);
    msleep(7000);
    
    motor(0,55);
    motor(3,0);
    msleep(2500);
    
    motor(0,20);
    motor(3,20);
    msleep(2500);
    return 0;
}
