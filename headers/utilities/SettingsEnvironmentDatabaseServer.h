#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 34 member(s).
namespace SystemSettings::DataModel {
class SettingsEnvironmentDatabaseServer {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SettingsEnvironmentDatabaseServer@DataModel@SystemSettings@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SettingsEnvironmentDatabaseServer@DataModel@SystemSettings@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SettingsEnvironmentDatabaseServer@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SettingsEnvironmentDatabaseServer@DataModel@SystemSettings@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@SettingsEnvironmentDatabaseServer@DataModel@SystemSettings@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@SettingsEnvironmentDatabaseServer@DataModel@SystemSettings@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSettingAccessible@SettingsEnvironmentDatabaseServer@DataModel@SystemSettings@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long IsSettingAccessible(HSTRING__*, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSettingApplicable@SettingsEnvironmentDatabaseServer@DataModel@SystemSettings@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long IsSettingApplicable(HSTRING__*, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSettingGlyphDynamic@SettingsEnvironmentDatabaseServer@DataModel@SystemSettings@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long IsSettingGlyphDynamic(HSTRING__*, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSettingTextDynamic@SettingsEnvironmentDatabaseServer@DataModel@SystemSettings@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long IsSettingTextDynamic(HSTRING__*, unsigned char *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SettingsEnvironmentDatabaseServer@DataModel@SystemSettings@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SettingsEnvironmentDatabaseServer@DataModel@SystemSettings@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SettingsEnvironmentDatabaseServer@DataModel@SystemSettings@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SettingsEnvironmentDatabaseServer@DataModel@SystemSettings@@QEAA@XZ
    SettingsEnvironmentDatabaseServer();
    // Category: Method | Source: PDB Internal
    // Symbol: ?add_SettingsEnvironmentChanged@SettingsEnvironmentDatabaseServer@DataModel@SystemSettings@@UEAAJPEAUISettingsEnvironmentChangedHandler@23@PEAUEventRegistrationToken@@@Z
    virtual long add_SettingsEnvironmentChanged(WindissectOpaque *, EventRegistrationToken *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?remove_SettingsEnvironmentChanged@SettingsEnvironmentDatabaseServer@DataModel@SystemSettings@@UEAAJUEventRegistrationToken@@@Z
    virtual long remove_SettingsEnvironmentChanged(EventRegistrationToken);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SettingsEnvironmentDatabaseServer@DataModel@SystemSettings@@UEAA@XZ
    virtual ~SettingsEnvironmentDatabaseServer();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeSettingsEnvironmentExtension@SettingsEnvironmentDatabaseServer@DataModel@SystemSettings@@AEAAJXZ
    long InitializeSettingsEnvironmentExtension();
    // Category: Method | Source: PDB Internal
    // Symbol: ?Invoke@SettingsEnvironmentDatabaseServer@DataModel@SystemSettings@@EEAAJPEBG@Z
    virtual long Invoke(unsigned short const *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetExtensionPackageFullName@SettingsEnvironmentDatabaseServer@DataModel@SystemSettings@@AEAAPEAUHSTRING__@@XZ
    HSTRING__* TryGetExtensionPackageFullName();
};
} // namespace SystemSettings::DataModel
