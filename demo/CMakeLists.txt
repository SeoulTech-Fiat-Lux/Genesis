# 데모 실행 파일에 필요한 소스 파일 지정
file(GLOB DEMO_SOURCES "*.cpp" "*.h")

# 실행 파일 생성 (프로젝트 이름이나 Demo 등 원하는 이름)
add_executable(GenesisDemo ${DEMO_SOURCES})

# 엔진 라이브러리 및 의존성 연결
target_link_libraries(GenesisDemo PRIVATE
        ${PROJECT_NAME}
)

# 실행 파일 출력 위치 설정
set_target_properties(GenesisDemo PROPERTIES
        RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)

# 셰이더나 에셋 파일을 실행 파일 위치로 복사 - 추후 필요시 주석 해제
#add_custom_command(TARGET GenesisDemo POST_BUILD
#        COMMAND ${CMAKE_COMMAND} -E copy_directory
#        "${CMAKE_SOURCE_DIR}/assets"
#        "$<TARGET_FILE_DIR:GenesisDemo>/assets"
#        COMMENT "Copying assets to build directory..."
#)