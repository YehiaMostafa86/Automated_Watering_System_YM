# Automated Watering System for Plants 🌿

## Overview
This project automatically waters plants based on soil moisture levels using an Arduino microcontroller.  
It demonstrates the basics of **sensor integration, control logic, and automation** — a great introduction to embedded systems.

---

## 🧰 Components
- Arduino UNO  
- Soil Moisture Sensor  
- Relay Module (1 channel)  
- Water Pump (5V or 12V)  
- Power Supply  
- Jumper Wires  

---

## ⚙️ Working Principle
1. The soil moisture sensor measures the water level in the soil.  
2. When the reading drops below a threshold, the Arduino activates the relay.  
3. The relay powers the water pump until the soil becomes moist again.  
4. The system automatically stops the pump when the soil is sufficiently wet.

