// This C++ App Communicate with python WebAPI


#include <iostream>
#include <string>
#include <curl/curl.h>
#include "json.hpp"

using json = nlohmann::json;
using namespace std;

// Callback function to collect API response
size_t WriteCallback(void* contents, size_t size, size_t nmemb, string* output) {
    size_t totalSize = size * nmemb;
    output->append((char*)contents, totalSize);
    return totalSize;
}

int main() {
    CURL* curl;
    CURLcode res;
    string response;

    curl = curl_easy_init();
    if (!curl) {
        cerr << "Failed to initialize CURL" << endl;
        return 1;
    }

    curl_easy_setopt(curl, CURLOPT_URL, "http://127.0.0.1:8000/stuinfo/2");
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
    curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

    res = curl_easy_perform(curl);

    if (res != CURLE_OK) {
        cerr << "CURL Error: " << curl_easy_strerror(res) << endl;
    } else {
        // Parse and print JSON response
        json data = json::parse(response);
        cout << "API Response:\n" << data.dump(4) << endl;
    }

    curl_easy_cleanup(curl);
    return 0;
}
