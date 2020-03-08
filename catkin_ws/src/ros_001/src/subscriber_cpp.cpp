#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <std_msgs/String.h>
#include <stdlib.h>

 void chatterCallback(const std_msgs::String::ConstPtr& msg)
  {
     ROS_INFO("I heard: [%s]", msg->data.c_str());
   }


int main(int argc , char **argv)
{
 ros::init(argc,argv,"subscriber_cpp"); /* init node */
 ros::NodeHandle n;   /* create node handler */
 ros::Subscriber sub = n.subscribe("/topic1_cpp", 1000, chatterCallback);
 ros::spin();
    
  return 0;


}
