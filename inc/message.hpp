#pragma once

#include <cstdint>

namespace dcom
{

// TODO: ID types.
struct Header
{
    uint16_t id;
    uint16_t senderId;
    uint16_t receiverId;
};

// TODO: Payload types.
struct Payload
{
    uint16_t size;
    uint16_t data[1];
};

struct Message
{
    Header*  headerPtr;
    Payload* payloadPtr;
};

}
