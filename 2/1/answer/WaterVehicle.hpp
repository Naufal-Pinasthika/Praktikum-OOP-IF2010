#pragma once
#include "Vehicle.hpp"

class WaterVehicle : public Vehicle {
    private:
        int displacement;
        string place;
    public:     
        WaterVehicle(string vehicleId, string brand, int maxSpeed, int displacement);
        ~WaterVehicle();

        void sail(string place);
        string showSpec() const;
};