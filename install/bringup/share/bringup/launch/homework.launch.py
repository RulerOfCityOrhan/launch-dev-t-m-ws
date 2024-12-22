from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    triall_node = Node(package="triangle", executable="triall")
    #trisrv_node = Node(package="triangle", executable="trisrv")
    #tricli_node = Node(package="triangle", executable="tricli")
    cift_sayi_node1 = Node(package="cift_sayi", executable="talker")
    cift_sayi_node2 = Node(package="cift_sayi", executable="listener")
    turtle = Node(package="turtles", executable="turtles")

    #ld.add_action(trisrv_node)
    #ld.add_action(tricli_node)
    ld.add_action(triall_node)
    ld.add_action(cift_sayi_node1)
    ld.add_action(cift_sayi_node2)
    ld.add_action(turtle)

    return ld