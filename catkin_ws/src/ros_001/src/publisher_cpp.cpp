#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <std_msgs/String.h>
#include <stdlib.h>

int main(int argc , char **argv)
{
 ros::init(argc,argv,"publisher_cpp"); /* init node */
 ros::NodeHandle n;   /* create node handler */
 ros::Publisher pub = n.advertise<std_msgs::String>("/topic1_cpp", 10);
 ros::Rate rate(2); /* 2 HZ */

 while (ros::ok()) {
        std_msgs::String msg;
        msg.data = "hello from cpp publisher";
        pub.publish(msg);
        rate.sleep();
    }



}
