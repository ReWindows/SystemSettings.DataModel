#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 12 member(s).
namespace winrt::Windows::Internal::SystemSettingsCommand::implementation {
class SettingWrapper {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueAsync@SettingWrapper@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@UIInspectable@Foundation@Windows@winrt@@@Foundation@56@Uhstring@6@@Z
    WindissectOpaque GetValueAsync(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueAsync@SettingWrapper@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@UIInspectable@Foundation@Windows@winrt@@@Foundation@56@XZ
    WindissectOpaque GetValueAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InvokeAsync@SettingWrapper@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@U?$IMapView@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@856@@Z
    WindissectOpaque InvokeAsync(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicableAsync@SettingWrapper@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@XZ
    WindissectOpaque IsApplicableAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabledAsync@SettingWrapper@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@XZ
    WindissectOpaque IsEnabledAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueAsync@SettingWrapper@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@UIInspectable@856@@Z
    WindissectOpaque SetValueAsync(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueAsync@SettingWrapper@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@Uhstring@6@UIInspectable@856@@Z
    WindissectOpaque SetValueAsync(WindissectOpaque, WindissectOpaque);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SettingWrapper@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA@AEBUISettingItem@DataModel@SystemSettings@5@@Z
    SettingWrapper(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SettingWrapper@implementation@SystemSettingsCommand@Internal@Windows@winrt@@UEAA@XZ
    virtual ~SettingWrapper();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnSettingChanged@SettingWrapper@implementation@SystemSettingsCommand@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@56@AEBUhstring@6@@Z
    void OnSettingChanged(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::Windows::Internal::SystemSettingsCommand::implementation
