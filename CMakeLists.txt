project(simpleROSNode)
cmake_minimum_required(VERSION 2.8)
aux_source_directory(. SRC_LIST)


## ROS with catkin
#message( STATUS "ROS_ROOT: " $ENV{ROS_ROOT} )
#message(STATUS "looking for package 'ROS'")
## http://wiki.ros.org/catkin/CMakeLists.txt#Include_Paths_and_Library_Paths
#find_package( catkin REQUIRED COMPONENTS nodelet)
#if (catkin_FOUND)
#	message( STATUS "-> ROS found")
#	include_directories( "${catkin_INCLUDE_DIRS}" )
#else()
#	message( STATUS "-> ROS NOT found")
#endif()



## ROS without catkin
message( STATUS "ROS_ROOT: " $ENV{ROS_ROOT} )
message(STATUS "looking for package 'ROS'")
# http://wiki.ros.org/catkin/CMakeLists.txt#Include_Paths_and_Library_Paths
find_package( roslib REQUIRED )
if (roslib_FOUND)
	message( STATUS "-> ROS found")
	include_directories( "${roslib_INCLUDE_DIRS}" )
	message( STATUS "roslib_INCLUDE_DIRS: " ${roslib_INCLUDE_DIRS} )
	list(APPEND ROS_LIBRARIES "${roslib_LIBRARIES}")
	find_package( rosconsole REQUIRED)
	list(APPEND ROS_LIBRARIES "${rosconsole_LIBRARIES}")
	find_package( roscpp REQUIRED )
	list(APPEND ROS_LIBRARIES "${roscpp_LIBRARIES}")
else()
	message( STATUS "-> ROS NOT found")
endif()



add_executable(${PROJECT_NAME} ${SRC_LIST})


#target_link_libraries(${PROJECT_NAME} ${catkin_LIBRARIES} )
target_link_libraries(${PROJECT_NAME} ${ROS_LIBRARIES} )

