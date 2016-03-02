find_package(PkgConfig REQUIRED)
find_package(OpenGL REQUIRED)
pkg_check_modules(BOT2_VIS bot2-vis)
if(NOT BOT2_VIS_FOUND)
    message("bot2-vis not found.  Not building occ-map-renderers")
    return()
endif(NOT BOT2_VIS_FOUND)

add_library(pixel-map-renderers SHARED 
    PixelMap_bot_renderer.cpp)

target_link_libraries (pixel-map-renderers
    ${OPENGL_LIBRARIES})

pods_use_pkg_config_packages(pixel-map-renderers 
    lcm 
    bot2-vis 
    lcmtypes_frsm frsm)

# set the library API version.  Increment this every time the public API
# changes.
set_target_properties(pixel-map-renderers PROPERTIES SOVERSION 1)

pods_install_libraries(pixel-map-renderers)

pods_install_headers(pixel_map_renderers.h DESTINATION pixel_map)

pods_install_pkg_config_file(pixel-map-renderers
    LIBS -lpixel-map-renderers
    REQUIRES bot2-vis lcm frsm
    VERSION 0.0.1)
