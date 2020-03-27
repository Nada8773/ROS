#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <std_msgs/Int8.h>
#include <std_msgs/String.h>
#include <stdlib.h>
#include <sstream>

 void CallbackFunction(const std_msgs::Int8::ConstPtr& msg)
  {

     ROS_INFO("Receive Ultrasonic Value :%d ",msg->data);

   }


int main(int argc , char **argv)
{
 ros::init(argc,argv,"subscriber_cpp"); /* init node */
 ros::NodeHandle n;   /* create node handler */
 ros::Subscriber sub = n.subscribe("/sensor/ultrasonic", 1000, CallbackFunction);
 
 ros::spin();
    
  return 0;


}
