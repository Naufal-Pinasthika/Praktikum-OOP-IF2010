#include "DailyHabit.hpp"


DailyHabit::DailyHabit(const std::string& name) : Activity(name) {
    this->streak = 0;
}

int DailyHabit::complete() {
    this->streak++;
    return 10 * this->streak;
}

string DailyHabit::getStatus() const {
    string hasil = "[HABIT] " +  this->name + " - Streak: " + to_string(this->streak);
    return hasil;
}

DailyHabit::~DailyHabit() {
    cout << "Menghapus DailyHabit " << this->name << "\n";
}
