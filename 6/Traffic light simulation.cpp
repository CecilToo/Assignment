#include <iostream>
#include <thread>
#include <chrono>

using namespace std;


enum TrafficLightState { RED, GREEN, YELLOW };


void displayLight(TrafficLightState state) {
    switch (state) {
        case RED:
            cout << "RED" << endl;
            break;
        case GREEN:
            cout << "GREEN" << endl;
            break;
        case YELLOW:
            cout << "YELLOW" << endl;
            break;
        default:
            cout << "Invalid state!" << endl;
    }
}

int main() {
    TrafficLightState state = RED; 

    while (true) {
        displayLight(state);  
        

        switch (state) {
            case RED:
                this_thread::sleep_for(chrono::seconds(5));  
                state = GREEN;  
                break;
            case GREEN:
                this_thread::sleep_for(chrono::seconds(5));  
                state = YELLOW
                break;
            case YELLOW:
                this_thread::sleep_for(chrono::seconds(2));  
                state = RED;  
                break;
        }
    }

    return 0;
}
