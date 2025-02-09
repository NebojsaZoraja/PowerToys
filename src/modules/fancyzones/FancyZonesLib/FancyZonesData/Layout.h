#pragma once

#include <guiddef.h>

#include  <FancyZonesLib/FancyZonesData/LayoutDefaults.h>
#include <FancyZonesLib/FancyZonesDataTypes.h>

struct Layout
{
    GUID uuid = GUID_NULL;
    FancyZonesDataTypes::ZoneSetLayoutType type = FancyZonesDataTypes::ZoneSetLayoutType::PriorityGrid;
    bool showSpacing = DefaultValues::ShowSpacing;
    int spacing = DefaultValues::Spacing;
    int zoneCount = DefaultValues::ZoneCount;
    int sensitivityRadius = DefaultValues::SensitivityRadius;
};

inline bool operator==(const Layout& lhs, const Layout& rhs) 
{
    return lhs.uuid == rhs.uuid &&
           lhs.type == rhs.type &&
           lhs.showSpacing == rhs.showSpacing &&
           lhs.spacing == rhs.spacing &&
           lhs.zoneCount == rhs.zoneCount &&
           lhs.sensitivityRadius == rhs.sensitivityRadius;
}