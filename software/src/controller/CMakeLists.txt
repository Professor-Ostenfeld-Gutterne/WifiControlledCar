
set(MODULE controller)

add_library(${MODULE}
)
add_library(controller::${MODULE} ALIAS ${MODULE})

target_sources(${MODULE}
PRIVATE
    
)

target_include_directories(${MODULE} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

target_link_libraries(${MODULE}
PUBLIC
PRIVATE
)

