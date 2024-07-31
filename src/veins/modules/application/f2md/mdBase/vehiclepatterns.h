/*******************************************************************************
 * @author  Ez
 * @email
 * @date    07/2024
 *******************************************************************************/

// VehiclePatterns.h

#ifndef VEHICLEPATTERNS_H_
#define VEHICLEPATTERNS_H_

#include <omnetpp.h>
#include <vector>
#include "veins/base/utils/Coord.h"


using namespace veins;
using namespace omnetpp;

class VehiclePatterns {
public:
    struct LaneChangeInfo {
        veins::Coord speed;
        veins::Coord acceleration;
        veins::Coord heading;
    };

    VehiclePatterns();

    void addLaneChangeInfo(const veins::Coord& speed, const veins::Coord& acceleration, const veins::Coord& heading);
    const std::vector<LaneChangeInfo>& getLaneChangeInfoList() const;
    size_t getLaneChangeInfosize() const;
    void clearLaneChangeInfoList();

private:
    std::vector<LaneChangeInfo> laneChangeInfoList;
    static const int maxRecords = 2;
};

//class VehiclePatterns {
//public:
//    struct LaneChangeInfo {
//        veins::Coord speed;
//        veins::Coord acceleration;
//        veins::Coord heading;
//    };
//
//    VehiclePatterns();
//    void addLaneChangeInfo(const veins::Coord& speed, const veins::Coord& acceleration, const veins::Coord& heading);
//    const std::vector<LaneChangeInfo>& getLaneChangeInfoList() const;
//    void clearLaneChangeInfoList();
//
//private:
//    std::vector<LaneChangeInfo> laneChangeInfoList;
//    static const int maxRecords = 4;  // 设置最大记录数量
//};

#endif /* VEHICLEPATTERNS_H_ */
