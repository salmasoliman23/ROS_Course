#include <ros/ros.h>
#include <std_msgs/String.h> 
#include <iostream>
#include"slmlm/total.h"
using namespace std;
main (int argc, char **argv)
{
  ros::init (argc, argv, "publisher_node");
  ros::NodeHandle handler;
  ros::Publisher pub = handler.advertise <slmlm::total> ("task_three",1000);
  ros::Rate loop_rate (1);

  while (ros::ok ())
    {
      slmlm::total num;
      cout << "Enter real: ";
      cin >> num.real;
      cout << "Enter imaginary : ";
      cin >> num.imaginary;
      cout << "complex = " << num.real << "+i" << num.imaginary;

      //ROS_INFO ("%d %d", num.real, num.imaginary);
      pub.publish (num);
      ros::spinOnce ();
      loop_rate.sleep ();
    }

  return 0;
}

