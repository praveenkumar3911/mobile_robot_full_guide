cmake_minimum_required(VERSION 3.0.2)
project(mobile_robot_description)

find_package(catkin REQUIRED COMPONENTS
  joint_state_publisher
    robot_state_publisher
      rviz
      )

      catkin_package(
        CATKIN_DEPENDS joint_state_publisher robot_state_publisher rviz
        )

        include_directories(
          ${catkin_INCLUDE_DIRS}
          )
