project(simpleROSNode)
cmake_minimum_required(VERSION 2.8)
aux_source_directory(. SRC_LIST)


## ROS stuff
message( STATUS "ROS_ROOT: " $ENV{ROS_ROOT} )
message(STATUS "looking for package 'ROS'")
# http://wiki.ros.org/catkin/CMakeLists.txt#Include_Paths_and_Library_Paths
find_package( catkin REQUIRED COMPONENTS nodelet)
if (catkin_FOUND)
	message( STATUS "-> ROS found")
	include_directories( "${catkin_INCLUDE_DIRS}" )
else()
	message( STATUS "-> ROS NOT found")
endif()


add_executable(${PROJECT_NAME} ${SRC_LIST})


target_link_libraries(${PROJECT_NAME} ${catkin_LIBRARIES} )
