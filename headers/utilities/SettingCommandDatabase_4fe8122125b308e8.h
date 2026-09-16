#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 3 member(s).
namespace winrt::Windows::Internal::SystemSettingsCommand::implementation {
class SettingCommandDatabase {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetCommand@SettingCommandDatabase@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AUSettingCommand@3456@AEBUhstring@6@AEBUSettingCommandExecutionContext@3456@0@Z
    WindissectOpaque GetCommand(WindissectOpaque const &, WindissectOpaque const &, WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingCommandMetadata@SettingCommandDatabase@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AUSettingCommandMetadata@3456@AEBUhstring@6@0@Z
    WindissectOpaque GetSettingCommandMetadata(WindissectOpaque const &, WindissectOpaque const &);
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingCommandAdapterFromRegistry@SettingCommandDatabase@implementation@SystemSettingsCommand@Internal@Windows@winrt@@AEAA?AUISettingCommandAdapter@3456@AEBUhstring@6@0@Z
    WindissectOpaque GetSettingCommandAdapterFromRegistry(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::Windows::Internal::SystemSettingsCommand::implementation
