#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 4 member(s).
namespace Settings::Internal {
class DeviceRegionStore {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetDeviceRegion@DeviceRegionStore@Internal@Settings@@QEAAXJ@Z
    void SetDeviceRegion(long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetValidDeviceRegion@DeviceRegionStore@Internal@Settings@@QEAA_NAEAJ@Z
    bool TryGetValidDeviceRegion(long &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DeviceRegionStore@Internal@Settings@@QEAA@XZ
    ~DeviceRegionStore();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureOpenRegistryKey@DeviceRegionStore@Internal@Settings@@AEAAX_N@Z
    void EnsureOpenRegistryKey(bool);
};
} // namespace Settings::Internal
