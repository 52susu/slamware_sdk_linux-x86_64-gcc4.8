#pragma once

#include <rpos/core/pose.h>
#include <rpos/system/types.h>
#include <rpos/features/location_provider/rectangle_area_map.h>

#include <rpos/robot_platforms/objects/metadata.h>
#include <rpos/robot_platforms/objects/map_layer.h>

#include <vector>

namespace rpos { namespace robot_platforms { namespace objects {

    class RPOS_SLAMWARE_API RectangleAreaMapLayer : public MapLayer
    {
    public:
        static const char* const Type;

        RectangleAreaMapLayer();
        virtual ~RectangleAreaMapLayer();

    public:
        virtual void clear(void);

    public:
        const std::vector<rpos::features::location_provider::RectangleAreaDescriptor> & areas() const;
        std::vector<rpos::features::location_provider::RectangleAreaDescriptor> & areas();

    private:
        std::vector<rpos::features::location_provider::RectangleAreaDescriptor> areas_;
    };

}}}
