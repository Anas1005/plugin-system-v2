#pragma once
#include <string>

enum class EventType {
    MARKET_DATA,
    // ... otherrrrr typesssssssssssssss......................................
};

struct Event {
    EventType type;
    std::string payload;
};
