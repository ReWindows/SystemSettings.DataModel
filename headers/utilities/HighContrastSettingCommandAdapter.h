#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 14 member(s).
namespace winrt::Windows::Internal::SystemSettingsCommand::implementation {
class HighContrastSettingCommandAdapter {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescription@HighContrastSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AUhstring@6@AEBU76@AEBW4SettingCommandState@3456@AEBUIInspectable@Foundation@56@20@Z
    WindissectOpaque GetDescription(WindissectOpaque const &, int const &, WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueAsync@HighContrastSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@UIInspectable@Foundation@Windows@winrt@@@Foundation@56@XZ
    WindissectOpaque GetValueAsync();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HighContrastSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA@AEBUhstring@5@@Z
    HighContrastSettingCommandAdapter(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAsync@HighContrastSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@XZ
    WindissectOpaque InitializeAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicableAsync@HighContrastSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@XZ
    WindissectOpaque IsApplicableAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabledAsync@HighContrastSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@XZ
    WindissectOpaque IsEnabledAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExecutableAsync@HighContrastSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@Uhstring@6@@Z
    WindissectOpaque IsExecutableAsync(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExecutionContextValid@HighContrastSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA_NAEBUSettingCommandExecutionContext@3456@@Z
    bool IsExecutionContextValid(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueAsync@HighContrastSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@AEBUIInspectable@856@AEBU?$IMapView@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@856@@Z
    WindissectOpaque SetValueAsync(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HighContrastSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@UEAA@XZ
    virtual ~HighContrastSettingCommandAdapter();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetHighContrastThemeId@HighContrastSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@Uhstring@winrt@@@Foundation@56@AEBUISettingItem@DataModel@SystemSettings@6@@Z
    WindissectOpaque GetHighContrastThemeId(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetThemeValue@HighContrastSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@AEAA?AUIAsyncAction@Foundation@56@AEBUISettingItem@DataModel@SystemSettings@6@@Z
    WindissectOpaque SetThemeValue(WindissectOpaque const &);
};
} // namespace winrt::Windows::Internal::SystemSettingsCommand::implementation
