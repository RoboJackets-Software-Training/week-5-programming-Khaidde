#include <ros/ros.h>
#include <string>

void print_value(const std::string& str) {
    ROS_INFO_STREAM(str);
}

int main(int argc, char** argv) {
    ros::init(argc, argv, "printing_node");
    ros::NodeHandle p_nh = ros::NodeHandle("~");

    std::string message;
    p_nh.getParam("message", message);

    int number;
    p_nh.getParam("number_prints", number);

    for (int i=0; i < number; i++) {
        print_value(message);
    }
}