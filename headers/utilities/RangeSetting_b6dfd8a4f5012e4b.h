#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 11 member(s).
namespace winrt::Windows::Internal::SystemSettingsCommand::implementation {
class RangeSetting {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetValueAsync@RangeSetting@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@H@Foundation@56@XZ
    WindissectOpaque GetValueAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsApplicableAsync@RangeSetting@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@XZ
    WindissectOpaque IsApplicableAsync();
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?IsEnabledAsync@RangeSetting@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@_N@Foundation@56@XZ
    WindissectOpaque IsEnabledAsync();
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0RangeSetting@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA@AEBURangeSettingCommandAdapter@2345@Uhstring@5@1@Z
    RangeSetting(WindissectOpaque const &, WindissectOpaque, WindissectOpaque);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?SetValueAsync@RangeSetting@implementation@SystemSettingsCommand@Internal@Windows@winrt@@QEAA?AU?$IAsyncOperation@H@Foundation@56@H@Z
    WindissectOpaque SetValueAsync(int);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1RangeSetting@implementation@SystemSettingsCommand@Internal@Windows@winrt@@UEAA@XZ
    virtual ~RangeSetting();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAdapterIsApplicableChanged@RangeSetting@implementation@SystemSettingsCommand@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@56@0@Z
    void OnAdapterIsApplicableChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAdapterIsEnabledChanged@RangeSetting@implementation@SystemSettingsCommand@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@56@0@Z
    void OnAdapterIsEnabledChanged(WindissectOpaque const &, WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnAdapterValueChanged@RangeSetting@implementation@SystemSettingsCommand@Internal@Windows@winrt@@AEAAXAEBUIInspectable@Foundation@56@0@Z
    void OnAdapterValueChanged(WindissectOpaque const &, WindissectOpaque const &);
};
} // namespace winrt::Windows::Internal::SystemSettingsCommand::implementation
