#include <iostream>

int main() {
    int hour = 12;
    int minute = 15;
    int minute_angle = 360*minute/60;
    int hour_angle = 360*(hour % 12)/12 + 360*(minute/60)*(1/12);

    int end_angle = (minute_angle - hour_angle)%360;
    std::cout << " end_angle = " <<  end_angle;


    return 0;
}
