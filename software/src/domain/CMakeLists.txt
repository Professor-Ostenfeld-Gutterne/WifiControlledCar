
set(MODULE domain)

add_library(${MODULE}
)
add_library(domain::${MODULE} ALIAS ${MODULE})

target_sources(${MODULE}
PRIVATE
    gateway_connection.cpp
    neighbor_list_response.cpp
    neomesh_network.cpp
    neomesh_node.cpp
    timestamp.cpp
)

target_include_directories(${MODULE} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(${MODULE}
PUBLIC
PRIVATE
rapidjson::rapidjson
infrastructure::infrastructure
)

