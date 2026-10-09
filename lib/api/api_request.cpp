//
// Created by Mykola on 09.10.2026.
//

#include "../include/api_request.h"

const std::string URL = "https://neptun.in.ua/api/v1/threats";

cpr::Response api_request::request() {
    auto r = cpr::Get(cpr::Url{URL});
    if (r.error.code != cpr::ErrorCode::OK) {
        throw std::runtime_error(r.error.message);
    }
    return r;
}

std::vector<std::string> api_request::parsejson(const cpr::Response& json, const std::string& key) {
    std::vector<std::string> list;
    nlohmann::json j = nlohmann::json::parse(json.text);
    for (auto item : j["threats"]) {
        if (item.contains(key) && item[key].is_string()) {
            list.push_back(item[key].get<std::string>());
        }
    }
    return list;
}