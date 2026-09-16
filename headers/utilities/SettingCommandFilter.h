#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 4 member(s).
namespace winrt::Windows::Internal::SystemSettingsCommand::implementation {
class SettingCommandFilter {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Filter@SettingCommandFilter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AUSettingCommandFilterResult@3456@AEBUSettingCommandMetadata@3456@AEBUSettingCommandExecutionContext@3456@@Z
    WindissectOpaque Filter(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1SettingCommandFilter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@UEAA@XZ
    virtual ~SettingCommandFilter();
private:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCallerSettingsApp@SettingCommandFilter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@AEBA_NPEBG@Z
    bool IsCallerSettingsApp(unsigned short const *) const;
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsCallerTrustedInternalApplication@SettingCommandFilter@implementation@SystemSettingsCommand@Internal@Windows@winrt@@AEBA_NPEBG@Z
    bool IsCallerTrustedInternalApplication(unsigned short const *) const;
};
} // namespace winrt::Windows::Internal::SystemSettingsCommand::implementation
