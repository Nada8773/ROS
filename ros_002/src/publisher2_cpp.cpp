#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <stdlib.h>

int main(int argc , char **argv)
{
  int i=0;
 ros::init(argc,argv,"publisher2_cpp"); /* init node */
 ros::NodeHandle n;   /* create node handler */
 ros::Publisher pub =n.advertise<geometry_msgs::Twist>("vel_msg_1",10);
 ros::Rate rate(2); /* 2 HZ */

 while (ros::ok()) {

                geometry_msgs::Twist msg;
        
		msg.linear.x = 0;
		msg.linear.y = 0;
		msg.linear.z = 0;
		msg.angular.x =1; 
		msg.angular.y= 0;
		msg.angular.z= 0;
		pub.publish(msg);
		rate.sleep();
         
    }



}
