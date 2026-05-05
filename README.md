# anti-mist-system-arduino
Autonomous Anti-Mist System for Car Windshield using Arduino

## Overview

Mist formation on car windshields reduces visibility and increases the risk of accidents, especially in cold or humid environments. This project presents an autonomous anti-mist system that detects high humidity levels inside a vehicle and automatically activates fans to clear the windshield.

The system is built using Arduino UNO and a DHT11 sensor, making it a low-cost and efficient solution for real-world automotive applications.

---

## Objective

* Detect mist formation using humidity levels
* Automatically activate defogging fans
* Improve driver visibility and safety
* Provide a low-cost and energy-efficient solution

---

## Components Used

* Arduino UNO
* DHT11 Temperature and Humidity Sensor
* 5V Relay Module
* 2 × DC Fans (12V)
* Jumper Wires
* Breadboard
* 12V Power Supply
* Glass (for simulation)

---

## Working Principle

Fog forms when the air inside the vehicle becomes more humid than the surroundings, leading to condensation on the windshield.

The system operates as follows:

1. The DHT11 sensor continuously measures humidity.
2. If humidity exceeds a predefined threshold (70%), mist formation is assumed.
3. The Arduino activates the relay module.
4. The relay powers the DC fans.
5. The fans blow air across the windshield, removing moisture.

Once humidity drops below the threshold, the system automatically turns off.

---

## Circuit Connections

* DHT11 Data Pin → Digital Pin D2
* Relay Module Input → Digital Pin D8
* Fans → Powered via relay using external 12V supply

---

## Arduino Code

The system uses a simple threshold-based control logic where the relay is triggered when humidity exceeds 70%.

Refer to the file: `moisture_remover.ino`

---

## Results

* Fans activated reliably when humidity exceeded the threshold
* Mist was cleared within 20–30 seconds
* System returned to idle automatically after clearing
* Low power consumption due to sensor-based activation

---

## Applications

* Automobile windshield defogging
* Commercial vehicles (buses and trucks)
* Smart glass systems
* Industrial viewing panels

---

## Advantages

* Low cost and easy to implement
* Fully automated operation
* Energy efficient
* Open-source and scalable design

---

## Limitations

* DHT11 sensor has limited accuracy
* Not effective under extreme environmental conditions
* Uses basic threshold logic without prediction capability

---

## Future Improvements

* Replace DHT11 with higher accuracy sensors (DHT22, SHT31)
* Integrate IoT features for remote monitoring
* Implement AI-based mist prediction
* Integrate with vehicle HVAC systems
* Replace fans with heating elements or microblowers


