# Mobile Robot Full Guide

[![ROS 1](https://img.shields.io/badge/ROS-Noetic-blue.svg)](http://wiki.ros.org/noetic) [![ROS 2](https://img.shields.io/badge/ROS-Foxy-orange.svg)](https://docs.ros.org/en/foxy/index.html) [![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

A comprehensive guide for building a 4-wheel drive autonomous robot with ROS.

![Mobile Robot](https://raw.githubusercontent.com/ros-mobile-robots/mobile_robot_description/master/docs/mobile_robot_axis.png)

---

## Hardware Requirements
* Microcontroller: Teensy 4.0
* * SBC: Raspberry Pi 4 Model B
  * * Sensors: RPLIDAR A1/A2, Encoders
    * * Motors: 4 x DC Gear Motors
      * * Battery: 12V Li-Po with 5V voltage regulator
       
        * ---
       
        * ## Wiring Diagram
        * ![Hardware Architecture](https://ros-mobile-robots.com/fritzing/remo_architecture.svg)
       
        * ---
       
        * ## Step-by-Step Build
        * 1. Assemble the chassis.
          2. 2. Wire the motors and sensors.
             3. 3. Install ROS on Raspberry Pi.
                4. 4. Clone this repo and run.
                  
                   5. ---
                  
                   6. ## Quick Start
                   7. ```bash
                      git clone https://github.com/praveenkumar3911/mobile_robot_full_guide.git
                      catkin_make
                      roslaunch mobile_robot_description mobile_robot_rviz.launch
                      ```

                      ---

                      ## Useful Links
                      * Official Website: [ros-mobile-robots.com](https://ros-mobile-robots.com)
                      * * Original Source: [ros-mobile-robots/mobile_robot_description](https://github.com/ros-mobile-robots/mobile_robot_description)
                        * 
