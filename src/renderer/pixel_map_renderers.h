#ifndef __OCC_MAP_RENDERER_H__
#define __OCC_MAP_RENDERER_H__

/**
 * @defgroup PixelMapViewerRenderer BotViewer renderer
 * @ingroup OccupancyMap
 * @brief BotVis Viewer renderer plugin
 * @include occ_map/occ_map_renderers.h
 *
 * TODO
 *
 * Linking: `pkg-config --libs occ_map_pixelmap_render`
 * @{
 */

#include <bot_vis/bot_vis.h>

#ifdef __cplusplus
extern "C" {
#endif

  void pixel_map_pixel_map_add_renderer_to_viewer(BotViewer *viewer, int render_priority, 
        const char* lcm_channel, const char* renderer_name);

  void pixel_map_pixel_map_add_renderer_to_viewer_lcm(BotViewer *viewer, int render_priority, lcm_t *lcm, 
        const char* lcm_channel, const char* renderer_name);


#ifdef __cplusplus
}
#endif

#endif /* RENDERER_PIXEL_MAP_H_ */
