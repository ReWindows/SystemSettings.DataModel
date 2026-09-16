#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 6 member(s).
namespace SystemSettings {
class DataModel {
public:
    class AppAccessCheck;
    class CRegistrySettingData;
    class CRegistrySettingIdList;
    class CSettingItem;
    class CSettingItemAndInfoFactory;
    class CSettingItemInfoInternal;
    class CSettingItemInfoRegistry;
    class CSettingsDatabase;
    class Details;
    class HangGuard;
    class ISettingItemInfo;
    class ISettingSyncDataAccess;
    class ISettingsTestDatabase;
    class SettingsAugmentedExtensionAppLinkServer;
    class SettingsBrokerServer;
    class SettingsEnvironmentDatabaseFactory;
    class SettingsEnvironmentDatabaseServer;
    class SettingsExtensibilityServer;
    class SettingsExtensionAppLinkServer;
    class SettingsExtensionAppServer;
    class SettingsSearchContentManager;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatMessageArgAllocHString@DataModel@SystemSettings@@YAJPEBGPEAPEAUHSTRING__@@ZZ
    long FormatMessageArgAllocHString(unsigned short const *, HSTRING__* *, ...);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatResourceMessageArgAlloc@DataModel@SystemSettings@@YAJPEBGPEAPEAGZZ
    long FormatResourceMessageArgAlloc(unsigned short const *, unsigned short * *, ...);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRegString@DataModel@SystemSettings@@YAJPEAUHKEY__@@PEBGPEAPEAG@Z
    long GetRegString(HKEY__*, unsigned short const *, unsigned short * *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceStringById@DataModel@SystemSettings@@YAJPEBGPEAPEAUHSTRING__@@@Z
    long GetResourceStringById(unsigned short const *, HSTRING__* *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingTypeFromString@DataModel@SystemSettings@@YAJPEBGPEAW4SettingType@12@@Z
    long GetSettingTypeFromString(unsigned short const *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSyncTypeFromString@DataModel@SystemSettings@@YAJPEBGPEAW4SyncType@12@@Z
    long GetSyncTypeFromString(unsigned short const *, int *);
};
} // namespace SystemSettings
