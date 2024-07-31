/*******************************************************************************
* @author  Ez
* @email
* @date    07/2024
*******************************************************************************/

#include <veins/modules/application/f2md/mdBase/vehiclepatterns.h>


VehiclePatterns::VehiclePatterns() {
    laneChangeInfoList.reserve(maxRecords);
}

void VehiclePatterns::addLaneChangeInfo(const veins::Coord& speed, const veins::Coord& acceleration, const veins::Coord& heading) {
    LaneChangeInfo info{speed, acceleration, heading};

        laneChangeInfoList.push_back(info);

}

const std::vector<VehiclePatterns::LaneChangeInfo>& VehiclePatterns::getLaneChangeInfoList() const {
    return laneChangeInfoList;
}

size_t VehiclePatterns::getLaneChangeInfosize() const {
    return laneChangeInfoList.size();
}

void VehiclePatterns::clearLaneChangeInfoList() {
    laneChangeInfoList.clear();
}

