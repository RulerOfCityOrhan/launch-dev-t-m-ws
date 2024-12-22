#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from custom_interfaces.srv import Triangle


class TriSrvNode(Node):
    def __init__(self):
        super().__init__("TriSrvNode")
        self.service = self.create_service(Triangle, "triangle", self.callback)
    

    def callback(self, request, response):
        self.get_logger().info("Request has been taken.")

        if self.tri_cont(request.a, request.b, request.c):
            response.error = ""
            response.perimeter = request.a + request.b + request.c
            response.area = self.tri_area(request.a, request.b, request.c)

        else:
            response.error = "This datas aren't make a triangle!"
            response.perimeter = 0
            response.area = 0.0
        
        return response
    
    def tri_cont(self, a, b, c):
        if (abs(a-c) < b) and (b < a+c):
            if (abs(a-b) < c) and (c < a+b):
                if (abs(b-c) < a) and (a < b+c):
                    return True
                else:
                    return False
            else:
                return False
        else:
            return False
    
    def tri_area(self, a, b, c):
        s = (a+b+c)/2
        return float((s*(s-a)*(s-b)*(s-c))**(1/2))




def main(args=None):
    rclpy.init(args=args)
    node = TriSrvNode()

    rclpy.spin(node)
    rclpy.shutdown()



if __name__=="__main__":
    main()