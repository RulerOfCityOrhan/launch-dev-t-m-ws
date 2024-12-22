#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
import os

class TriAllNode(Node):
    def __init__(self):
        super().__init__("TriAllNode")
        os.system('gnome-terminal -- bash -c "ros2 run triangle trisrv"')
        os.system('gnome-terminal -- bash -c "ros2 run triangle tricli"')




def main(args=None):
    rclpy.init(args=args)
    node = TriAllNode()

    rclpy.spin(node)
    rclpy.shutdown()



if __name__=="__main__":
    main()