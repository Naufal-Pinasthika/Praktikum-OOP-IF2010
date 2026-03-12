#include "WaterVehicle.hpp"

WaterVehicle::WaterVehicle(string vehicleId, string brand, int maxSpeed, int displacement) : Vehicle(vehicleId, brand, maxSpeed), displacement(displacement) {
    cout << "[CREATE] WaterVehicle " << brand << " with " << displacement << " tons displacement ready\n";
}

WaterVehicle::~WaterVehicle() {
    cout << "[DELETE] WaterVehicle " << brand <<" destroyed\n";    
}

void WaterVehicle::sail(string place) {
  cout << "[SAIL] " << brand << " " << "(" << displacement << " tons) sailing to " << place << endl; 
}

string WaterVehicle::showSpec() const {
    return getSpec();
}