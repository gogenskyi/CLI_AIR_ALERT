//
// Created by Mykola on 09.10.2026.
//

#ifndef CLI_AIR_ALERT_API_REQUEST_H
#define CLI_AIR_ALERT_API_REQUEST_H
#include <iostream>
#include <string>
#include <cpr/cpr.h>
#include <nlohmann/json.hpp>
#include <thread>
#include <chrono>

class api_request {
    static void update_info() {
        std::system("clear");
        std::this_thread::sleep_for(std::chrono::seconds(1));
    }
public:
    static std::vector<std::string> parsejson(const cpr::Response& json,const std::string& key);
    static cpr::Response request();
    static void print_info(const std::vector<std::string> &data) {
        for (auto &el : data) {
            std::cout<<"|-- "<<"\033[1;31m"<<el<<"\033[0m"<<std::endl;
        }
    }

};



#endif //CLI_AIR_ALERT_API_REQUEST_H
