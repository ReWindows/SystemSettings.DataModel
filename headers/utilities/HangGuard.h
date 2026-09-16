#pragma once
#include "../windissect_forwards.h"

// Reconstructed from SystemSettings.DataModel.dll by Windissect. 19 member(s).
namespace SystemSettings::DataModel {
class HangGuard {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0HangGuard@DataModel@SystemSettings@@QEAA@PEBGPEBD_N@Z
    HangGuard(unsigned short const *, char const *, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1HangGuard@DataModel@SystemSettings@@QEAA@XZ
    ~HangGuard();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?CalculateFnvHash@HangGuard@DataModel@SystemSettings@@AEBAKPEBE_K@Z
    unsigned long CalculateFnvHash(unsigned char const *, uint64_t) const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TerminateOnHangDetected@HangGuard@DataModel@SystemSettings@@AEBAXXZ
    void TerminateOnHangDetected() const;
    // Category: Method | Source: PDB Internal
    // Symbol: ?TraceHangWarningEvent@HangGuard@DataModel@SystemSettings@@AEBAXXZ
    void TraceHangWarningEvent() const;
};
} // namespace SystemSettings::DataModel
