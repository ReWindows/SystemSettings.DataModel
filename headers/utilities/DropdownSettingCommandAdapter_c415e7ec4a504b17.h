#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 18 member(s).
namespace winrt::Windows::Internal::SystemSettingsCommand::implementation {
class DropdownSettingCommandAdapter {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DropdownSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA@AEBUhstring@5@AEBU?$IMapView@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@Foundation@45@AEBU?$IVectorView@Uhstring@winrt@@@8945@@Z
    DropdownSettingCommandAdapter(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0DropdownSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA@USettingWrapper@2345@AEBU?$IMapView@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@Foundation@45@AEBU?$IVectorView@Uhstring@winrt@@@8945@@Z
    DropdownSettingCommandAdapter(WindissectOpaque, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@DropdownSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AUhstring@6@AEBU76@AEBW4SettingCommandState@3456@AEBUIInspectable@Foundation@56@20@Z
    WindissectOpaque GetDescription(WindissectOpaque const &, int const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueAsync@DropdownSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@UIInspectable@Foundation@Windows@winrt@@@Foundation@56@XZ
    WindissectOpaque GetValueAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAsync@DropdownSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@XZ
    WindissectOpaque InitializeAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicableAsync@DropdownSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@XZ
    WindissectOpaque IsApplicableAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabledAsync@DropdownSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@XZ
    WindissectOpaque IsEnabledAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExecutableAsync@DropdownSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@Uhstring@6@@Z
    WindissectOpaque IsExecutableAsync(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueAsync@DropdownSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@UIInspectable@856@U?$IMapView@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@856@@Z
    WindissectOpaque SetValueAsync(WindissectOpaque, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1DropdownSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@UEAA@XZ
    virtual ~DropdownSettingCommandAdapter();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDropdownSelection@DropdownSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@AEAA?AUhstring@6@HAEBU76@@Z
    WindissectOpaque GetDropdownSelection(int, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHandlerValueForModelTargetValue@DropdownSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@AEAA?AUIInspectable@Foundation@56@Uhstring@6@@Z
    WindissectOpaque GetHandlerValueForModelTargetValue(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIndexOfCurrentItem@DropdownSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@AEAAHAEBUhstring@6@@Z
    int GetIndexOfCurrentItem(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetModelTargetValueForHandlerValue@DropdownSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@AEAA?AUhstring@6@UIInspectable@Foundation@56@@Z
    WindissectOpaque GetModelTargetValueForHandlerValue(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsModelTargetValueSupported@DropdownSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@AEAA_NAEBUhstring@6@@Z
    bool IsModelTargetValueSupported(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsValidIndex@DropdownSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@AEAA_NAEBH@Z
    bool IsValidIndex(int const &);
};
} // namespace winrt::Windows::Internal::SystemSettingsCommand::implementation
