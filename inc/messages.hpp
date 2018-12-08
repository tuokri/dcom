#pragma once

#include <stdint.h>

#include "dcom/proto/message.pb.h"
#include "dcom/proto/sensor.pb.h"

namespace dcom
{

const uint32_t MSG_ID_SENSOR_INFO = 0x0001;
const uint32_t MSG_ID_SENSOR_READ = 0x0002;

}
