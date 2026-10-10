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
    static std::vector<std::string> parse(const cpr::Response& json,const std::string& key);

    static std::vector<std::vector<std::string>> parsejson(const cpr::Response &json,const std::vector<std::string>& listkeys);

    static cpr::Response request();
    static void print_info(const std::vector<std::vector<std::string>> &data) {
        int i = 0;
        for (auto &el : data[0]) {
            if (i > data[1].size()) {
                i = 0;
            }
            std::string line_bottom;
            std::string line_upper = "|--\033[1;31m" + el + "\033[0m";
            if (!data[1][i].empty()) {
                line_bottom = "\n  |--"+data[1][i];
            }
            std::cout<<line_upper<<line_bottom<<std::endl;
            i++;
        }
    }

};



#endif //CLI_AIR_ALERT_API_REQUEST_H
