# ROS
(package name "ros_102")
publisher_cpp.cpp file
	rosnode to publish numbers from 0 to 10 with time 0.5 sec between every publish.
	Echo the data published on the topic in a new terminal.
	Use topic with name "test_topic_1".
publisher2_cpp.cpp file
	rosnode that publishes a twist vel_msg consisting of linear and angular velocity components.
	Make the angular component values x=0, y=0, z=0. Make linear component values x=1, y=0, z=0.
	Use topic name "vel_msg_1"
subscribe2_PY.py file
	rosnode that subscribes to the topic "vel_msg_1", and whenever a message is received, 
	the node should print the message data on the terminal that is running the node.‏

