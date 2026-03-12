#pragma once
#include "Vehicle.hpp"
class LandVehicle : public Vehicle {
    private:
        int numWheels;
        string city;
    public:     
        LandVehicle(string vehicleId, string brand, int maxSpeed, int numWheels);
        ~LandVehicle();

        void drive(string city) const;
};