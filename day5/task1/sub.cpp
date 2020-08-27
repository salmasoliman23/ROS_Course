#include<ros/ros.h>
#include<std_msgs/String.h>
void callback(const std_msgs::String::ConstPtr& msg_obj)
{
    ROS_INFO("I heard: [%s]", msg_obj->data.c_str());
}
int main(int argc, char**argv)
{
ros::init(argc, argv, "listener"); 
    ros::NodeHandle handler; 
        ros::Subscriber sub =  handler.subscribe("chatter",1000,callback);
            
                                    ros::spin();
return 0;
}
