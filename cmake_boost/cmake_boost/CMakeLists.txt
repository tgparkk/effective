# CMakeList.txt: cmake_boost에 대한 CMake 프로젝트, 여기에 소스를 포함하고
# 프로젝트 특정 논리를 정의합니다.
#
cmake_minimum_required (VERSION 3.8)

# 이 프로젝트의 실행 파일에 소스를 추가합니다.
add_executable (cmake_boost "cmake_boost.cpp" "cmake_boost.h")

# TODO: 필요한 경우 테스트를 추가하고 대상을 설치합니다.
SET(CMAKE_INCLUDE_PATH ${CMAKE_INCLUDE_PATH} "%BOOST_ROOT%")

FIND_PACKAGE(Boost)
IF (Boost_FOUND)
    INCLUDE_DIRECTORIES(${Boost_INCLUDE_DIR})
    ADD_DEFINITIONS( "-DHAS_BOOST" )
ENDIF()