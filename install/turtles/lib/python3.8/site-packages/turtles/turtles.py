#!/usr/bin/env python3

import rclpy
import rclpy.executors
from rclpy.node import Node
from geometry_msgs.msg import Twist, Vector3
import os


class Turtle1(Node):
    def __init__(self):
        super().__init__("TurtlesNode")
        
        self.publisher = self.create_publisher(Twist, "/turtle1/cmd_vel", 10)
        self.timer = self.create_timer(0,self.loop)


        self.get_logger().info("There is no error.")

    def loop(self):
        msg = Twist()
        msg.angular = Vector3()
        msg.linear.x = 2.0
        msg.angular.z = 1.8
        self.publisher.publish(msg=msg)

class Turtle2(Node):
    def __init__(self):
        super().__init__("TurtlesNode")
        self.counterr = 0
        
        self.publisher = self.create_publisher(Twist, "/turtle2/cmd_vel", 10)
        self.timer = self.create_timer(2,self.loop)


        self.get_logger().info("There is no error.")

    def loop(self):
        msg = Twist()
        msg.angular = Vector3()

        if self.counterr == 0:
            msg.linear.x = 2.0
            msg.angular.z = 0.0
            self.publisher.publish(msg=msg)
            self.counterr = 1
        else:
            msg.linear.x = 0.0
            msg.angular.z = 2.08
            self.publisher.publish(msg=msg)
            self.counterr = 0

class Turtle3(Node):
    def __init__(self):
        super().__init__("TurtlesNode")
        self.counterr = 0
        
        self.publisher = self.create_publisher(Twist, "/turtle3/cmd_vel", 10)
        self.timer = self.create_timer(2,self.loop)


        self.get_logger().info("There is no error.")

    def loop(self):
        msg = Twist()
        msg.angular = Vector3()

        if self.counterr == 0:
            msg.linear.x = 1.0
            msg.angular.z = 0.0
            self.publisher.publish(msg=msg)
            self.counterr = 1
        else:
            msg.linear.x = 0.0
            msg.angular.z = 1.057
            self.publisher.publish(msg=msg)
            self.counterr = 0

class Turtle4(Node):
    def __init__(self):
        super().__init__("TurtlesNode")
        self.counterr = 0
        
        self.publisher = self.create_publisher(Twist, "/turtle4/cmd_vel", 10)
        self.timer = self.create_timer(2,self.loop)


        self.get_logger().info("There is no error.")

    def loop(self):
        msg = Twist()
        msg.angular = Vector3()

        if self.counterr == 0:
            msg.linear.x = 1.0
            msg.angular.z = 0.0
            self.publisher.publish(msg=msg)
            self.counterr = 1
        else:
            msg.linear.x = 0.0
            msg.angular.z = 1.257
            self.publisher.publish(msg=msg)
            self.counterr = 0

class Turtle5(Node):
    def __init__(self):
        super().__init__("TurtlesNode")
        self.counterr = 0
        
        self.publisher = self.create_publisher(Twist, "/turtle5/cmd_vel", 10)
        self.timer = self.create_timer(2,self.loop)


        self.get_logger().info("There is no error.")

    def loop(self):
        msg = Twist()
        msg.angular = Vector3()

        if self.counterr == 0:
            msg.linear.x = 2.0
            msg.angular.z = 0.0
            self.publisher.publish(msg=msg)
            self.counterr = 1
        else:
            msg.linear.x = 0.0
            msg.angular.z = 1.57
            self.publisher.publish(msg=msg)
            self.counterr = 0

def turtles():
    os.system('gnome-terminal -- bash -c "ros2 run turtlesim turtlesim_node"')
    os.system("""ros2 service call /spawn turtlesim/srv/Spawn "{x: 1, y: 1, theta: 0, name: 'turtle2'}" """)
    os.system("""ros2 service call /spawn turtlesim/srv/Spawn "{x: 7, y: 1, theta: 0, name: 'turtle3'}" """)
    os.system("""ros2 service call /spawn turtlesim/srv/Spawn "{x: 1, y: 7, theta: 0, name: 'turtle4'}" """)
    os.system("""ros2 service call /spawn turtlesim/srv/Spawn "{x: 8, y: 8, theta: 0, name: 'turtle5'}" """)



def main(args=None):
    turtles()
    rclpy.init(args=args)
    
    turtle1 = Turtle1()
    turtle2 = Turtle2()
    turtle3 = Turtle3()
    turtle4 = Turtle4()
    turtle5 = Turtle5()
    executer = rclpy.executors.MultiThreadedExecutor()
    executer.add_node(turtle1)
    executer.add_node(turtle2)
    executer.add_node(turtle3)
    executer.add_node(turtle4)
    executer.add_node(turtle5)

    executer.spin()
    rclpy.shutdown()



if __name__=="__main__":
    main()