#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 15 member(s).
namespace winrt::Windows::Internal::SystemSettingsCommand::implementation {
class SettingCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Description@SettingCommand@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AUhstring@6@XZ
    WindissectOpaque Description();
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteAsync@SettingCommand@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@USettingCommandExecutionResult@SystemSettingsCommand@Internal@Windows@winrt@@@Foundation@56@U?$IMapView@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@856@@Z
    WindissectOpaque ExecuteAsync(WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDescriptionForState@SettingCommand@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AUhstring@6@W4SettingCommandState@3456@@Z
    WindissectOpaque GetDescriptionForState(int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?InitializeAsync@SettingCommand@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AUIAsyncAction@Foundation@56@XZ
    WindissectOpaque InitializeAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicableAsync@SettingCommand@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@XZ
    WindissectOpaque IsApplicableAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabledAsync@SettingCommand@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@XZ
    WindissectOpaque IsEnabledAsync();
    // Category: Method | Source: PDB Internal
    // Symbol: ?RollbackAsync@SettingCommand@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@USettingCommandExecutionResult@SystemSettingsCommand@Internal@Windows@winrt@@@Foundation@56@XZ
    WindissectOpaque RollbackAsync();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0SettingCommand@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA@AEBUhstring@5@AEBUISettingCommandAdapter@2345@AEBUSettingCommandExecutionContext@2345@@Z
    SettingCommand(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SettingCommand@implementation@SystemSettingsCommand@Internal@Windows@winrt@@UEAA@XZ
    virtual ~SettingCommand();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateExecutionResult@SettingCommand@implementation@SystemSettingsCommand@Internal@Windows@winrt@@AEAA?AUSettingCommandExecutionResult@3456@W4SettingCommandExecutionResultStatus@3456@AEBUhstring@6@@Z
    WindissectOpaque CreateExecutionResult(int, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ExecuteInnerAsync@SettingCommand@implementation@SystemSettingsCommand@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@USettingCommandExecutionResult@SystemSettingsCommand@Internal@Windows@winrt@@@Foundation@56@U?$IMapView@Uhstring@winrt@@UIInspectable@Foundation@Windows@2@@Collections@856@@Z
    WindissectOpaque ExecuteInnerAsync(WindissectOpaque);
    // Category: Method | Source: PDB Internal
    // Symbol: ?LogExecutionResult@SettingCommand@implementation@SystemSettingsCommand@Internal@Windows@winrt@@AEAAXAEBUhstring@6@AEBUSettingCommandExecutionResult@3456@@Z
    void LogExecutionResult(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?RollbackInnerAsync@SettingCommand@implementation@SystemSettingsCommand@Internal@Windows@winrt@@AEAA?AU?$IAsyncOperation@USettingCommandExecutionResult@SystemSettingsCommand@Internal@Windows@winrt@@@Foundation@56@XZ
    WindissectOpaque RollbackInnerAsync();
};
} // namespace winrt::Windows::Internal::SystemSettingsCommand::implementation
