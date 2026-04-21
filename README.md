# Mobile Robot Implementation Guide (Physical Build)

Welcome to the complete guide for building the physical version of the mobile robot! This repository provides all the essential hardware connections, wiring diagrams, and setup instructions to bring your robot to life.

## Hardware Architecture
![Robot Architecture](https://ros-mobile-robots.com/fritzing/remo_architecture.svg)

---

## Step-by-Step Build Guide

Follow these steps to build your robot from scratch:

### 1. Physical Assembly
* **Chassis**: Start by assembling the robot chassis according to your kit's instructions.
* * **Motors**: Attach the 4 DC Gear Motors to the designated slots on the chassis.
  * * **LIDAR**: Mount the RPLIDAR A1/A2 on the top-most platform to ensure an unobstructed 360 degree view.
    * * **SBC and MCU**: Secure the Raspberry Pi and Teensy 4.0 using standoffs or mounting tape.
     
      * ### 2. Wiring
      * * **Motor Driver**: Connect the motors to the M1-M4 terminals on your motor driver.
        * * **Encoders**: Connect the encoder Phase A/B wires to Teensy pins 5, 6 (Left) and 7, 8 (Right).
          * * **Power**: Use a 12V battery for the motor driver and a 5V buck converter for the Raspberry Pi.
            * * **Communication**: Connect the Teensy 4.0 to the Raspberry Pi using a Micro-USB cable.
             
              * ### 3. Software Setup
              * * **Install ROS**: Install ROS Noetic (for Pi 4) or ROS 2 Foxy/Humble on your Raspberry Pi.
                * * **Workspace**: Create a catkin workspace and clone this repository into the src folder.
                  * * **Compile**: Run catkin_make or colcon build to compile the package.
                   
                    * ### 4. First Run
                    * * **Launch RViz**: Open a terminal and run:
                      * ```bash
                        roslaunch mobile_robot_description mobile_robot_rviz.launch
                        ```

                        ## Quick Links
                        * **Developer Documentation**: [ros-mobile-robots.com](https://ros-mobile-robots.com)
                        * * **Original Repository**: [ros-mobile-robots/mobile_robot_description](https://github.com/ros-mobile-robots/mobile_robot_description)
                          * 
