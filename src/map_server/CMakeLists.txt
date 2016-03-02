add_executable(pixel-map-pixmap-saver pixmap_saver.cpp)
pods_use_pkg_config_packages(pixel-map-pixmap-saver frsm)   
pods_install_executables(pixel-map-pixmap-saver) 

add_executable(pixel-map-pixmap-server pixmap_server.cpp)
pods_use_pkg_config_packages(pixel-map-pixmap-server frsm)   
pods_install_executables(pixel-map-pixmap-server) 

find_package(PkgConfig REQUIRED)
pkg_check_modules(OPENCV opencv)
if(NOT OPENCV_FOUND)
    message("opencv not found.  Not building map to image conversions")
    return()
endif(NOT OPENCV_FOUND)

add_executable(pixel-map-pixmap-to-image pixmap_to_img.cpp)
pods_use_pkg_config_packages(pixel-map-pixmap-to-image frsm opencv)   
pods_install_executables(pixel-map-pixmap-to-image)

add_executable(pixel-map-img-to-pixmap img_to_pixmap.cpp)
pods_use_pkg_config_packages(pixel-map-img-to-pixmap frsm opencv)   
pods_install_executables(pixel-map-img-to-pixmap)  