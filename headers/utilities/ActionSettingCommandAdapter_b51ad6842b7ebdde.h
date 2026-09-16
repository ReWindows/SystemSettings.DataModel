#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 11 member(s).
namespace winrt::Windows::Internal::SystemSettingsCommand::implementation {
class ActionSettingCommandAdapter {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ActionSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA@AEBUhstring@5@AEBU?$IMapView@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@Foundation@45@AEBU?$IVectorView@Uhstring@winrt@@@8945@@Z
    ActionSettingCommandAdapter(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0ActionSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA@USettingWrapper@2345@AEBU?$IMapView@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@Foundation@45@AEBU?$IVectorView@Uhstring@winrt@@@8945@@Z
    ActionSettingCommandAdapter(WindissectOpaque, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueAsync@ActionSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@UIInspectable@Foundation@Windows@winrt@@@Foundation@56@XZ
    WindissectOpaque GetValueAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAsync@ActionSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@XZ
    WindissectOpaque InitializeAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicableAsync@ActionSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@XZ
    WindissectOpaque IsApplicableAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabledAsync@ActionSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@XZ
    WindissectOpaque IsEnabledAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsExecutableAsync@ActionSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@Uhstring@6@@Z
    WindissectOpaque IsExecutableAsync(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueAsync@ActionSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@UIInspectable@856@U?$IMapView@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@856@@Z
    WindissectOpaque SetValueAsync(WindissectOpaque, WindissectOpaque);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1ActionSettingCommandAdapter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@UEAA@XZ
    virtual ~ActionSettingCommandAdapter();
};
} // namespace winrt::Windows::Internal::SystemSettingsCommand::implementation
