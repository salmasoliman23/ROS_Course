#include"ros/ros.h"
#include<sstream>
#include"std_msgs/String.h"

int main(int argc, char**argv)
{
ros::init(argc, argv, "talker"); 
    ros::NodeHandle handler; 
        ros::Publisher pub =  handler.advertise<std_msgs::String>("chatter",1000);
            ros::Rate loop_rate(20);
            int counter = 0;
        while(ros::ok())
            {    std_msgs::String msg_obj;
                    std::stringstream strm;
                        strm << "counter = "<< counter;
                            msg_obj.data = strm.str();
                                ROS_INFO("%s", msg_obj.data.c_str());
                                
                                    pub.publish(msg_obj);
                                    ros::spinOnce();
                                    loop_rate.sleep();
                                    counter++;
            }           


return 0;
}
