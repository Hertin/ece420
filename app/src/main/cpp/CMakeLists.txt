cmake_minimum_required(VERSION 3.4.1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -Wall -Wno-unused-variable")
include_directories(kiss_fft)
add_library(
        echo SHARED
        audio_common.cpp
        audio_main.cpp
        audio_player.cpp
        audio_recorder.cpp
        debug_utils.cpp
        kiss_fft/kiss_fft.c
        ece420_lib.cpp
        ece420_main.cpp
        gist/core/CoreFrequencyDomainFeatures.cpp
        gist/core/CoreTimeDomainFeatures.cpp
        gist/mfcc/MFCC.cpp
        gist/onset-detection-functions/OnsetDetectionFunction.cpp
        gist/fft/WindowFunctions.cpp
        gist/pitch/Yin.cpp
        gist/Gist.cpp
        audio_feature.cpp
        clf/2_inst_rfc/2instrfc.cpp
        clf/2_inst_rfc/RFC_inst2_0.cpp
        clf/2_inst_rfc/RFC_inst2_1.cpp
        clf/2_inst_rfc/RFC_inst2_2.cpp
)

# include libraries needed for hello-jni lib
target_link_libraries(echo
        android
        atomic
        log
        OpenSLES)

# Android Studio 2.2.0 with CMake support does not pack stl shared libraries,
# so app needs to pack the right shared lib into APK. This sample uses solution
# from https://github.com/jomof/ndk-stl to find the right stl shared lib to use
# and copy it to the right place for Android Studio to pack
# Usage: download ndk-stl-config.cmake into app's directory hosting CMakeLists.txt
#        and just use it with the following line
include(ndk-stl-config.cmake)
