//
// Created by Mykola on 09.10.2026.
//

#ifndef CLI_AIR_ALERT_API_REQUEST_H
#define CLI_AIR_ALERT_API_REQUEST_H
#include <iostream>
#include <string>
#include <cpr/cpr.h>
#include <nlohmann/json.hpp>

class api_request {
    static std::vector<std::string> parsejson(const cpr::Response& json,const std::string& key);
public:
    static void request();
    static void print_info(const std::vector<std::string> &data) {
        for (auto &el : data) {
            std::cout<<el<<std::endl;
        }
    }
    
};



#endif //CLI_AIR_ALERT_API_REQUEST_H
