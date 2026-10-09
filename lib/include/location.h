//
// Created by Mykola on 09.10.2026.
//

#ifndef CLI_AIR_ALERT_LOCATION_H
#define CLI_AIR_ALERT_LOCATION_H

class location {
    double lat = 0.0;
    double lon = 0.0;
public:
    location(const double lat,const double lon) {
        this->lat = lat;
        this->lon = lon;
    }
};

#endif //CLI_AIR_ALERT_LOCATION_H
