#include "Talker.h"
#include "ros/ros.h"
#include "std_msgs/String.h"


//#include <sstream>


/**
 * This tutorial demonstrates simple sending of messages over the ROS system.
 */
Talker::Talker(){}


void Talker::run()
{
    int argc;
    char **argv;
    ros::init(argc, argv, "listener");
}
void requestStop()
{
    ros::shutdown();
}
