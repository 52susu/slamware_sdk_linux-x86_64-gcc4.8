#pragma once

#include <rpos/core/geometry.h>
#include <rpos/features/location_provider/map.h>

#include <cstdint>

#define RPOS_FEATURES_RECTANGLEAREADESCRIPTOR_TAGS_MAX_COUNT            (0xFFU)
#define RPOS_FEATURES_RECTANGLEAREADESCRIPTOR_STRING_MAX_LENGTH         (0xFFFFU)

namespace rpos { namespace features { namespace location_provider {

    struct RectangleAreaDescriptor
    {
        std::uint32_t id;
        rpos::core::RectangleF area;
        std::uint32_t flag;
        std::vector<std::string> tags;

        RectangleAreaDescriptor()
            : id(0u)
            , flag(0u)
        {
            //
        }
    };

    class RectangleAreaMap;
    namespace detail {
        class RectangleAreaMapImpl;
        template<>
        struct RPOS_CORE_API map_caster < RectangleAreaMap > {
            static RectangleAreaMap cast(const Map& map);
        };
    }

    class RPOS_CORE_API RectangleAreaMap: public Map
    {
    public:
        typedef detail::RectangleAreaMapImpl impl_t;

        RPOS_OBJECT_CTORS_WITH_BASE(RectangleAreaMap, Map);
        RectangleAreaMap(boost::shared_ptr<detail::RectangleAreaMapImpl> impl);
        virtual ~RectangleAreaMap();
        static RectangleAreaMap createMap(rpos::system::types::_u64 timestamp = 0);

        virtual bool readFromStream(rpos::system::io::IStream& in);
        virtual bool writeToStream(rpos::system::io::IStream& out) const;
    
    public:
        void clear();
        size_t size() const;
        void resize(size_t N);
        const RectangleAreaDescriptor& operator[](size_t i) const;
        RectangleAreaDescriptor& operator[](size_t i);
    };

}}}
