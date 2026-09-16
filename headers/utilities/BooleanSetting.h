#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 11 member(s).
namespace winrt::Windows::Internal::SystemSettingsCommand::implementation {
class BooleanSetting {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0BooleanSetting@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA@AEBUBooleanSettingCommandAdapter@2345@Uhstring@5@1@Z
    BooleanSetting(WindissectOpaque const &, WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueAsync@BooleanSetting@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@XZ
    WindissectOpaque GetValueAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicableAsync@BooleanSetting@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@XZ
    WindissectOpaque IsApplicableAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabledAsync@BooleanSetting@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@XZ
    WindissectOpaque IsEnabledAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueAsync@BooleanSetting@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@_N@Z
    WindissectOpaque SetValueAsync(bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1BooleanSetting@implementation@SystemSettingsCommand@Internal@Windows@winrt@@UEAA@XZ
    virtual ~BooleanSetting();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAdapterIsApplicableChanged@BooleanSetting@implementation@SystemSettingsCommand@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@56@0@Z
    void OnAdapterIsApplicableChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAdapterIsEnabledChanged@BooleanSetting@implementation@SystemSettingsCommand@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@56@0@Z
    void OnAdapterIsEnabledChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAdapterValueChanged@BooleanSetting@implementation@SystemSettingsCommand@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@56@0@Z
    void OnAdapterValueChanged(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::Windows::Internal::SystemSettingsCommand::implementation
