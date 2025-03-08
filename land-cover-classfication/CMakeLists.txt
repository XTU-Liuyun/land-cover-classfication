cmake_minimum_required(VERSION 3.16)

project(land-cover-classfication VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets LinguistTools)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets LinguistTools)

set(TS_FILES land-cover-classfication_zh_CN.ts)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
        ${TS_FILES}
)

include_directories(D:/anaconda3/envs/env1/include)
link_directories(D:/anaconda3/envs/env1/libs)
link_libraries(python3)
link_libraries(python39)


if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(land-cover-classfication
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        res.qrc
        tool.h tool.cpp
        graphicdisplay.h graphicdisplay.cpp graphicdisplay.ui
        qcombobox_tab.h qcombobox_tab.cpp qcombobox_tab.ui
        qcombobox_tab.h qcombobox_tab.cpp qcombobox_tab.ui

        pythoninvoker.h pythoninvoker.cpp
        ../predict.py
        ../full_model.pth
        ../constrast.py
        dialog.h dialog.cpp dialog.ui
        dialog.h dialog.cpp dialog.ui




    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET land-cover-classfication APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation


    qt_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
else()
    if(ANDROID)
        add_library(land-cover-classfication SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(land-cover-classfication
            ${PROJECT_SOURCES}
        )
    endif()

    qt5_create_translation(QM_FILES ${CMAKE_SOURCE_DIR} ${TS_FILES})
endif()

target_link_libraries(land-cover-classfication PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)

# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.land-cover-classfication)
endif()
set_target_properties(land-cover-classfication PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS land-cover-classfication
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(land-cover-classfication)
endif()

