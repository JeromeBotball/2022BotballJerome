#include <kipr/wombat.h>

int main()
{
  printf("Starting\n");
	wait_for_light(0);
    motor(0,49);
    motor(3,50);
    msleep(1500);
    
  printf("Turning\n");
    motor(0,0);
    motor(3,40);
    msleep(3000);
    
  printf("GettingPoms\n");
    motor(0,89);
    motor(3,90);
    msleep(9000);
    
  printf("Turning2\n");
    motor(0,0);
    motor(3,47);
    msleep(6000);

  printf("DONE\n");
    motor(0,89);
    motor(3,90);
    msleep(9500);
    
  printf("Turning2\n");
    motor(0,-89);
    motor(3,-90);
    msleep(500);
    return 0;
}
