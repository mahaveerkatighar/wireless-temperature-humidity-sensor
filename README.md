# Wireless Temperature & Humidity Monitoring System

A project that demonstrates a low-cost, wireless environmental monitoring system using ASK modulation.

---

## 📝 Overview

[cite_start]This project is a **Wireless Temperature and Humidity Monitoring System** that utilizes the Amplitude Shift Keying (ASK) digital modulation technique[cite: 54]. [cite_start]The system consists of a transmitter and a receiver, both built around the ATmega328P microcontroller[cite: 54]. [cite_start]The transmitter unit reads real-time temperature and humidity data from a DHT11 sensor and transmits it wirelessly over a 433MHz RF channel[cite: 55]. [cite_start]The receiver unit captures this data and displays it on a 16x2 LCD module[cite: 56].

[cite_start]This project provides a cost-effective, low-power, and efficient solution for environmental monitoring with potential applications in home automation, smart agriculture, and industrial monitoring[cite: 57].

---

## ✨ Features

* [cite_start]**Real-time Monitoring:** Measures and displays temperature and humidity in real-time[cite: 281].
* [cite_start]**Wireless Communication:** Uses 433MHz RF modules for reliable wireless data transmission[cite: 282].
* [cite_start]**ASK Modulation:** Implements Amplitude Shift Keying for sending digital data over an analog channel[cite: 63].
* [cite_start]**Embedded System Integration:** Integrates an ATmega328P microcontroller with a DHT11 sensor and an LCD display[cite: 283].
* [cite_start]**I2C Communication:** The LCD display uses the I2C protocol to minimize the number of GPIO pins used[cite: 284].

---

## 🛠️ Hardware Components

| S.No | Component | Quantity |
| :--- | :--- | :--- |
| 1 | ATmega328P Microcontroller | [cite_start]2 [cite: 112] |
| 2 | DHT11 Temperature & Humidity Sensor | [cite_start]1 [cite: 112] |
| 3 | 433MHz RF Transmitter Module | [cite_start]1 [cite: 112] |
| 4 | 433MHz RF Receiver Module | [cite_start]1 [cite: 112] |
| 5 | 16x2 LCD Display with I2C Module | [cite_start]1 [cite: 112] |
| 6 | Custom PCBs (for TX and RX) | [cite_start]2 [cite: 112] |
| 7 | 5V DC Power Supply | [cite_start]2 [cite: 112] |

---

## 🖼️ Project Showcase

Here are some images of the final working prototype and the PCB design.

**Final Assembled Circuit:**
![Working wireless sensor system](images/WhatsApp%20Image%202025-07-22%20at%2017.52.16_9dddf21d.jpg)

**3D PCB Render:**
![3D render of the custom PCB](images/Screenshot%202025-07-22%20175545.png)

---

## 👤 Author

* **Mahaveer Katighar**
