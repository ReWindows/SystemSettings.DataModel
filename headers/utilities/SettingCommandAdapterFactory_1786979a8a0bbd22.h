#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 2 member(s).
namespace winrt::Windows::Internal::SystemSettingsCommand::implementation {
class SettingCommandAdapterFactory {
public:
    class CustomAdapterFactory;
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CreateSettingAdapter@SettingCommandAdapterFactory@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AUISettingCommandAdapter@3456@AEBUhstring@6@@Z
    WindissectOpaque CreateSettingAdapter(WindissectOpaque const &);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetSettingCommandMetadata@SettingCommandAdapterFactory@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AUSettingCommandMetadata@3456@AEBUhstring@6@@Z
    WindissectOpaque GetSettingCommandMetadata(WindissectOpaque const &);
};
} // namespace winrt::Windows::Internal::SystemSettingsCommand::implementation
