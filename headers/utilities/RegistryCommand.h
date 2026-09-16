#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 3 member(s).
namespace winrt::Windows::Internal::SystemSettingsCommand::Helpers {
class RegistryCommand {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@RegistryCommand@Helpers@SystemSettingsCommand@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z
    void Initialize(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RegistryCommand@Helpers@SystemSettingsCommand@Internal@Windows@winrt@@QEAA@XZ
    ~RegistryCommand();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?LoadProperties@RegistryCommand@Helpers@SystemSettingsCommand@Internal@Windows@winrt@@AEAAXPEAUHKEY__@@@Z
    void LoadProperties(HKEY__*);
};
} // namespace winrt::Windows::Internal::SystemSettingsCommand::Helpers
