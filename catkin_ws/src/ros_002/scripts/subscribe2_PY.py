#!/usr/bin/env python
import rospy
from geometry_msgs.msg import Twist

def DisplayMsg(msg):
    rospy.loginfo("Received msg from /vel_msg_1 ")
    rospy.loginfo("Linear Value [%f,%f,%f]"%(msg.linear.x,msg.linear.y,msg.linear.z))
    rospy.loginfo("Angular Value [%f,%f,%f]"%(msg.angular.x,msg.angular.y,msg.angular.z))


def subscriber():
    rospy.init_node('subscriber3_node', anonymous=False)
    rospy.Subscriber('/vel_msg_1', Twist, DisplayMsg)
    rospy.spin()

if __name__== '__main__':
    try:
        subscriber()
    except rospy.ROSInterruptException:
        pass
