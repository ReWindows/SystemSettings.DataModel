#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 11 member(s).
namespace SystemSettings::DataModel {
class CSettingItemInfoRegistry {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSettingItemInfoRegistry@DataModel@SystemSettings@@QEAA@XZ
    CSettingItemInfoRegistry();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectionID@CSettingItemInfoRegistry@DataModel@SystemSettings@@UEAAPEBGXZ
    virtual unsigned short const * CollectionID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHandler@CSettingItemInfoRegistry@DataModel@SystemSettings@@UEAAJPEAPEAUISettingItem@23@@Z
    virtual long CreateHandler(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Id@CSettingItemInfoRegistry@DataModel@SystemSettings@@UEAAPEBGXZ
    virtual unsigned short const * Id();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequiredCapabilities@CSettingItemInfoRegistry@DataModel@SystemSettings@@UEAAPEBGXZ
    virtual unsigned short const * RequiredCapabilities();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncType@CSettingItemInfoRegistry@DataModel@SystemSettings@@UEAA?AW4023@XZ
    virtual int SyncType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Type@CSettingItemInfoRegistry@DataModel@SystemSettings@@UEAA?AW4SettingType@23@XZ
    virtual int Type();
    // Category: Method | Source: PDB Internal
    // Symbol: ?pDescriptionData@CSettingItemInfoRegistry@DataModel@SystemSettings@@UEAAPEBUDescriptionData@23@XZ
    virtual WindissectOpaque const * pDescriptionData();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSettingItemInfoRegistry@DataModel@SystemSettings@@EEAA@XZ
    virtual ~CSettingItemInfoRegistry();
};
} // namespace SystemSettings::DataModel
