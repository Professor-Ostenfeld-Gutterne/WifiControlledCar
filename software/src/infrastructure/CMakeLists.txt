
set(MODULE infrastructure)

add_library(${MODULE}
)
add_library(infrastructure::${MODULE} ALIAS ${MODULE})

target_sources(${MODULE}
PRIVATE
    file_handler.cpp
    socket_base.cpp
    socket_client.cpp
    socket_host.cpp
)

target_include_directories(${MODULE} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(${MODULE}
PUBLIC
PRIVATE
)

