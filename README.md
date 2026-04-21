# Mobile Robot Full Guide # Mobile Robot Full Guide

[![ROS 1](https://img.shields.io/badge/ROS-Noetic-blue.svg)](http://wiki.ros.org/noetic)
[![ROS 2](https://img.shields.io/badge/ROS-Foxy-orange.svg)](https://docs.ros.org/en/foxy/index.html)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

A comprehensive, professional guide and repository for building a 4-wheel drive autonomous mobile robot using ROS. This project includes URDF models, Gazebo simulations, and detailed hardware wiring instructions.

![Mobile Robot Rendering](https://github.com/ros-mobile-robots/diffbot/raw/noetic-devel/diffbot_description/images/diffbot_rendering.png)

---

## Table of Contents
1. [Overview](#overview)
2. 2. [Hardware Requirements](#hardware-requirements)
   3. 3. [Wiring and Connections](#wiring-and-connections)
      4. 4. [Step-by-Step Build Guide](#step-by-step-build-guide)
         5. 5. [Software Setup](#software-setup)
            6. 6. [Quick Start](#quick-start)
              
               7. ---
              
               8. ## Overview
               9. > "The best way to predict the future is to invent it."
                  >
                  > This repository provides all the necessary files and documentation to build a fully functional autonomous robot. Whether you are a student, hobbyist, or researcher, this guide is designed to be accessible to all skill levels.
                  >
                  > ---
                  >
                  > ## Hardware Requirements
                  > The physical robot is built using high-quality, accessible components:
                  >
                  > *   **Microcontroller:** `Teensy 4.0` (High-performance real-time control)
                  > *   *   **SBC:** `Raspberry Pi 4 Model B` (High-level ROS navigation)
                  >     *   *   **Sensors:**
                  >         *       *   `Slamtec RPLIDAR A1/A2` (360 Laser Scanner)
                  >         *       *   `Hall-effect Encoders` (Precision odometry)
                  >         *   *   **Motors:** 4 x `DC Gear Motors`
                  >             *   *   **Battery:** 12V Li-Po (Main power) with 5V voltage regulator for electronics.
                  >              
                  >                 *   ---
                  >              
                  >                 *   ## Wiring and Connections
                  >                 *   The following diagram and table describe the electrical connections between components.
                  >              
                  >                 *   ### Hardware Architecture
                  >                 *   ![Hardware Architecture](https://ros-mobile-robots.com/fritzing/remo_architecture.svg)
                  >              
                  >                 *   ### Connection Table
                  >                 *   | Component | Device | Connection / Pins |
                  >                 *   | :--- | :--- | :--- |
                  >                 *   | **Encoders (L)** | Teensy 4.0 | Pins 5, 6 |
                  >                 *   | **Encoders (R)** | Teensy 4.0 | Pins 7, 8 |
                  >                 *   | **Motor Driver** | Teensy 4.0 | I2C (Pins 18/SDA, 19/SCL) |
                  >                 *   | **Teensy 4.0** | Raspberry Pi 4 | USB Serial |
                  >                 *   | **LIDAR** | Raspberry Pi 4 | USB |
                  >              
                  >                 *   ---
                  >              
                  >                 *   ## Step-by-Step Build Guide
                  >
                  > ### Phase 1: Physical Assembly
                  > 1.  **Chassis Setup:** Secure the base plate and attach the 4 motor mounts.
                  > 2.  2.  **Motor Mounting:** Bolt the DC motors to the mounts and attach the wheels.
                  >     3.  3.  **Sensor Placement:** Mount the RPLIDAR on the top deck for an unobstructed 360 view.
                  >         4.  4.  **Electronics Deck:** Secure the Raspberry Pi and Teensy using spacers.
                  >           
                  >             5.  ### Phase 2: Wiring
                  >             6.  1.  **Motor Driver:** Connect the motors to the H-bridge driver.
                  >                 2.  2.  **Microcontroller:** Interface the encoders with the Teensy pins for real-time odometry feedback.
                  >                     3.  3.  **Communication:** Plug the Teensy and LIDAR into the Raspberry Pi's USB ports.
                  >                       
                  >                         4.  ### Phase 3: Software Installation
                  >                         5.  1.  **OS Setup:** Install Ubuntu 20.04 and ROS Noetic/Foxy on the Raspberry Pi.
                  >                             2.  2.  **Workspace Creation:** Create your Catkin/Colcon workspace.
                  >                                 3.  3.  **Cloning:** Clone this repository into your src folder.
                  >                                   
                  >                                     4.  ### Phase 4: First Run
                  >                                     5.  1.  **Sourcing:** Source your workspace (source devel/setup.bash).
                  >                                         2.  2.  **Launch:** Execute the visualization launch file to see the robot in RViz.
                  >                                           
                  >                                             3.  ---
                  >                                           
                  >                                             4.  ## Software Setup
                  >                                             5.  ```bash
                  >                                                 # Update system
                  > sudo apt update && sudo apt upgrade
                  >
                  > # Install dependencies
                  > sudo apt install ros-noetic-desktop-full ros-noetic-diff-drive-controller
                  >
                  > # Setup workspace
                  > mkdir -p ~/catkin_ws/src
                  > cd ~/catkin_ws/src
                  > git clone https://github.com/praveenkumar3911/mobile_robot_full_guide.git
                  >
                  > # Build
                  > cd ~/catkin_ws
                  > catkin_make
                  > source devel/setup.bash
                  > ```
                  >
                  > ---
                  >
                  > ## Quick Start
                  > Launch the robot visualization with a single command:
                  > ```bash
                  > roslaunch mobile_robot_description mobile_robot_rviz.launch
                  > ```
                  >
                  > ---
                  >
                  > ## Useful Links
                  > *   **Official Website:** [ros-mobile-robots.com](https://ros-mobile-robots.com)
                  > *   *   **Original Source:** [ros-mobile-robots/mobile_robot_description](https://github.com/ros-mobile-robots/mobile_robot_description)
                  >     *   
