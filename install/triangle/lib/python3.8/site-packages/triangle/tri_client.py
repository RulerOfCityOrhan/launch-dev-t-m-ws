#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from custom_interfaces.srv import Triangle

class TriCliNode(Node):
    def __init__(self):
        super().__init__("TriCliNode")
        self.client = self.create_client(Triangle, "triangle")

        while not self.client.wait_for_service(3.0):
            self.get_logger().warn("Waiting for server - [triangle]")
        
        while True:
            self.get_logger().info("Assign edges of triangle to the variables a, b, c.")
            a = input("a: ")
            try:
                a = int(a)
                b = int(input("b: "))
                c = int(input("c: "))

                request = Triangle.Request()
                request.a = a
                request.b = b
                request.c = c
                self.future = self.client.call_async(request=request)

                rclpy.spin_until_future_complete(node = self, future = self.future)
            
            except Exception as e:
                if type(e) == ValueError:
                    self.get_logger().warn("Don't put letters in variables!")
                else:
                    self.get_logger().warn("Service call failed %r" % (e,))




def main(args=None):
    rclpy.init(args=args)
    node = TriCliNode()

    rclpy.spin(node)
    rclpy.shutdown()



if __name__=="__main__":
    main()