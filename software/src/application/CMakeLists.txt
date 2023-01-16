add_executable(main main.cpp)

target_link_libraries(main
PUBLIC
PRIVATE
    domain::domain
    infrastructure::infrastructure
    rapidjson::rapidjson
)