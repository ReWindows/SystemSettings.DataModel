#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 13 member(s).
namespace winrt::Windows::Internal::SystemSettingsCommand::implementation {
class RangeSettingCommandAdapter {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@RangeSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AUhstring@6@AEBU76@AEBW4SettingCommandState@3456@AEBUIInspectable@Foundation@56@20@Z
    WindissectOpaque GetDescription(WindissectOpaque const &, int const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueAsync@RangeSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@UIInspectable@Foundation@Windows@winrt@@@Foundation@56@XZ
    WindissectOpaque GetValueAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAsync@RangeSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@XZ
    WindissectOpaque InitializeAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicableAsync@RangeSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@XZ
    WindissectOpaque IsApplicableAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabledAsync@RangeSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@XZ
    WindissectOpaque IsEnabledAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExecutableAsync@RangeSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@Uhstring@6@@Z
    WindissectOpaque IsExecutableAsync(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExecutionContextValid@RangeSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA_NAEBUSettingCommandExecutionContext@3456@@Z
    bool IsExecutionContextValid(WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RangeSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA@AEBUhstring@5@AEBU?$IMapView@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@Foundation@45@AEBU?$IVectorView@Uhstring@winrt@@@8945@@Z
    RangeSettingCommandAdapter(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RangeSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA@USettingWrapper@2345@AEBU?$IMapView@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@Foundation@45@AEBU?$IVectorView@Uhstring@winrt@@@8945@@Z
    RangeSettingCommandAdapter(WindissectOpaque, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueAsync@RangeSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@UIInspectable@856@U?$IMapView@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@856@@Z
    WindissectOpaque SetValueAsync(WindissectOpaque, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RangeSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@UEAA@XZ
    virtual ~RangeSettingCommandAdapter();
};
} // namespace winrt::Windows::Internal::SystemSettingsCommand::implementation
