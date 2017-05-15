#include <iostream>

//ROS stuff
#include <ros/ros.h>
//#include <ros/console.h>
//#include "std_msgs/String.h"


using namespace std;

int main(int argc, char *argv[])
{
	cout << "TEST: 'simpleROSNode' stated" << endl;


	ros::init(argc, argv, "simpleROSNode");
	ros::NodeHandle n;
	ROS_INFO("%s", "Hello World");
	ROS_DEBUG("Hello %s", "World");


	cout << "ROS node shuts down after 10 seconds." << endl;
	sleep(10);




	cout << "TEST: 'simpleROSNode' finished" << endl;
	return 0;
}
