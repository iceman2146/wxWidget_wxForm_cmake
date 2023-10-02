cmake_minimum_required(VERSION 3.26)
project(wxWidger_wxFormBuilder_test VERSION 0.1.0 LANGUAGES C CXX)
set (wxWidgets_ROOT_DIR  "C:/vxWidgets")
set (wxWidgets_LIB_DIR  "C:/vxWidgets/lib/gcc810_x64_dll")
find_package(wxWidgets REQUIRED COMPONENTS net core base adv aui html media xrc dbgrid gl qa richtext stc ribbon propgrid webview
)
include_directories(include)
include_directories(form_builder_files)
include(CTest)
enable_testing()
include(${wxWidgets_USE_FILE})
set(gui)

file (GLOB project_GLOB
form_builder_files/*)
add_executable(main src/helloApp.cpp ${project_GLOB})
#add_library(gui form_builder_files/MyGUIform_main.cpp form_builder_files/MyGUI.cpp)


target_link_libraries(main ${wxWidgets_LIBRARIES})

#target_link_libraries(gui ${wxWidgets_LIBRARIES})

#target_include_directories(main PRIVATE gui ${wxWidgets_LIBRARIES_DIRS})
target_include_directories(main PRIVATE ${wxWidgets_LIBRARIES_DIRS})


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)