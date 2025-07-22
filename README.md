# Wireless Temperature & Humidity Monitoring System

[cite_start]A project that demonstrates a low-cost, wireless environmental monitoring system using ASK modulation. [cite: 54]

---

## Overview

[cite_start]This project is a **Wireless Temperature and Humidity Monitoring System** that utilizes the Amplitude Shift Keying (ASK) digital modulation technique and ATmega328P microcontrollers. [cite: 54] [cite_start]The system's transmitter side measures real-time environmental data using a DHT11 sensor and transmits the data wirelessly over a 433MHz RF channel. [cite: 55] [cite_start]The receiver side captures this data and displays it on a 16x2 LCD module interfaced via I2C communication. [cite: 56] [cite_start]This project provides a cost-effective, low-power, and efficient solution for environmental monitoring applications. [cite: 57]

---

## Features

* [cite_start]**Real-time Monitoring:** The system successfully monitors temperature and humidity in real-time. [cite: 281]
* [cite_start]**Wireless Communication:** It uses 433MHz RF modules for reliable wireless transmission. [cite: 282]
* [cite_start]**ASK Modulation:** The project demonstrates the wireless communication of sensor data using ASK modulation. [cite: 279]
* [cite_start]**Embedded System Integration:** It achieves the integration of an embedded system with sensor interfacing. [cite: 283]
* [cite_start]**I2C Communication:** The system features an LCD-based data display using I2C communication to save GPIO pins. [cite: 124, 284]

---

## Hardware Components

[cite_start]This list is sourced from the project report. [cite: 112]

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

* [cite_start]**Mahaveer Katighar** [cite: 10, 39]
