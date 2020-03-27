#include <ros/ros.h>
#include <std_msgs/Int8.h>
#include <std_msgs/String.h>
#include <stdlib.h>

int main(int argc , char **argv)
{
  int i=0;
 ros::init(argc,argv,"publisher_cpp"); /* init node */
 ros::NodeHandle n;   /* create node handler */
 ros::Publisher pub = n.advertise<std_msgs::Int8>("/sensor/ultrasonic",10);
 ros::Publisher pub2 =n.advertise<std_msgs::Int8>("motor/vel_msg",10);
 ros::Rate rate(0.5); // 0.5 HZ 

 while (ros::ok()) {
        std_msgs::Int8 msg;

        for (i=100; i>=0 ;i-=5)
         {
		msg.data = i;
                ROS_INFO("Send Ultrasonic Value :%d", msg.data);
		pub.publish(msg);
		pub2.publish(msg);
                if( i == 0 ){
                    i=105;         
                  }
		rate.sleep();


         }
    }

}
