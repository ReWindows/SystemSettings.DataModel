#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 23 member(s).
namespace SystemSettings::DataModel {
class SettingsAugmentedExtensionAppLinkServer {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateApp@SettingsAugmentedExtensionAppLinkServer@DataModel@SystemSettings@@UEAAJXZ
    virtual long ActivateApp();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SettingsAugmentedExtensionAppLinkServer@DataModel@SystemSettings@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SettingsAugmentedExtensionAppLinkServer@DataModel@SystemSettings@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SettingsAugmentedExtensionAppLinkServer@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SettingsAugmentedExtensionAppLinkServer@DataModel@SystemSettings@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SettingsAugmentedExtensionAppLinkServer@DataModel@SystemSettings@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SettingsAugmentedExtensionAppLinkServer@DataModel@SystemSettings@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SettingsAugmentedExtensionAppLinkServer@DataModel@SystemSettings@@QEAA@XZ
    SettingsAugmentedExtensionAppLinkServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_ActivationParameters@SettingsAugmentedExtensionAppLinkServer@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_ActivationParameters(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppSettingId@SettingsAugmentedExtensionAppLinkServer@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AppSettingId(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Aumid@SettingsAugmentedExtensionAppLinkServer@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Aumid(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@SettingsAugmentedExtensionAppLinkServer@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_GlyphIcon@SettingsAugmentedExtensionAppLinkServer@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_GlyphIcon(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SearchTerms@SettingsAugmentedExtensionAppLinkServer@DataModel@SystemSettings@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z
    virtual long get_SearchTerms(WindissectOpaque * *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SettingsAugmentedExtensionAppLinkServer@DataModel@SystemSettings@@UEAA@XZ
    virtual ~SettingsAugmentedExtensionAppLinkServer();
};
} // namespace SystemSettings::DataModel
