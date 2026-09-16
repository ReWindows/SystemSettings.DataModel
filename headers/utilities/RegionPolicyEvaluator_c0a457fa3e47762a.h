#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 2 member(s).
namespace winrt::Windows::Internal::System::Profile::implementation {
class RegionPolicyEvaluator {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EvaluatePolicyState@RegionPolicyEvaluator@implementation@Profile@System@Internal@Windows@winrt@@SA?AW4RegionPolicyState@34567@AEBUguid@7@@Z
    static int EvaluatePolicyState(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ForceEvaluatePolicyState@RegionPolicyEvaluator@implementation@Profile@System@Internal@Windows@winrt@@SA?AW4RegionPolicyState@34567@AEBUguid@7@@Z
    static int ForceEvaluatePolicyState(WindissectOpaque const &);
};
} // namespace winrt::Windows::Internal::System::Profile::implementation
