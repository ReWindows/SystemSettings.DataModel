#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 7 member(s).
namespace SystemSettings::DataModel {
class CSettingItemAndInfoFactory {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSettingItemAndInfoFactory@DataModel@SystemSettings@@QEAA@XZ
    CSettingItemAndInfoFactory();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSetting@CSettingItemAndInfoFactory@DataModel@SystemSettings@@QEAAJPEAPEAUISettingItem@23@@Z
    long CreateSetting(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSettingForUser@CSettingItemAndInfoFactory@DataModel@SystemSettings@@QEAAJPEAUIUser@System@Windows@@PEAPEAUISettingItem@23@@Z
    long CreateSettingForUser(::Windows::System::IUser *, WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSettingItemAndInfoFactory@DataModel@SystemSettings@@UEAA@XZ
    virtual ~CSettingItemAndInfoFactory();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckRequiredCapabilityAccess@CSettingItemAndInfoFactory@DataModel@SystemSettings@@AEAAJPEBG@Z
    long CheckRequiredCapabilityAccess(unsigned short const *);
};
} // namespace SystemSettings::DataModel
