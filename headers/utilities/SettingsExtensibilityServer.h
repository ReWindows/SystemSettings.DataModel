#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 36 member(s).
namespace SystemSettings::DataModel {
class SettingsExtensibilityServer {
public:
    class ResourceLookupInfo;
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SettingsExtensibilityServer@DataModel@SystemSettings@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Method | Source: PDB Internal
    // Symbol: ?AnyInstalledCategoryAppsAsync@SettingsExtensibilityServer@DataModel@SystemSettings@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long AnyInstalledCategoryAppsAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CheckIfInstalledExtensionAppsChangedAsync@SettingsExtensibilityServer@DataModel@SystemSettings@@UEAAJPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z
    virtual long CheckIfInstalledExtensionAppsChangedAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAugmentedExtensionAppsAsync@SettingsExtensibilityServer@DataModel@SystemSettings@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVSettingsExtensionApp@DataModel@SystemSettings@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long GetAugmentedExtensionAppsAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtensionAppsAsync@SettingsExtensibilityServer@DataModel@SystemSettings@@UEAAJPEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVSettingsExtensionApp@DataModel@SystemSettings@@@Collections@Foundation@Windows@@@Foundation@Windows@@@Z
    virtual long GetExtensionAppsAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtensionAppsForPageAsync@SettingsExtensibilityServer@DataModel@SystemSettings@@UEAAJPEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVSettingsExtensionApp@DataModel@SystemSettings@@@Collections@Foundation@Windows@@@67@@Z
    virtual long GetExtensionAppsForPageAsync(WindissectOpaque *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SettingsExtensibilityServer@DataModel@SystemSettings@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SettingsExtensibilityServer@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SettingsExtensibilityServer@DataModel@SystemSettings@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@SettingsExtensibilityServer@DataModel@SystemSettings@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@SettingsExtensibilityServer@DataModel@SystemSettings@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SettingsExtensibilityServer@DataModel@SystemSettings@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SettingsExtensibilityServer@DataModel@SystemSettings@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SettingsExtensibilityServer@DataModel@SystemSettings@@QEAA@XZ
    SettingsExtensibilityServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?SnapshotInstalledExtensionAppsAsync@SettingsExtensibilityServer@DataModel@SystemSettings@@UEAAJPEAPEAUIAsyncAction@Foundation@Windows@@@Z
    virtual long SnapshotInstalledExtensionAppsAsync(WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Revision@SettingsExtensibilityServer@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Revision(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?put_Revision@SettingsExtensibilityServer@DataModel@SystemSettings@@UEAAJPEAUHSTRING__@@@Z
    virtual long put_Revision(HSTRING__*);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateExtensionAppHash@SettingsExtensibilityServer@DataModel@SystemSettings@@AEAAJPEA_K@Z
    long CalculateExtensionAppHash(uint64_t *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetChildMapFromMap@SettingsExtensibilityServer@DataModel@SystemSettings@@AEAAJPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBGPEAPEAU4567@@Z
    long GetChildMapFromMap(WindissectOpaque *, unsigned short const *, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetExtensionAppsFilteredAsync@SettingsExtensibilityServer@DataModel@SystemSettings@@AEAAJW4FilterBy@123@PEAU?$IIterable@PEAUHSTRING__@@@Collections@Foundation@Windows@@PEAPEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVSettingsExtensionApp@DataModel@SystemSettings@@@Collections@Foundation@Windows@@@78@_N@Z
    long GetExtensionAppsFilteredAsync(int, WindissectOpaque *, WindissectOpaque * *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetLocalizedStringFromMap@SettingsExtensibilityServer@DataModel@SystemSettings@@AEAAJPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@AEBUResourceLookupInfo@123@PEBGPEAPEAUHSTRING__@@@Z
    long GetLocalizedStringFromMap(WindissectOpaque *, WindissectOpaque const &, unsigned short const *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceLookupInfo@SettingsExtensibilityServer@DataModel@SystemSettings@@AEAAJPEAUIApplication@StateRepository@Internal@Windows@@AEAUResourceLookupInfo@123@@Z
    long GetResourceLookupInfo(::Windows::Internal::StateRepository::IApplication *, WindissectOpaque &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsAppLinkData@SettingsExtensibilityServer@DataModel@SystemSettings@@AEAAJPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@AEBUResourceLookupInfo@123@PEAPEAUHSTRING__@@2@Z
    long GetSettingsAppLinkData(WindissectOpaque *, WindissectOpaque const &, HSTRING__* *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsAppPlacement@SettingsExtensibilityServer@DataModel@SystemSettings@@AEAAJPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEAPEAUHSTRING__@@1@Z
    long GetSettingsAppPlacement(WindissectOpaque *, HSTRING__* *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsExtensionApp@SettingsExtensibilityServer@DataModel@SystemSettings@@AEAAJPEAUIApplicationExtension@StateRepository@Internal@Windows@@PEAPEAUISettingsExtensionApp@23@_N@Z
    long GetSettingsExtensionApp(::Windows::Internal::StateRepository::IApplicationExtension *, WindissectOpaque * *, bool);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetStringFromMap@SettingsExtensibilityServer@DataModel@SystemSettings@@AEAAJPEAU?$IMap@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@Windows@@PEBGPEAPEAUHSTRING__@@@Z
    long GetStringFromMap(WindissectOpaque *, unsigned short const *, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LookupStringResource@SettingsExtensibilityServer@DataModel@SystemSettings@@AEAAJAEBUResourceLookupInfo@123@AEBVHString@Wrappers@WRL@Microsoft@@PEAPEAUHSTRING__@@@Z
    long LookupStringResource(WindissectOpaque const &, ::Microsoft::WRL::Wrappers::HString const &, HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateSavedExtensionAppHash@SettingsExtensibilityServer@DataModel@SystemSettings@@AEAAJ_K@Z
    long UpdateSavedExtensionAppHash(uint64_t);
};
} // namespace SystemSettings::DataModel
