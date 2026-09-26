import rclpy
from rclpy.node import Node
from std_msgs.msg import String
import time
from message_interface.msg import NodeMessage    #自定义消息类型

class NodePublisher(Node):
    def __init__(self):
        super().__init__('node_publisher')
        self.publisher_ = self.create_publisher(NodeMessage, 'topic', 10)
        timer_period = 1.0  # 注册一个定时器，周期为1秒
        self.timer = self.create_timer(timer_period, self.timer_callback)
        self.i = 0

    def timer_callback(self):
        msg = NodeMessage()
        msg.data = 'Hello, world! %d' % self.i
        self.publisher_.publish(msg)# 发布消息
        self.get_logger().info('Publishing: "%s"' % msg.data)
        self.i += 1

def main():
    rclpy.init()
    node_publisher = NodePublisher()
    rclpy.spin(node_publisher)
    node_publisher.destroy_node()
    rclpy.shutdown()