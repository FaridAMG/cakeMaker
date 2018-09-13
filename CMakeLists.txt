cmake_minimum_required(VERSION 3.10)
project(cakeMaker)

#<QT Extras>

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Widgets CONFIG #Build files were created in my computer, with this cmake QtWidgets
        PATHS /home/gustavo/Programas/Qt/5.11.1/gcc_64/lib/cmake#Build your own
        NO_DEFAULT_PATH)



list(APPEND THIRD_PARTY_LIBS Qt5::Widgets Qt5::Core Qt5::Gui)


set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES cakeMaker main.cpp mainwindow.h mainwindow.cpp mainwindow.ui ui_mainwindow.h Queue.h Queue.cpp Cake.cpp
        Cake.h List.h List.cpp MemoryLogic.h CakeFactory.cpp CakeFactory.h ChocolateCake.cpp ChocolateCake.h StrawBCake.cpp
        StrawBCake.h VanillaCake.cpp VanillaCake.h)

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -pthread")

#</ QT Extras>


set(CMAKE_CXX_STANDARD 14)

add_executable(${SOURCE_FILES} MemoryLogic.cpp Node.cpp Node.h)


#<More QT Extras>

target_link_libraries(${PROJECT_NAME}
        Qt5::Core
        Qt5::Widgets
        Qt5::Gui
        )

#</ More QT Extras>