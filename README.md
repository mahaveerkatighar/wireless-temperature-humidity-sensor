# Wireless Temperature & Humidity Monitoring System

A project that demonstrates a low-cost, wireless environmental monitoring system using ASK modulation. 

---

## Overview

This project is a **Wireless Temperature and Humidity Monitoring System** that utilizes the Amplitude Shift Keying (ASK) digital modulation technique and ATmega328P microcontrollers. The system's transmitter side measures real-time environmental data using a DHT11 sensor and transmits the data wirelessly over a 433MHz RF channel. The receiver side captures this data and displays it on a 16x2 LCD module interfaced via I2C communication. This project provides a cost-effective, low-power, and efficient solution for environmental monitoring applications. 

---

## Features

* **Real-time Monitoring:** The system successfully monitors temperature and humidity in real-time.
* **Wireless Communication:** It uses 433MHz RF modules for reliable wireless transmission. 
* **ASK Modulation:** The project demonstrates the wireless communication of sensor data using ASK modulation.
* **Embedded System Integration:** It achieves the integration of an embedded system with sensor interfacing.
* **I2C Communication:** The system features an LCD-based data display using I2C communication to save GPIO pins. 

---

## Hardware Components

This list is sourced from the project report.

| S.No | Component                           | Quantity |
| :--- | :---------------------------------- | :------- |
| 1    | ATmega328P Microcontroller          | 2        |
| 2    | DHT11 Temperature & Humidity Sensor | 1        |
| 3    | 433MHz RF Transmitter Module        | 1        |
| 4    | 433MHz RF Receiver Module           | 1        |
| 5    | 16x2 LCD Display with I2C Module    | 1        |
| 6    | Custom PCBs (for TX and RX)         | 2        |
| 7    | 5V DC Power Supply                  | 2        |

---

## Project Showcase

Here are some images of the final working prototype and the PCB design.

**Final Assembled Circuit:**
![Working wireless sensor system](images/WhatsApp%20Image%202025-07-22%20at%2017.52.16_9dddf21d.jpg)

**3D PCB Render:**
![3D render of the custom PCB](images/Screenshot%202025-07-22%20175545.png)

---

## Author

**Mahaveer Katighar** 
