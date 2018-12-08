cmake_minimum_required(VERSION 3.12)

project(dcom)

set(CMAKE_CXX_STANDARD 14)

add_compile_options(-Wall -Wextra -pedantic)

find_package(Protobuf REQUIRED)

include_directories(${Protobuf_INCLUDE_DIRS})
include_directories(${CMAKE_CURRENT_BINARY_DIR})

set(PROTO_FILES
    proto/message.proto
    proto/sensor.proto
)

set(SRC_FILES

)

set(HDR_FILES
    inc/messages.hpp
)

Protobuf_GENERATE_CPP(PROTO_SRCS PROTO_HDRS ${PROTO_FILES})

add_library(dcom STATIC ${SRC_FILES} ${HDR_FILES} ${PROTO_SRCS} ${PROTO_HDRS} ${PROTO_FILES})

target_include_directories(dcom
    PUBLIC ${CMAKE_CURRENT_BINARY_DIR}
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
    PUBLIC ${PROTOBUF_INCLUDE_DIRS}
)

target_link_libraries(dcom ${PROTOBUF_LIBRARIES})

install(TARGETS dcom DESTINATION lib)
install(FILES ${HDR_FILES} ${PROTO_HDRS} DESTINATION include/dcom)
