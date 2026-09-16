#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 23 member(s).
namespace SystemSettings::DataModel {
class SettingsExtensionAppServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SettingsExtensionAppServer@DataModel@SystemSettings@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SettingsExtensionAppServer@DataModel@SystemSettings@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SettingsExtensionAppServer@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SettingsExtensionAppServer@DataModel@SystemSettings@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SettingsExtensionAppServer@DataModel@SystemSettings@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SettingsExtensionAppServer@DataModel@SystemSettings@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SettingsExtensionAppServer@DataModel@SystemSettings@@QEAA@XZ
    SettingsExtensionAppServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AppLinks@SettingsExtensionAppServer@DataModel@SystemSettings@@UEAAJPEAPEAU?$IVectorView@PEAVSettingsExtensionAppLink@DataModel@SystemSettings@@@Collections@Foundation@Windows@@@Z
    virtual long get_AppLinks(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AssociatedPageUri@SettingsExtensionAppServer@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_AssociatedPageUri(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_AugmentedAppLinks@SettingsExtensionAppServer@DataModel@SystemSettings@@UEAAJPEAPEAU?$IVectorView@PEAVSettingsAugmentedExtensionAppLink@DataModel@SystemSettings@@@Collections@Foundation@Windows@@@Z
    virtual long get_AugmentedAppLinks(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Aumid@SettingsExtensionAppServer@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Aumid(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DisplayName@SettingsExtensionAppServer@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DisplayName(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SearchTerms@SettingsExtensionAppServer@DataModel@SystemSettings@@UEAAJPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@@Z
    virtual long get_SearchTerms(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_SettingCategory@SettingsExtensionAppServer@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_SettingCategory(HSTRING__* *);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SettingsExtensionAppServer@DataModel@SystemSettings@@UEAA@XZ
    virtual ~SettingsExtensionAppServer();
};
} // namespace SystemSettings::DataModel
