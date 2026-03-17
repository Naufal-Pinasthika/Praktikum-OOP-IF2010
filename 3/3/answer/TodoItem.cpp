
#include "TodoItem.hpp"

TodoItem::TodoItem(const std::string& name) : Activity(name) {

}
int TodoItem::complete() {
    if (!isDone){
        isDone = true;
        return 10;
    } else {
        return 0;
    }
    
}
string TodoItem::getStatus() const {
    if (!isDone){
        string hasil = "[TODO] " + this->name + " - Belum";
        return hasil;
    } else {
        string hasil = "[TODO] " + this->name + " - Selesai";
        return hasil;
    }
};

TodoItem::~TodoItem() {
    cout << "Menghapus TodoItem " << this->name << "\n";
}
