cmake_minimum_required(VERSION 3.10)
project(T_ShimCacheParser)

set(SE_RootDirPath "${CMAKE_CURRENT_SOURCE_DIR}/../..")
set(T_SCPDirPath "${CMAKE_CURRENT_SOURCE_DIR}")
set(SE_PackageDirPath "${SE_RootDirPath}/packages")
set(GoogleTestDirPath "${SE_PackageDirPath}/gtest")

message(${SE_RootDirPath})
message(${SE_PackageDirPath})
message(${GoogleTestDirPath})

#set project type
add_library(t_ShimCachelib SHARED ${T_SCPDirPath}/T_ShimCacheParser.cpp)

#set link directories
find_library(GTEST_LIBRARY NAMES gh PATHS "${GoogleTestDirPath}/bin/gtest/Debug")
message(${GTEST_LIBRARY})
target_include_directories(t_ShimCachelib PUBLIC "${GoogleTestDirPath}/include")
target_link_libraries(t_ShimCachelib ${GTEST_LIBRARY})
