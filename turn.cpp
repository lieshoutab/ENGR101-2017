#include <stdio.h>
int turn_left(int duration){
          set_motor(1, 255);
        	set_motor(2, -255);
        	sleep1(0, 500000);
        	stop(1);
        	stop(2);
        	return 0;}
