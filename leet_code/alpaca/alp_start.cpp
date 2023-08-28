#include <vector>
#include <string>


#include <iostream>

#include "alpaca/client.h"
#include "alpaca/config.h"

#include "alp_start.h"
#include "alp_main.h"

using namespace std;


int main(int argc, char* argv[]) {
    // Parse the required environment variables using the supplied helper utility
    auto env = alpaca::Environment();
    if (auto status = env.parse(); !status.ok()) {
        std::cout << "Error parsing config from environment: "
                  << status.getMessage()
                  << std::endl;
        return status.getCode();
    }

    // Instantiate an instance of the API client
    auto client = alpaca::Client(env)
}