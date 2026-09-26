import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from message_interface.msg import NodeMessage

class NodeSubscriber(Node):
    def __init__(self):
        super().__init__('node_subscriber')
        self.subscription = self.create_subscription(
            NodeMessage,
            'topic',
            self.listener_callback,
            10)
        self.subscription  # prevent unused variable warning

    def listener_callback(self, msg):
        self.get_logger().info('接收到: "%s"' % msg.data)


def main():
    rclpy.init()
    node_subscriber = NodeSubscriber()
    rclpy.spin(node_subscriber)
    node_subscriber.destroy_node()
    rclpy.shutdown()
