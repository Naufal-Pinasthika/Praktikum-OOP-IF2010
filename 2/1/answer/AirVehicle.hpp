#pragma once
#include "Vehicle.hpp"

class AirVehicle : private Vehicle {
    private:
        int maxAltitude;
        string place;
    public:     
        AirVehicle(string vehicleId, string brand, int maxSpeed, int maxAltitude);
        ~AirVehicle();

        string getBrandName() const;
        string showSpec() const;
        void fly(string place);
};