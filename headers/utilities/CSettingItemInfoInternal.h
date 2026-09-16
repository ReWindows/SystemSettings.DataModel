#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 11 member(s).
namespace SystemSettings::DataModel {
class CSettingItemInfoInternal {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSettingItemInfoInternal@DataModel@SystemSettings@@QEAA@XZ
    CSettingItemInfoInternal();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CollectionID@CSettingItemInfoInternal@DataModel@SystemSettings@@UEAAPEBGXZ
    virtual unsigned short const * CollectionID();
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateHandler@CSettingItemInfoInternal@DataModel@SystemSettings@@UEAAJPEAPEAUISettingItem@23@@Z
    virtual long CreateHandler(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Id@CSettingItemInfoInternal@DataModel@SystemSettings@@UEAAPEBGXZ
    virtual unsigned short const * Id();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RequiredCapabilities@CSettingItemInfoInternal@DataModel@SystemSettings@@UEAAPEBGXZ
    virtual unsigned short const * RequiredCapabilities();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SyncType@CSettingItemInfoInternal@DataModel@SystemSettings@@UEAA?AW4023@XZ
    virtual int SyncType();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Type@CSettingItemInfoInternal@DataModel@SystemSettings@@UEAA?AW4SettingType@23@XZ
    virtual int Type();
    // Category: Method | Source: PDB Internal
    // Symbol: ?pDescriptionData@CSettingItemInfoInternal@DataModel@SystemSettings@@UEAAPEBUDescriptionData@23@XZ
    virtual WindissectOpaque const * pDescriptionData();
private:
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSettingItemInfoInternal@DataModel@SystemSettings@@EEAA@XZ
    virtual ~CSettingItemInfoInternal();
};
} // namespace SystemSettings::DataModel
