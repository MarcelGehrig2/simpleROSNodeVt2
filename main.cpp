#include <iostream>

//ROS stuff
#include <ros/ros.h>
//#include <ros/console.h>
//#include <std_msgs/String.h>
#include <std_msgs/Float64.h>
#include <sensor_msgs/Joy.h>
#include <sensor_msgs/LaserScan.h>


using namespace std;

int main(int argc, char *argv[])
{
	cout << "TEST: 'simpleROSNode' stated" << endl;


	ros::init(argc, argv, "testNode");
	ros::NodeHandle n;

	ros::Publisher chatter_topic1 = n.advertise<std_msgs::Float64>("testNode/TestTopic1", 1000);
	ros::Publisher chatter_topic2 = n.advertise<sensor_msgs::Joy>("testNode/TestTopic2", 1000);
	ros::Publisher chatter_topic3 = n.advertise<sensor_msgs::LaserScan>("testNode/TestTopic3", 1000);
	ros::Rate loop_rate(10);	// 10Hz


	double count = 0;
	while (ros::ok())
	{
		std_msgs::Float64 msg1;
		sensor_msgs::Joy msg2;
		sensor_msgs::LaserScan msg3;

		msg1.data = static_cast<double>( count/3 );

		msg2.header.stamp = ros::Time::now();
		sensor_msgs::Joy::_axes_type axes {count/10, (count+1)/10, (count+2)/10};
		msg2.axes = axes;
		sensor_msgs::Joy::_buttons_type buttons {count, count+1, count+2, count+3, count+4};
		msg2.buttons = buttons;

		msg3.header.stamp = ros::Time::now();
		msg3.angle_min = (count+10)/10;
		msg3.angle_max = (count+11)/10;
		msg3.angle_increment = (count+12)/10;
		msg3.scan_time = (count+13)/10;
		msg3.range_min = (count+14)/10;
		msg3.range_max = (count+15)/10;
		msg3.ranges = axes;
		msg3.intensities = axes;


		chatter_topic1.publish(msg1);
		chatter_topic2.publish(msg2);
		chatter_topic3.publish(msg3);

		ros::spinOnce();

		loop_rate.sleep();
		++count;
	}

	cout << "TEST: 'simpleROSNode' finished" << endl;
	return 0;
}
