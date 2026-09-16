#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 41 member(s).
namespace SystemSettings::DataModel {
class SettingsSearchContentManager {
public:
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?AddRef@SettingsSearchContentManager@DataModel@SystemSettings@@UEAAKXZ
    virtual unsigned long AddRef();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIids@SettingsSearchContentManager@DataModel@SystemSettings@@UEAAJPEAKPEAPEAU_GUID@@@Z
    virtual long GetIids(unsigned long *, _GUID * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsSearchFeatureEnabled@SettingsSearchContentManager@DataModel@SystemSettings@@UEAAJPEAUHSTRING__@@PEAE@Z
    virtual long GetIsSearchFeatureEnabled(HSTRING__*, unsigned char *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRuntimeClassName@SettingsSearchContentManager@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetRuntimeClassName(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSearchDatabaseAsync@SettingsSearchContentManager@DataModel@SystemSettings@@UEAAJPEAPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@@Z
    virtual long GetSearchDatabaseAsync(WindissectOpaque * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetServiceDrivenSearchData@SettingsSearchContentManager@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetServiceDrivenSearchData(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetServiceDrivenSearchNestedData@SettingsSearchContentManager@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long GetServiceDrivenSearchNestedData(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetTrustLevel@SettingsSearchContentManager@DataModel@SystemSettings@@UEAAJPEAW4TrustLevel@@@Z
    virtual long GetTrustLevel(int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetRuntimeClassName@SettingsSearchContentManager@DataModel@SystemSettings@@SAPEBGXZ
    static unsigned short const * InternalGetRuntimeClassName();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InternalGetTrustLevel@SettingsSearchContentManager@DataModel@SystemSettings@@SA?AW4TrustLevel@@XZ
    static int InternalGetTrustLevel();
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?QueryInterface@SettingsSearchContentManager@DataModel@SystemSettings@@UEAAJAEBU_GUID@@PEAPEAX@Z
    virtual long QueryInterface(_GUID const &, void * *);
    // Category: Refcount | Source: PDB Internal
    // Symbol: ?Release@SettingsSearchContentManager@DataModel@SystemSettings@@UEAAKXZ
    virtual unsigned long Release();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RuntimeClassInitialize@SettingsSearchContentManager@DataModel@SystemSettings@@QEAAJXZ
    long RuntimeClassInitialize();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SettingsSearchContentManager@DataModel@SystemSettings@@QEAA@XZ
    SettingsSearchContentManager();
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DatabasePath@SettingsSearchContentManager@DataModel@SystemSettings@@UEAAJPEAPEAUHSTRING__@@@Z
    virtual long get_DatabasePath(HSTRING__* *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_DatabaseRevision@SettingsSearchContentManager@DataModel@SystemSettings@@UEAAJPEA_K@Z
    virtual long get_DatabaseRevision(uint64_t *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FeatureStateDigest@SettingsSearchContentManager@DataModel@SystemSettings@@UEAAJPEAI@Z
    virtual long get_FeatureStateDigest(unsigned int *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_FeatureStateRevision@SettingsSearchContentManager@DataModel@SystemSettings@@UEAAJPEAI@Z
    virtual long get_FeatureStateRevision(unsigned int *);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultSettingsDatabaseFilePath@SettingsSearchContentManager@DataModel@SystemSettings@@AEAAJPEAPEAUHSTRING__@@@Z
    long GetDefaultSettingsDatabaseFilePath(HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetUpdatedSettingsSearchDatabase@SettingsSearchContentManager@DataModel@SystemSettings@@AEAAJPEAPEAUIStorageFile@Storage@Windows@@@Z
    long GetUpdatedSettingsSearchDatabase(::Windows::Storage::IStorageFile * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryEnsureDatabaseExtension@SettingsSearchContentManager@DataModel@SystemSettings@@AEAAJPEAPEAUISettingsSearchDatabaseExtension@23@@Z
    long TryEnsureDatabaseExtension(WindissectOpaque * *);
};
} // namespace SystemSettings::DataModel
