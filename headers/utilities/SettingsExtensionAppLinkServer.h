#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 21 member(s).
namespace SystemSettings::DataModel {
class SettingsExtensionAppLinkServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateApp@SettingsExtensionAppLinkServer@DataModel@SystemSettings@@UEAAJXZ
    virtual long ActivateApp();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SettingsExtensionAppLinkServer@DataModel@SystemSettings@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SettingsExtensionAppLinkServer@DataModel@SystemSettings@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SettingsExtensionAppLinkServer@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SettingsExtensionAppLinkServer@DataModel@SystemSettings@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SettingsExtensionAppLinkServer@DataModel@SystemSettings@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SettingsExtensionAppLinkServer@DataModel@SystemSettings@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SettingsExtensionAppLinkServer@DataModel@SystemSettings@@QEAAJPEBG00@Z
    long RuntimeClassInitialize(unsigned short const *, unsigned short const *, unsigned short const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SettingsExtensionAppLinkServer@DataModel@SystemSettings@@QEAA@XZ
    SettingsExtensionAppLinkServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivationParameters@SettingsExtensionAppLinkServer@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ActivationParameters(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Aumid@SettingsExtensionAppLinkServer@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Aumid(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@SettingsExtensionAppLinkServer@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SettingsExtensionAppLinkServer@DataModel@SystemSettings@@UEAA@XZ
    virtual ~SettingsExtensionAppLinkServer();
};
} // namespace SystemSettings::DataModel
