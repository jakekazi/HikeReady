# HikeReady

> Your smart hiking preparation assistant — calculates hike duration, water & food needs, and clothing suggestions based on distance, pace, and temperature.

---

## Table of Contents
1. [About](#about)  
2. [Features](#features)  
3. [Getting Started](#getting-started)  
4. [Usage](#usage)  
5. [Future Enhancements](#future-enhancements)  
6. [Technologies](#technologies)

---

## About
HikeReady is a beginner-friendly tool to help hikers plan their trips.  
It’s a **C++ console application** that focuses on real-world logic rather than GUI, designed to demonstrate clean, modular code for practice and portfolio purposes.

---

## Features (V1)
- Calculates estimated hike duration based on **distance** and **user pace**  
- Recommends **water intake** for the hike  
- Suggests **approximate calories burned**  
- Provides **clothing recommendations** based on temperature  
- Structured with **modular C++ design** (header & implementation separation)

---

## Getting Started

### Requirements
- Mac / Linux / Windows  
- C++ compiler (e.g., `clang++` or `g++`)  

### Installation
1. Clone the repo:  
```bash
git clone https://github.com/yourusername/HikeReady.git
cd HikeReady

2. Compile:
clang++ main.cpp calculator.cpp -o HikeReady

3. Run:
./HikeReady

## Usage
The program prompts for:
	1	Hike distance (miles)
	2	Pace (miles per hour)
	3	Expected temperature (°F)
It outputs:
	•	Estimated hike duration
	•	Recommended water amount
	•	Estimated calories burned
	•	Clothing suggestions
	•	Simple checklist summary

## Future Enhancements
	•	Input validation & friendly prompts for incorrect entries
	•	Save checklist to a file
	•	Integration with weather APIs to get real-time conditions
	•	Add elevation and terrain difficulty adjustments
	•	Optional GUI / SwiftUI iOS app version
	•	Optional AI-based suggestions for smarter prep

## Technologies
	•	C++ (console app)
	•	Modular programming with header files
	•	Focused on separation of concerns and clean design