//
// Created by Mykola on 09.10.2026.
//

#ifndef CLI_AIR_ALERT_THREAT_H
#define CLI_AIR_ALERT_THREAT_H
#include <string>
#include <location.h>

class threat {
    std::string id;
    std::string type;
    std::string title;
    std::string region;
    std::string locality;
    location location_();
};

#endif //CLI_AIR_ALERT_THREAT_H
