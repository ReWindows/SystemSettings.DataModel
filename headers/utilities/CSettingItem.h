#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 52 member(s).
namespace SystemSettings::DataModel {
class CSettingItem {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@CSettingItem@DataModel@SystemSettings@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0CSettingItem@DataModel@SystemSettings@@QEAA@PEAUISettingItemInfo@12@@Z
    CSettingItem(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionId@CSettingItem@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetCollectionId(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@CSettingItem@DataModel@SystemSettings@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetProperty@CSettingItem@DataModel@SystemSettings@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long GetProperty(HSTRING__*, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@CSettingItem@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSyncType@CSettingItem@DataModel@SystemSettings@@UEAAJPEAW4SyncType@23@@Z
    virtual long GetSyncType(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@CSettingItem@DataModel@SystemSettings@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValue@CSettingItem@DataModel@SystemSettings@@UEAAJPEAUHSTRING__@@PEAPEAUIInspectable@@@Z
    virtual long GetValue(HSTRING__*, IInspectable * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@CSettingItem@DataModel@SystemSettings@@UEAAJPEAUICoreWindow@Core@UI@Windows@@URect@Foundation@7@@Z
    virtual long Invoke(::Windows::UI::Core::ICoreWindow *, WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingsAppResuming@CSettingItem@DataModel@SystemSettings@@UEAAJXZ
    virtual long OnSettingsAppResuming();
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingsAppSuspending@CSettingItem@DataModel@SystemSettings@@UEAAJXZ
    virtual long OnSettingsAppSuspending();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@CSettingItem@DataModel@SystemSettings@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@CSettingItem@DataModel@SystemSettings@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetPageSessionId@CSettingItem@DataModel@SystemSettings@@UEAAJU_GUID@@@Z
    virtual long SetPageSessionId(_GUID);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetProperty@CSettingItem@DataModel@SystemSettings@@UEAAJPEAUHSTRING__@@PEAUIInspectable@@@Z
    virtual long SetProperty(HSTRING__*, IInspectable *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValue@CSettingItem@DataModel@SystemSettings@@UEAAJPEAUHSTRING__@@PEAUIInspectable@@@Z
    virtual long SetValue(HSTRING__*, IInspectable *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SettingChanged@CSettingItem@DataModel@SystemSettings@@UEAAJPEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z
    virtual long add_SettingChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Description@CSettingItem@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Description(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Id@CSettingItem@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_Id(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsApplicable@CSettingItem@DataModel@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsApplicable(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsEnabled@CSettingItem@DataModel@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsEnabled(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsSetByGroupPolicy@CSettingItem@DataModel@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsSetByGroupPolicy(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_IsUpdating@CSettingItem@DataModel@SystemSettings@@UEAAJPEAE@Z
    virtual long get_IsUpdating(unsigned char *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_PageSessionId@CSettingItem@DataModel@SystemSettings@@UEAAJPEAU_GUID@@@Z
    virtual long get_PageSessionId(_GUID *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_Type@CSettingItem@DataModel@SystemSettings@@UEAAJPEAW4SettingType@23@@Z
    virtual long get_Type(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SettingChanged@CSettingItem@DataModel@SystemSettings@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SettingChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1CSettingItem@DataModel@SystemSettings@@UEAA@XZ
    virtual ~CSettingItem();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?_EnsureHandlerCreated@CSettingItem@DataModel@SystemSettings@@AEAAJXZ
    long _EnsureHandlerCreated();
};
} // namespace SystemSettings::DataModel
