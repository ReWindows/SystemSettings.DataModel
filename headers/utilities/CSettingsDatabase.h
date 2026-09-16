#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 46 member(s).
namespace SystemSettings::DataModel {
class CSettingsDatabase {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSettingsDatabase@DataModel@SystemSettings@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSettingsDatabase@DataModel@SystemSettings@@QEAA@XZ
    CSettingsDatabase();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionMappedSettings@CSettingsDatabase@DataModel@SystemSettings@@UEAAJPEAUHSTRING__@@PEAPEAUMAPPEDSETTING@@PEAI@Z
    virtual long GetCollectionMappedSettings(HSTRING__*, MAPPEDSETTING * *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstSettingId@CSettingsDatabase@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetFirstSettingId(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSettingsDatabase@DataModel@SystemSettings@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetNextSettingId@CSettingsDatabase@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetNextSettingId(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSettingsDatabase@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSetting@CSettingsDatabase@DataModel@SystemSettings@@UEAAJPEAUHSTRING__@@PEAPEAUISettingItem@23@@Z
    virtual long GetSetting(HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingForUser@CSettingsDatabase@DataModel@SystemSettings@@UEAAJPEAUIUser@System@Windows@@PEAUHSTRING__@@PEAPEAUISettingItem@23@@Z
    virtual long GetSettingForUser(::Windows::System::IUser *, HSTRING__*, WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSettingsDatabase@DataModel@SystemSettings@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@CSettingsDatabase@DataModel@SystemSettings@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@CSettingsDatabase@DataModel@SystemSettings@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSettingsDatabase@DataModel@SystemSettings@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSettingsDatabase@DataModel@SystemSettings@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@CSettingsDatabase@DataModel@SystemSettings@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSettingsDatabase@DataModel@SystemSettings@@UEAA@XZ
    virtual ~CSettingsDatabase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureRegistrySettingIdsAreMappped@CSettingsDatabase@DataModel@SystemSettings@@AEAAJXZ
    long _EnsureRegistrySettingIdsAreMappped();
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureSettingIdInMap@CSettingsDatabase@DataModel@SystemSettings@@AEAAJPEAUHSTRING__@@PEAPEAVCSettingItemAndInfoFactory@23@@Z
    long _EnsureSettingIdInMap(HSTRING__*, WindissectOpaque * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_InsertIntoMap@CSettingsDatabase@DataModel@SystemSettings@@AEAAJPEBGPEAVCSettingItemAndInfoFactory@23@PEAE@Z
    long _InsertIntoMap(unsigned short const *, WindissectOpaque *, unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?_LookupMap@CSettingsDatabase@DataModel@SystemSettings@@AEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    long _LookupMap(HSTRING__*, IInspectable * *);
};
} // namespace SystemSettings::DataModel
