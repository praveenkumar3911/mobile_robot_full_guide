# Mobile Robot Full Guide (Physical Build)

Welcome to the complete guide for building the physical version of the mobile robot! This repository helps you connect all hardware components to bring your robot to life.

## Hardware Architecture
![Remo Architecture](https://ros-mobile-robots.com/fritzing/remo_architecture.svg)

---

## Key Components
*   Microcontroller: [Teensy 4.0](https://www.pjrc.com/store/teensy40.html) (Handles wheels and sensors).
*   *   Brain: [Raspberry Pi 4 B](https://www.raspberrypi.com/products/raspberry-pi-4-model-b/) (Runs ROS).
    *   *   Eyes: Slamtec RPLIDAR A1/A2.
        *   *   Muscles: 4x DC Gear Motors with Encoders.
         
            *   ---
         
            *   ## Wiring Table
            *   | Component | Controller Pin | Connection |
            *   | :--- | :--- | :--- |
            *   | Left Encoder | Teensy Pins 5, 6 | Digital |
            *   | Right Encoder | Teensy Pins 7, 8 | Digital |
            *   | Motor Driver | Teensy Pins 18, 19 | I2C Bus |
            *   | Brain Link | Teensy USB | Raspberry Pi |
         
            *   ---
         
            *   ## Quick Start
            *   1. Clone this guide:
                2.    git clone https://github.com/praveenkumar3911/mobile_robot_full_guide.git
                3.2. Follow the [official documentation](https://ros-mobile-robots.com) for assembly.

                  ---
                Created with care for beginners.
                
