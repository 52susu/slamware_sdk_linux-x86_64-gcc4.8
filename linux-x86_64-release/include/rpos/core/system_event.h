#pragma once

namespace rpos {
    namespace core {

        enum InternalSystemEvent
        {
            InternalSystemEventRelocalizationFail = 1,
            InternalSystemEventBackHomeFail,
            InternalSystemEventAlignMap,
            InternalSystemEventSideBrushStall,
            InternalSystemEventRollingBrushStall,
            InternalSystemEventBumperDown,
            InternalSystemEventWallIrDown,
            InternalSystemEventCliffDown,
            InternalSystemEventBlowerStall,
            InternalSystemEventDustbinGone,
            InternalSystemEventMotionJam,
            InternalSystemEventIRDown,
            InternalSystemEventIMUDown,
            InternalSystemEventMopDown,
            InternalSystemEventMopUp,
            InternalSystemEventSetMapDone,
            InternalSystemEventMapUpdateEnable,
            InternalSystemEventMapUpdateDisable,
            InternalSystemEventMapDiscrepancy
        };

    }
}