#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
         create_connect();

     set_create_distance(0);
    while (get_create_distance()<690)
           {
               create_drive_direct(-75,-70);
           }
 create_stop();
    msleep(500);
        set_create_distance(0);
    while (get_create_distance()<110)
           {
               create_drive_direct(5,75);
           }
 create_stop();
    msleep(500);


    
    enable_servos();
    set_servo_position(2,575);
    msleep(1000);
    ao(); 

      motor(0,-35);
    msleep(4900);

     enable_servos();
    set_servo_position(1,157);
    msleep(1000);
    ao();
 
    set_create_distance(0);
    while (get_create_distance()<570)
           {
               create_drive_direct(75,95);
           }
 create_stop();
    msleep(500);
    
        enable_servos();
set_servo_position(1,301);
    msleep(1000);
    ao();
    msleep(500);
 
        
 	     motor(0,35);
    msleep(3500);
    ao();
    msleep(500);
    
    set_create_distance(0);
    while (get_create_distance()<290)
           {
               create_drive_direct(75,5);
           }
 create_stop();
    msleep(500);

    set_create_distance(0);
    while (get_create_distance()<1090)
           {
               create_drive_direct(75,75);
           }
 create_stop();
    msleep(500);

          
 create_disconnect();
         return 0;
}
