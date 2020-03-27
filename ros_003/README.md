# ROS (Ropotic Operating System)

ROS System Based on :

1. A node to simulate ultrasonic, sending integer values from 100 -to- 0, simulating a proximity value in centimeters, with values rotating 
from 100-to-0 then restarting from 100 again. Data is published to topic '/sensor/ultrasonic'. Publishing rate is 2 seconds (0.5Hz [0.5 messages/sec]). Decrement rate from 100-to-0 is -5.
2. A node that subscribes to topic '/sensor/ultrasonic', and decides if robot should keep moving forward or stop. Then publish a twist message on topic 'motor/vel_msg' with corresponding values (move forward with specific speed or stop). Robot must stop if an obstacle is available at distance less than 30 cm, otherwise, it should keep moving forward. When moving forward, speed is decided based on distance between robot and nearest obstacle, that speed increases till '1' when no obstacles at distance 70cm or more, and it decreases till stop at distance 30cm or less.
3. A node that subscribes to topic '/motor/vel_msg', decoding the incoming data and writing on screen the corresponding command as following:
3.a. Robot is moving forward with given speed. e.g. "Robot is moving forward with speed = 0.4"
3.b. Robot stopped. e.g. "Robot stopped
       

