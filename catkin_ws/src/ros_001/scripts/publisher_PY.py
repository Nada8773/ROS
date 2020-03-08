#!/usr/bin/env python
import rospy
from std_msgs.msg import String

def simplePublisher():
    pub = rospy.Publisher('/topic1_PY', String, queue_size=5)
    rospy.init_node('node_1', anonymous=False)
    rate = rospy.Rate(2) # 2hz
    while not rospy.is_shutdown():
        pub.publish("my first ROS topic")
        pub.publish("message 2")
        rate.sleep()    # 500msec

if __name__== '__main__':
    try:
        simplePublisher()
    except rospy.ROSInterruptException:
        pass
