#pragma once
#include "LandVehicle.hpp"

class Car : public LandVehicle {
private:
  string carType;
  string city;

public:
  Car(string vehicleId, string brand, int maxSpeed, int numWheels, string carType);
  ~Car();

  void race() const;
};
