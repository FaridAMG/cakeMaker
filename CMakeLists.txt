cmake_minimum_required(VERSION 3.10)
project(cakeMaker)

#<QT Extras>

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Widgets CONFIG #Build files were created in my computer, with this cmake QtWidgets
        PATHS /home/farida/IDEs/Qt/5.9.1/gcc_64/lib/cmake#Build your own
        NO_DEFAULT_PATH)



list(APPEND THIRD_PARTY_LIBS Qt5::Widgets Qt5::Core Qt5::Gui)


set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES cakeMaker main.cpp mainwindow.h mainwindow.cpp mainwindow.ui ui_mainwindow.h)



#</ QT Extras>


set(CMAKE_CXX_STANDARD 14)

add_executable(cakeMaker ${SOURCE_FILES} )


#<More QT Extras>

target_link_libraries(${PROJECT_NAME}
        Qt5::Core
        Qt5::Widgets
        Qt5::Gui
        )

#</ More QT Extras>