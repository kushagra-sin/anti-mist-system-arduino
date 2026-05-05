# anti-mist-system-arduino
Autonomous Anti-Mist System for Car Windshield using Arduino

## Overview

Fogging on car windshields decreases the field of vision and increases the danger of accidents, particularly during cold or wet conditions. This paper offers an autonomous anti-fogging system that monitors high humidity within the car interior and turns the fans to remove the fog from the windshield automatically.

The entire system is designed based on the use of Arduino UNO and the DHT11 sensor.

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

Fog is created where moisture content in the air of the car is high in comparison with that of the surroundings, and thus condensation occurs on the windscreen due to moisture.

This is how the whole procedure takes place:

* DHT11 measures the humidity in the surrounding atmosphere.
* Humidity above the limit (70%) indicates fog creation.
* The Arduino turns the relay board ON.
* The relay activates the DC fans.
* The air blown by the fans clears the windscreen.

The process ends once the limit is achieved and the humidity becomes lower than the limit.

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


