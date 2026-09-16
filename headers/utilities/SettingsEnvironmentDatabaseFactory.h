#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 24 member(s).
namespace SystemSettings::DataModel {
class SettingsEnvironmentDatabaseFactory {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ActivateInstance@SettingsEnvironmentDatabaseFactory@DataModel@SystemSettings@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long ActivateInstance(IInspectable * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SettingsEnvironmentDatabaseFactory@DataModel@SystemSettings@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SettingsEnvironmentDatabaseFactory@DataModel@SystemSettings@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SettingsEnvironmentDatabaseFactory@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsEnvironment@SettingsEnvironmentDatabaseFactory@DataModel@SystemSettings@@UEAAJPEAPEAUIInspectable@@@Z
    virtual long GetSettingsEnvironment(IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingsEnvironmentForUser@SettingsEnvironmentDatabaseFactory@DataModel@SystemSettings@@UEAAJPEAUIUser@System@Windows@@PEAPEAUIInspectable@@@Z
    virtual long GetSettingsEnvironmentForUser(::Windows::System::IUser *, IInspectable * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SettingsEnvironmentDatabaseFactory@DataModel@SystemSettings@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassNameStatic@SettingsEnvironmentDatabaseFactory@DataModel@SystemSettings@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassNameStatic();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevelStatic@SettingsEnvironmentDatabaseFactory@DataModel@SystemSettings@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevelStatic();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SettingsEnvironmentDatabaseFactory@DataModel@SystemSettings@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SettingsEnvironmentDatabaseFactory@DataModel@SystemSettings@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SettingsEnvironmentDatabaseFactory@DataModel@SystemSettings@@QEAA@XZ
    SettingsEnvironmentDatabaseFactory();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetCoreSettingsEnvironmentFactory@SettingsEnvironmentDatabaseFactory@DataModel@SystemSettings@@AEAAJPEAUIUser@System@Windows@@PEAPEAUISettingsEnvironmentDatabaseStatics@23@@Z
    long TryGetCoreSettingsEnvironmentFactory(::Windows::System::IUser *, WindissectOpaque * *);
};
} // namespace SystemSettings::DataModel
