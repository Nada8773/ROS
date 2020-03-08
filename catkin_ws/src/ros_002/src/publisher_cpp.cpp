#include <ros/ros.h>
#include <std_msgs/Int8.h>
#include <stdlib.h>

int main(int argc , char **argv)
{
  int i=0;
 ros::init(argc,argv,"publisher_cpp"); /* init node */
 ros::NodeHandle n;   /* create node handler */
 ros::Publisher pub = n.advertise<std_msgs::Int8>("/test_topic_1",10);
 ros::Rate rate(2); /* 2 HZ */

 while (ros::ok()) {
        std_msgs::Int8 msg;
        for (i=0;i<11;i++)
         {
		msg.data = i;
                ROS_INFO("%d", msg.data);
		pub.publish(msg);
		rate.sleep();
         }
    }



}
