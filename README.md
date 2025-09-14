# RideFare-OOP-Cpp

A **C++ project** simulating a simple ride in a vehicle-based transportation system, inspired by services like Uber or InDrive. The program demonstrates **Object-Oriented Programming (OOP)** concepts by creating a `Ride` class that calculates fares based on vehicle type, distance traveled, and number of passengers.

---

## **Features**

- Define a `Ride` (class `bingo`) with **private attributes**:
  - Vehicle type (`standard`, `premium`, `SUV`)
  - Distance traveled (in kilometers)
  - Number of passengers

- **Parameterized constructor** to set ride attributes at object creation.
- **Default constructor** with default values (`standard` vehicle, 150 km, 3 passengers).
- **Getter and Setter methods** for all attributes with validation:
  - Ensures vehicle type is valid (`standard`, `premium`, `SUV`)
  - Ensures distance and number of passengers are non-negative
- **Fare calculation** based on:
  - Standard: Base fare $5 + $1.5/km, $1 for each additional passenger
  - Premium: Base fare $10 + $2.5/km, $2 for each additional passenger
  - SUV: Base fare $15 + $3/km, $3 for each additional passenger
- **Summary display** of ride details and total fare.

---


