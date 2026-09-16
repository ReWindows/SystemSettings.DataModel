#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 18 member(s).
namespace SystemSettings::DataModel {
class SettingsBrokerServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SettingsBrokerServer@DataModel@SystemSettings@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SettingsBrokerServer@DataModel@SystemSettings@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SettingsBrokerServer@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsDatabase@SettingsBrokerServer@DataModel@SystemSettings@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetSettingsDatabase(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSystemSettingsDatabase@SettingsBrokerServer@DataModel@SystemSettings@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetSystemSettingsDatabase(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SettingsBrokerServer@DataModel@SystemSettings@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@SettingsBrokerServer@DataModel@SystemSettings@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@SettingsBrokerServer@DataModel@SystemSettings@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SettingsBrokerServer@DataModel@SystemSettings@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SettingsBrokerServer@DataModel@SystemSettings@@UEAAKXZ
    virtual unsigned long Release();
};
} // namespace SystemSettings::DataModel
