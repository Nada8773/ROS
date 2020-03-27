#include <ros/ros.h>
#include <geometry_msgs/Twist.h>
#include <std_msgs/Int8.h>
#include <std_msgs/Float32.h>
#include <std_msgs/String.h>
#include <stdlib.h>


float speed=1;

void CallbackFunction(const std_msgs::Int8::ConstPtr& msg)
  {     

     if (msg->data < 30)  // stop car
        {
     	ROS_INFO("Robot stopped");
	}
     else if(msg->data >= 70) //foward 
	{
        ROS_INFO("Robot is moving forward with speed = %d",1);
	}
     else if(msg->data < 70) 
        {
           speed = speed - 0.125 ;
           ROS_INFO("Robot is moving forward with speed = %f",speed);
           if(speed ==0 )
            {
              speed = 1;
            }
        }
 }


int main(int argc , char **argv)
{
 ros::init(argc,argv,"subscriberMotor_cpp"); /* init node */
 ros::NodeHandle n;   /* create node handler */
 ros::Subscriber sub = n.subscribe("/motor/vel_msg", 1000, CallbackFunction);

 ros::spin();
    
  return 0;


}
