#include <ros/ros.h>
#include <std_msgs/String.h>
#include<iostream>
#include "slmlm/total.h"
void callback (const slmlm::total& num)
{
  ROS_INFO ("I heard: [ %d %d]", num.real, num.imaginary);
}
int main (int argc, char **argv)
{
  ros::init (argc, argv, "subscriber_node");
  ros::NodeHandle handler;
  ros::Subscriber sub = handler.subscribe ("task_three", 1000, &callback);

  ros::spin ();
  return 0;
}

