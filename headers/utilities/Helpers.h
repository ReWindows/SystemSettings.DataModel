#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 24 member(s).
namespace winrt::Windows::Internal::SystemSettingsCommand {
class Helpers {
public:
    class DynamicSettingInfo;
    class RegistryCommand;
    class SettingCommandAdapterOption;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxBooleanValue@Helpers@SystemSettingsCommand@Internal@Windows@winrt@@YA?AUIInspectable@Foundation@45@_N@Z
    WindissectOpaque BoxBooleanValue(bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BoxDwordAs@Helpers@SystemSettingsCommand@Internal@Windows@winrt@@YA?AUIInspectable@Foundation@45@AEBW4PropertyType@745@AEBK@Z
    WindissectOpaque BoxDwordAs(int const &, unsigned long const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildAdapterResourceId@Helpers@SystemSettingsCommand@Internal@Windows@winrt@@YA?AUhstring@5@AEBU65@W4SettingCommandState@2345@0@Z
    WindissectOpaque BuildAdapterResourceId(WindissectOpaque const &, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildBooleanAdapterResourceId@Helpers@SystemSettingsCommand@Internal@Windows@winrt@@YA?AUhstring@5@AEBU65@W4SettingCommandState@2345@0@Z
    WindissectOpaque BuildBooleanAdapterResourceId(WindissectOpaque const &, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?BuildRangeAdapterResourceId@Helpers@SystemSettingsCommand@Internal@Windows@winrt@@YA?AUhstring@5@AEBU65@W4SettingCommandState@2345@0@Z
    WindissectOpaque BuildRangeAdapterResourceId(WindissectOpaque const &, int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateRangeSettingsTargetValue@Helpers@SystemSettingsCommand@Internal@Windows@winrt@@YA?AUIInspectable@Foundation@45@AEBW4PropertyType@745@AEBIAEBUhstring@5@111@Z
    WindissectOpaque CalculateRangeSettingsTargetValue(int const &, unsigned int const &, WindissectOpaque const &, unsigned int const &, unsigned int const &, unsigned int const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatDropdownResourceString@Helpers@SystemSettingsCommand@Internal@Windows@winrt@@YA?AUhstring@5@AEBU65@00@Z
    WindissectOpaque FormatDropdownResourceString(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FormatRangeResourceString@Helpers@SystemSettingsCommand@Internal@Windows@winrt@@YA?AUhstring@5@AEBU65@00@Z
    WindissectOpaque FormatRangeResourceString(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetBooleanValue@Helpers@SystemSettingsCommand@Internal@Windows@winrt@@YA_NAEBUIInspectable@Foundation@45@@Z
    bool GetBooleanValue(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCollectionSettingIdParameter@Helpers@SystemSettingsCommand@Internal@Windows@winrt@@YA?AUhstring@5@AEBU?$IMapView@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@Foundation@45@@Z
    WindissectOpaque GetCollectionSettingIdParameter(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescriptionErrorResourceString@Helpers@SystemSettingsCommand@Internal@Windows@winrt@@YA?AUhstring@5@XZ
    WindissectOpaque GetDescriptionErrorResourceString();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDwordValue@Helpers@SystemSettingsCommand@Internal@Windows@winrt@@YAKAEBUIInspectable@Foundation@45@@Z
    unsigned long GetDwordValue(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDynamicSettingInfo@Helpers@SystemSettingsCommand@Internal@Windows@winrt@@YA?AUDynamicSettingInfo@12345@AEBU?$IMapView@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@Foundation@45@@Z
    WindissectOpaque GetDynamicSettingInfo(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandlerSupportedType@Helpers@SystemSettingsCommand@Internal@Windows@winrt@@YA?AUhstring@5@AEBU?$IMapView@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@Foundation@45@@Z
    WindissectOpaque GetHandlerSupportedType(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsReexecutable@Helpers@SystemSettingsCommand@Internal@Windows@winrt@@YA_NAEBU?$IMapView@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@Foundation@45@@Z
    bool GetIsReexecutable(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIsRollbackSupported@Helpers@SystemSettingsCommand@Internal@Windows@winrt@@YA_NAEBU?$IMapView@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@Foundation@45@@Z
    bool GetIsRollbackSupported(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetRangeCustomJump@Helpers@SystemSettingsCommand@Internal@Windows@winrt@@YAIAEBU?$IMapView@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@Foundation@45@@Z
    unsigned int GetRangeCustomJump(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetResourceStringById@Helpers@SystemSettingsCommand@Internal@Windows@winrt@@YA?AUhstring@5@AEBU65@@Z
    WindissectOpaque GetResourceStringById(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSupportedParameters@Helpers@SystemSettingsCommand@Internal@Windows@winrt@@YA?AUhstring@5@AEBU?$IMapView@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@Foundation@45@@Z
    WindissectOpaque GetSupportedParameters(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsSortedAscending@Helpers@SystemSettingsCommand@Internal@Windows@winrt@@YA_NAEBU?$IMapView@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@Foundation@45@@Z
    bool IsSortedAscending(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ShouldSettingInvoke@Helpers@SystemSettingsCommand@Internal@Windows@winrt@@YA_NAEBU?$IMapView@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@Foundation@45@@Z
    bool ShouldSettingInvoke(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TryGetDynamicSettingWrapperAsync@Helpers@SystemSettingsCommand@Internal@Windows@winrt@@YA?AU?$IAsyncOperation@UISettingItem@DataModel@SystemSettings@winrt@@@Foundation@45@AEBUSettingWrapper@2345@AEBUDynamicSettingInfo@12345@@Z
    WindissectOpaque TryGetDynamicSettingWrapperAsync(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySelectCameraDeviceFromCollectionAsync@Helpers@SystemSettingsCommand@Internal@Windows@winrt@@YA?AU?$IAsyncOperation@UISettingItem@DataModel@SystemSettings@winrt@@@Foundation@45@AEBUSettingWrapper@2345@@Z
    WindissectOpaque TrySelectCameraDeviceFromCollectionAsync(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?TrySelectItemFromCollectionAsync@Helpers@SystemSettingsCommand@Internal@Windows@winrt@@YA?AU?$IAsyncOperation@UISettingItem@DataModel@SystemSettings@winrt@@@Foundation@45@AEBUSettingWrapper@2345@AEBUhstring@5@@Z
    WindissectOpaque TrySelectItemFromCollectionAsync(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::Windows::Internal::SystemSettingsCommand
