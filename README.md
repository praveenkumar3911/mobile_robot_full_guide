![Mobile Robot](https://raw.githubusercontent.com/ros-mobile-robots/mobile_robot_description/master/images/quimera.png)
## Table of Contents
- [Overview](#overview)
- - [Wiring & Hardware Connections](#wiring-hardware-connections)
  - - [Quick Start](#quick-start)
    - 
# Mobile Robot Project Guide

A complete guide for the physical build of the Mobile Robot, including hardware connections and wiring.

## Overview
This repository contains the complete documentation and code for building a 4WD ROS-based mobile robot. It covers both the physical hardware assembly and the ROS software integration.

## Wiring & Hardware Connections

| Component | Pin / Port | Connected To |
| :--- | :--- | :--- |
| **Teensy 4.0** | USB | Raspberry Pi 4 |
| **Slamtec LIDAR** | USB | Raspberry Pi 4 |
| **Left Encoder** | Pins 5 & 6 | Teensy 4.0 |
| **Right Encoder** | Pins 7 & 8 | Teensy 4.0 |
| **Motor Driver (I2C)** | Pins 18 (SDA), 19 (SCL) | Teensy 4.0 |
| **Motors** | Motor Driver Output | Motor Driver |

![Wiring Architecture](https://ros-mobile-robots.com/images/hardware_setup/diffbot_hardware_architecture.png)

## Quick Start
```bash
git clone https://github.com/praveenkumar3911/mobile_robot_full_guide.git
```
