#include <iostream>
#include <api_request.h>

int main() {
    auto r = api_request::request();
    for (int i = 30;true;i--) {
        if (i <= 0) {
            r = api_request::request();
            i = 30;
        }
        else {
            std::this_thread::sleep_for(std::chrono::seconds(1));
            std::system("clear");
            api_request::print_info(api_request::parsejson(r,"explanationShort"));
            std::cout<<"Next update will be after: "<<i<<" seconds"<<std::endl;
        }
    }
    return 0;
}
