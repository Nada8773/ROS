#!/usr/bin/env python
import rospy
from std_msgs.msg import String

def functionCb(msg):
    rospy.loginfo("Received msg from /topic1 is: %s", msg.data)


def subscriber():
    rospy.init_node('subscriber1_node', anonymous=False)
    rospy.Subscriber('/topic1_PY', String, functionCb)

    rospy.spin()

if __name__== '__main__':
    try:
        subscriber()
    except rospy.ROSInterruptException:
        pass
