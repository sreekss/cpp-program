// Enum example: traffic-light state.
#include <iostream>
using namespace std;

enum class Light { Red, Yellow, Green };

const char* actionFor(Light light) {
    switch (light) {
        case Light::Red: return "Stop";
        case Light::Yellow: return "Wait";
        case Light::Green: return "Go";
    }
    return "Unknown";
}

int main() {
    Light current = Light::Green;
    cout << actionFor(current) << '\n';
}
